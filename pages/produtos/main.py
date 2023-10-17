from flet import(
    Container,
    Row,
    Icon,
    icons,
    Column,
    Text,
    MainAxisAlignment,
    TextAlign,
    ListView,
    colors,
    Dropdown,
    dropdown,
)

from services import produtos as sv_extrato
from services import personal_prefs as sv_preferences
from services import config as sv_config
import navigation

extratos = []

#sv_extrato.parse_ofx_file_and_add_to_db("services/NU_3219096_01MAI2023_13MAI2023.ofx")

transactions = []
#print(len(transactions))

def onclick_item(e):
    navigation.ChangeScreen("21", e)
    #pass

def load_prods(transactions):

    extratos = []

    for transaction in transactions:
        if int(transaction['seller']) == int(sv_preferences.get('vendedor')):
            extratos.append(
                Container(
                    Row(
                        [
                            Icon(
                                name=transaction['icone'],
                                color=transaction['color']
                            ),
                            Column(
                                [
                                    Text(transaction['title'], text_align=TextAlign.LEFT, max_lines=1),
                                    Text(transaction['id'], text_align=TextAlign.LEFT, max_lines=1, selectable=True),
                                ],
                                expand=True,
                                spacing=0,
                                alignment=MainAxisAlignment.CENTER,
                            ),
                            Text(f"Liquido R$: {round(float(transaction['price']) - float(transaction['shipping_free_cost']) - float(transaction['sale_fee']) - float(transaction['cost']), 2)}")
                        ],
                        expand=True
                    ),
                    on_click=onclick_item,
                    key=f"{transaction['id']}"
                )
            )
    
    lista.controls = extratos

    navigation.refresh()

def sort_changed(e):
    print(drop.value)
    sv_preferences.set('prod_sort', drop.value)
    load_prods(sv_extrato.prods_sort(drop.value))

drop = Dropdown(on_change=sort_changed)

lista = ListView(
            spacing=5,
            #padding=20,
            expand=True,
            auto_scroll=False,
            #vertical=True,
            controls=extratos,
        )

tela = Column(
    [drop, lista],
    #alignment=MainAxisAlignment.SPACE_AROUND,
    expand=True,
    visible=False
)

def on_visible():
    global transactions
    global extratos
    global lista

    opts = []

    opts.append(dropdown.Option("Normal"))
    opts.append(dropdown.Option("Curva ABC"))

    drop.options = opts
    drop.value = sv_preferences.get("prod_sort")


    print('on_visible Extrato')

    load_prods(transactions = sv_extrato.prods_sort(sv_preferences.get("prod_sort")))

#on_visible()
navigation.paginas.append(
    {
        'objeto': tela,
        'numero': '20',
        'vis_event': on_visible,
        'titulo': f"{sv_config.get('versao')} - Produtos",
    }
)