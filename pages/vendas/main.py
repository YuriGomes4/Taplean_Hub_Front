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
)

from services import extrato as sv_extrato
from services import config as sv_config
from services import vendas as sv_vendas
import navigation

extratos = []

transactions = []
vendas = []

def onclick_item(e):
    navigation.ChangeScreen("01", e)
    #pass

lista = ListView(
            spacing=5,
            #padding=20,
            expand=True,
            auto_scroll=False,
            #vertical=True,
            controls=extratos,
        )

tela = Column(
    [lista],
    #alignment=MainAxisAlignment.SPACE_AROUND,
    expand=True,
    visible=False
)

def on_visible():
    global transactions
    global vendas
    global extratos
    global lista

    print('on_visible Vendas')

    extratos = []

    #transactions = sv_extrato.get_all()
    vendas = sv_vendas.get_all(sv_config.get('vendedor'))

    print(len(vendas))

    for venda in vendas:
        titulo = ""
        first = True

        for item in venda['order_items']:
            if first:
                titulo = item['title']
                first = False
            else:
                if not(item['title'] in titulo):
                    titulo = f"{titulo} + {item['title']}"


        extratos.append(
            Container(
                Row(
                    [
                        Icon(
                            name='add',
                            color=colors.AMBER
                        ),
                        Column(
                            [
                                Text(titulo, text_align=TextAlign.LEFT, max_lines=1),
                                Text(venda['status'], text_align=TextAlign.LEFT, max_lines=1, selectable=True),
                            ],
                            expand=True,
                            spacing=0,
                            alignment=MainAxisAlignment.CENTER,
                        ),
                        Text(f"Total R$: {round(float(venda['total_amount']), 2)}")
                    ],
                    expand=True
                ),
                on_click=onclick_item,
                key=f"{venda['id']}"
            )
        )

    lista.controls = extratos

    navigation.refresh()

#on_visible()
navigation.paginas.append(
    {
        'objeto': tela,
        'numero': '00',
        'vis_event': on_visible,
        'titulo': f"{sv_config.get('versao')} - Vendas",
    }
)