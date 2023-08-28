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
)

import navigation
import services
from .main import transactions

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


for transaction in transactions:
    if transaction['id'] == addit:
        id.value = f"{transaction['id']}"
        category_id.value = f"{transaction['category_id']}"
        cost.value = f"{transaction['cost']}"
        price.value = f"{transaction['price']}"
        title.value = f"{transaction['title']}"
        listing_type_id.value = f"{transaction['listing_type_id']}"
        free_shipping = transaction['free_shipping']
        if int(free_shipping) == 1:
            free_shipping_text.value = "Sim"
        else: 
            free_shipping_text.value = "Não"
        shipping_free_cost.value = f"{transaction['shipping_free_cost']}"
        sale_fee.value = f"{transaction['sale_fee']}"

def salvar_extrato(e):


    new_values = [category_id.value, cost.value, price.value, title.value, listing_type_id.value, free_shipping, shipping_free_cost.value, sale_fee.value]
    print("opa: ", id)

    services.extrato.modify_Produtos_row(id.value, new_values)

    navigation.BackScreen("")

def onclick_item(e):
    navigation.ChangeScreen("12", e)

tela = Column(
    [
        Container(
            Column(
                [
                    Row(
                        [
                            Text(f"MLB: "), id
                        ]
                    ),
                    Row(
                        [
                            Text(f"Categoria: "), category_id
                        ]
                    ),
                    Row(
                        [
                            Text(f"Custo: "), cost
                        ]
                    ),
                    Row(
                        [
                            Text(f"Preço de venda: "), price
                        ]
                    ),
                    Row(
                        [
                            Text(f"Título: "), title
                        ]
                    ),
                    Row(
                        [
                            Text(f"Tipo de anúncio: "), listing_type_id
                        ]
                    ),
                    Row(
                        [
                            Text(f"Frete grátis: "), free_shipping_text
                        ]
                    ),
                    Row(
                        [
                            Text(f"Custo de frete: "), shipping_free_cost
                        ]
                    ),
                    Row(
                        [
                            Text(f"Taxas de venda: "), sale_fee
                        ]
                    ),
                    Row(
                        [
                            FilledTonalButton("Salvar", on_click=salvar_extrato),
                            FilledTonalButton("Cancelar", on_click=navigation.BackScreen),
                        ]
                    ),
                    
                ]
            )
        )
    ],
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
        
        all = services.extrato.get_all()

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
    else:
        save_temp = False


    print(f"Opa: {addit}")

#navigation.paginas.append([tela,0,1,on_visible,"Detalhes do produto"])

navigation.paginas.append(
    {
        'objeto': tela,
        'numero': '11',
        'vis_event': on_visible,
        'titulo': "Detalhes do produto",
    }
)
