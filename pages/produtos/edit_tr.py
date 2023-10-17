from datetime import datetime
from flet import(
    Column,
    Text,
    Container,
    Row,
    TextField,
    FilledTonalButton,
    Dropdown,
    dropdown,
    KeyboardType,
    Tabs,
    Tab,
    ListView,
    TextAlign,
    MainAxisAlignment,
    FontWeight,
    CrossAxisAlignment,
    ElevatedButton,
    border,
    margin,
    padding
)

import navigation
import services
from .main import transactions

from services import produtos as sv_extrato

save_temp = False

addit = ""

id = Text(f"", selectable=True)
category_id = Text(f"", selectable=True)
cost = TextField(keyboard_type=KeyboardType.NUMBER)
price = Text(f"", selectable=True)
title = Text(f"", selectable=True)
listing_type_id = Text(f"", selectable=True)
free_shipping = 0
free_shipping_text = Text("")
shipping_free_cost = Text(f"", selectable=True)
sale_fee = Text(f"", selectable=True)
liquido = Text(f"", selectable=True)
sales = Text(f"", selectable=True)

def salvar_extrato(e):


    new_values = {
        'category_id': category_id.value,
        'cost': cost.value,
        'price': price.value,
        'title': title.value,
        'listing_type_id': listing_type_id.value,
        'free_shipping': free_shipping,
        'shipping_free_cost': shipping_free_cost.value,
        'sale_fee': sale_fee.value
    }
    #print("opa: ", id)

    services.produtos.modify_Produtos_row(id.value, False, new_values)

    navigation.BackScreen("")

def onclick_regra(e):
    navigation.ChangeScreen("12", e)

def onclick_deleteregra(e):
    services.produtos.delete_regra(e.control.key)
    on_visible()
    navigation.refresh()

detalhes = Column(
    [
        Container(
            Column(
                [
                    Row([Text(f"MLB:"), id]),
                    Row([Text(f"Categoria:"), category_id]),
                    Row([Text(f"Custo:"), cost]),
                    Row([Text(f"Preço de venda:"), price]),
                    Row([Text(f"Título:"), title]),
                    Row([Text(f"Tipo de anúncio:"), listing_type_id]),
                    Row([Text(f"Frete grátis:"), free_shipping_text]),
                    Row([Text(f"Custo de frete:"), shipping_free_cost]),
                    Row([Text(f"Taxas de venda:"), sale_fee]),
                    Row([Text(f"Líquido: R$"), liquido]),
                    Row([Text(f"Vendas:"), sales]),
                    Row([
                            FilledTonalButton("Salvar", on_click=salvar_extrato),
                            FilledTonalButton("Cancelar", on_click=navigation.BackScreen),
                        ]),
                    
                ]
            )
        )
    ],
    visible=True
)

tab_regras = ListView(
            spacing=5,
            #padding=20,
            expand=True,
            auto_scroll=False,
            #vertical=True,
        )

lista_historico = ListView(
            spacing=5,
            #padding=20,
            expand=True,
            auto_scroll=False,
            #vertical=True,
        )


tela = Column(
    controls=[
        Tabs(
            selected_index=0,
            animation_duration=300,
            tabs=[
                Tab(
                    text="Detalhes",
                    content=detalhes
                ),
                Tab(
                    text="Regras",
                    content=tab_regras
                ),
                Tab(
                    text="Historico de mudanças",
                    content=lista_historico
                )
            ],
            expand=True
        )
    ],
    expand=True,
    visible=False
)

