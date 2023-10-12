from flet import(
    Column,
    Text,
    TextField,
    KeyboardType,
    Row,
    Dropdown,
    dropdown,
    icons,
    Container,
    ListView,
    margin,
    IconButton,
    FilledTonalButton,
)

import navigation
import services

addit = ""
product_id = ""
id_regra = ""

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

colunas = []
operacoes = []

for key in colunas_dict:
    colunas.append(dropdown.Option(text=key))

for key in operacoes_dict:
    operacoes.append(dropdown.Option(text=key))

ref_id = Text()
coluna_obj = Dropdown(options=colunas)
operador = Dropdown(options=operacoes)
valor_obj = TextField()
coluna_new = Dropdown(options=colunas)
valor_new = TextField()

def controle_dados():
    global valor_new
    global valor_obj

    if ref_id.value != "" and coluna_obj.value != "" and operador.value != "" and valor_obj.value != "" and coluna_new.value != "" and valor_new.value != "":


        valor1_ver = False
        valor2_ver = False

        valor1_type = ""
        valor2_type = ""


        def ver_valor(texto, nome):

            e_texto = False
            
            espc = 0
            virg = False
            for caractere in texto:
                if caractere.isdigit():
                    pass
                    #return True
                elif caractere == '.':
                    espc += 1
                    #return True
                elif caractere == ',':
                    espc += 1
                    virg = True
                    #return True
                else:
                    e_texto = True
                
            if not(e_texto):
                if espc <= 1:
                    if texto[0].isdigit():
                        if virg:
                            navigation.notify(f"{nome} precisa ser um '.' para separar as casas decimais, e não uma ','")
                        else:
                            return True, "num"
                    else:
                        navigation.notify(f"{nome} contém um número inválido.")
                else:
                    navigation.notify(f"{nome} só pode ter apenas um . ou , para números.")
            else:
                return True, "text"
            
        valor1_ver, valor1_type = ver_valor(valor_obj.value, "Campo analisado")
        valor2_ver, valor2_type = ver_valor(valor_new.value, "Campo a ser alterado")

        if valor1_type == "num":
            valor_obj.value.replace(",", ".")
        if valor2_type == "num":
            valor_new.value.replace(",", ".")
            
        if valor1_ver and valor2_ver:
            return True
            
        
        #return True
    else:
        navigation.notify("Nenhum campo pode estar vazio")

def salvar_regra(e):
    global addit
    global id_regra
    global product_id

    global ref_id
    global coluna_obj
    global operador
    global valor_obj
    global coluna_new
    global valor_new

    if controle_dados():
            
        dict_regra = {
            "ref_id_obj": ref_id.value,
            "tabela_obj": "produtos",
            "coluna_obj": colunas_dict[coluna_obj.value],
            "valor_obj": valor_obj.value,
            "operador": operacoes_dict[operador.value],
            "funcao": "alterar_produto",
            "ref_id_new": ref_id.value,
            "tabela_new": "produtos",
            "coluna_new": colunas_dict[coluna_new.value],
            "valor_new": valor_new.value,
        }

        if addit == "create":
            services.produtos.add_regra(dict_regra)
        else:
            services.produtos.update_regra(id_regra, dict_regra)

        navigation.addit = product_id
        navigation.BackScreen(e)

def cancelar(e):
    global product_id
    navigation.addit = product_id
    navigation.BackScreen(e)


tela = Column(
    [
        Row([Text(f"ID:"), ref_id]),
        Row([Text(f"Campo analisado:"), coluna_obj]),
        Row([Text(f"Analisador:"), operador]),
        Row([Text(f"Valor esperado:"), valor_obj]),
        Row([Text(f"Campo a ser alterado:"), coluna_new]),
        Row([Text(f"Valor a ser colocado:"), valor_new]),
        Row([
            FilledTonalButton("Salvar", on_click=salvar_regra),
            FilledTonalButton("Cancelar", on_click=cancelar),
        ]),
    ],
    expand=True,
    visible=False
)


def on_visible():
    global tela
    global addit
    global id_regra
    global product_id

    global ref_id
    global coluna_obj
    global operador
    global valor_obj
    global coluna_new
    global valor_new

    product_id = str(navigation.addit).split('@@')[0]
    addit = str(navigation.addit).split('@@')[1]

    if addit == "create":
        ref_id.value = product_id
    else:
        id_regra = addit
        regra = services.produtos.get_regra(id_regra)


        inverted_colunas = {v: k for k, v in colunas_dict.items()}
        inverted_operacoes = {v: k for k, v in operacoes_dict.items()}


        ref_id.value = regra['ref_id_obj']
        coluna_obj.value = inverted_colunas[regra['coluna_obj']]
        operador.value = inverted_operacoes[regra['operador']]
        valor_obj.value = regra['valor_obj']
        coluna_new.value = inverted_colunas[regra['coluna_new']]
        valor_new.value = regra['valor_new']

    navigation.refresh()

navigation.paginas.append(
    {
        'objeto': tela,
        'numero': '12',
        'vis_event': on_visible,
        'titulo': "Adicionar/editar regra",
    }
)