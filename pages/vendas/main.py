from datetime import datetime
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
    FilledTonalButton
)

from services import produtos as sv_extrato
from services import config as sv_config
from services import vendas as sv_vendas
import navigation

extratos = []

transactions = []
vendas = []

texto_vendas = Text("Vendas: 0")

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
    [
        Row([FilledTonalButton(text="Filtros", on_click=onclick_item), texto_vendas]),
        lista
    ],
    #alignment=MainAxisAlignment.SPACE_AROUND,
    expand=True,
    visible=False
)

def on_visible():
    global transactions
    global vendas
    global extratos
    global lista

    global texto_vendas

    print('on_visible Vendas')

    extratos = []

    #transactions = sv_extrato.get_all()
    vendas = sv_vendas.get_all(sv_config.get('vendedor'))

    print(len(vendas))

    try: 
        cont = 0

        for venda in vendas:
            titulo = ""
            first = True

            filtrado = True

            for item in venda['order_items']:
                if first:
                    titulo = item['title']
                    first = False
                else:
                    if not(item['title'] in titulo):
                        titulo = f"{titulo} + {item['title']}"

            procura = sv_config.get("procura")
            tipo_procura = sv_config.get("tipo_procura")
            data = str(sv_config.get("data"))

            try:
                if procura != "":
                    #print("Filtro procura")
                    if tipo_procura == "item":
                        for item in venda['order_items']:
                            if not(str(procura).lower() in str(item['item_id']).lower()):
                                filtrado = False

                    elif tipo_procura == "venda":
                        if not(procura in str(venda['id'])):
                            filtrado = False

                if data != "False":
                    datas = str(sv_config.get("data")).split('/')

                    data_temp = datas[0].split('-')
                    data1 = datetime(int(data_temp[0]), int(data_temp[1]), int(data_temp[2]))
                    data_temp = datas[1].split('-')
                    data2 = datetime(int(data_temp[0]), int(data_temp[1]), int(data_temp[2]), 23, 59, 59)

                    #print("hdakjshdjahkj")

                    order_date = datetime.strptime(str(venda['date_created']), "%Y-%m-%dT%H:%M:%S")

                    if not(data1 <= order_date <= data2):
                        filtrado = False

            except:
                pass

            if filtrado == True:
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
                        key=f"{venda['id']}"
                    )
                )
                cont += 1
            else:
                #print("Filtrado")
                pass

        texto_vendas.value = f"Vendas: {cont}"
    except:
        pass

    #print(extratos)

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