def on_visible():
    global addit
    global id
    global category_id
    global cost
    global price
    global title
    global listing_type_id
    global free_shipping
    global free_shipping_text
    global shipping_free_cost
    global sale_fee

    global save_temp

    #if str(navigation.addit)[0] == "@":
    #    category_id.text = services.categorias.get_cat(int(str(navigation.addit)[1:])).nome
        #category_id.on_click = onclick_item
    #    category_id.key = int(str(navigation.addit)[1:])

    if save_temp == False:
        addit = navigation.addit
        
        all = services.produtos.get_all()

        for transaction in all:
            if transaction['id'] == addit:
                id.value = transaction['id']
                category_id.value = transaction['category_id']
                cost.value = transaction['cost']
                price.value = transaction['price']
                title.value = transaction['title']
                listing_type_id.value = transaction['listing_type_id']
                free_shipping = transaction['free_shipping']
                if int(free_shipping) == 1:
                    free_shipping_text.value = "Sim"
                else: 
                    free_shipping_text.value = "Não"
                shipping_free_cost.value = transaction['shipping_free_cost']
                sale_fee.value = transaction['sale_fee']
                liquido.value = round(float(transaction['price']) - float(transaction['shipping_free_cost']) - float(transaction['sale_fee']) - float(transaction['cost']), 2)
                sales.value = transaction['sales']
    else:
        save_temp = False


    regras = sv_extrato.get_regras(addit)

    print(regras)

    lista_regras = []

    colunas_dict = {
        "ID Categoria" : "category_id",
        "Custo" : "cost",
        "Preço" : "price",
        "Título" : "title",
        "Tipo de anúncio" : "listing_type_id",
        "Frete grátis" : "free_shipping",
        "Custo de frete grátis" : "shipping_free_cost",
        "Taxa de venda" : "sale_fee",
        "Vendas" : "sales",
        "Faturamento total" : "invoicing",
    }

    operacoes_dict = {
        "Maior ou igual" : ">=",
        "Maior" : ">",
        "Menor ou igual" : "<=",
        "Menor" : "<",
        "Igual" : "==",
        "Diferente" : "!=",
    }

    inverted_colunas = {v: k for k, v in colunas_dict.items()}
    inverted_operacoes = {v: k for k, v in operacoes_dict.items()}

    try:

        for regra in regras:

            if regra['feito'] == False:

                lista_regras.append(
                    Container(
                        Row(
                            [
                                Text(f"{regra['id']}  "),
                                Column(
                                    [
                                        Text(f"ID", weight=FontWeight.BOLD),
                                        Text(regra['ref_id_obj'])
                                    ],
                                    horizontal_alignment=CrossAxisAlignment.CENTER
                                ),
                                Column(
                                    [
                                        Text(f"Campo analisado", weight=FontWeight.BOLD),
                                        Text(inverted_colunas[regra['coluna_obj']])
                                    ],
                                    horizontal_alignment=CrossAxisAlignment.CENTER
                                ),
                                Column(
                                    [
                                        Text(f"Analisador", weight=FontWeight.BOLD),
                                        Text(inverted_operacoes[regra['operador']])
                                    ],
                                    horizontal_alignment=CrossAxisAlignment.CENTER
                                ),
                                Column(
                                    [
                                        Text(f"Valor esperado", weight=FontWeight.BOLD),
                                        Text(regra['valor_obj'])
                                    ],
                                    horizontal_alignment=CrossAxisAlignment.CENTER
                                ),
                                Column(
                                    [
                                        Text(f"Campo a ser alterado", weight=FontWeight.BOLD),
                                        Text(inverted_colunas[regra['coluna_new']])
                                    ],
                                    horizontal_alignment=CrossAxisAlignment.CENTER
                                ),
                                Column(
                                    [
                                        Text(f"Valor a ser colocado", weight=FontWeight.BOLD),
                                        Text(regra['valor_new'])
                                    ],
                                    horizontal_alignment=CrossAxisAlignment.CENTER
                                ),
                                Column(
                                    [
                                        ElevatedButton("Editar regra", icon="edit_rounded", on_click=onclick_regra, key=f"{addit}@@{regra['id']}"),
                                        ElevatedButton("Deletar regra", icon="delete_rounded", on_click=onclick_deleteregra, key=regra['id']),
                                    ]
                                )
                            ]
                        ),
                        border=border.only(bottom=border.BorderSide(1, "white")),
                        padding=padding.symmetric(vertical=10)
                    )
                )

        
        lista_regras.append(
            Container(
                Row(
                    [
                        ElevatedButton("Adicionar regra", icon="add", on_click=onclick_regra, key=f"{addit}@@create")
                    ]
                )
            )
        )
    except:
        print("Erro ao mostrar regras")


    mudancas = sv_extrato.product_changes(addit)

    # Função para extrair a data de cada mudança
    def extrair_data(mudanca):
        data = datetime.strptime(mudanca['date'], "%Y-%m-%dT%H:%M:%S.%f")
        return data

    # Classifique as mudanças com base na data
    mudancas_ordenadas = sorted(mudancas, key=extrair_data, reverse=True)

    # Agora 'mudancas_ordenadas' contém as mudanças ordenadas por data

    historico = []

    for mudanca in mudancas_ordenadas:
        data = datetime.strptime(mudanca['date'], "%Y-%m-%dT%H:%M:%S.%f")
        historico.append(
            Container(
                Row(
                    [
                        Text(f"{mudanca['change']}", width=100),
                        Column(
                            [
                                Text(f"Depois: {mudanca['new_value']}", text_align=TextAlign.LEFT, max_lines=1, selectable=True),
                                Text(f"Antes: {mudanca['old_value']}", text_align=TextAlign.LEFT, max_lines=1, selectable=True),
                            ],
                            expand=True,
                            spacing=0,
                            alignment=MainAxisAlignment.CENTER,
                        ),
                        Text(f"{data.day}/{data.month}/{data.year} - {data.hour}:{data.minute}")
                    ],
                    expand=True
                ),
                #on_click=onclick_item,
                key=f"{mudanca['ref_id']}"
            )
        )

    tab_regras.controls = lista_regras
    lista_historico.controls = historico


    print(f"Opa: {addit}")

#navigation.paginas.append([tela,0,1,on_visible,"Detalhes do produto"])

navigation.paginas.append(
    {
        'objeto': tela,
        'numero': '21',
        'vis_event': on_visible,
        'titulo': "Detalhes do produto",
    }
)
