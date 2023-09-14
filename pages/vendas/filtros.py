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
    Checkbox,
)

import navigation
import services
from .main import transactions

from services import extrato as sv_extrato
from services import config as sv_config

save_temp = False

addit = ""


dias = []

meses = [
    dropdown.Option(1),
    dropdown.Option(2),
    dropdown.Option(3),
    dropdown.Option(4),
    dropdown.Option(5),
    dropdown.Option(6),
    dropdown.Option(7),
    dropdown.Option(8),
    dropdown.Option(9),
    dropdown.Option(10),
    dropdown.Option(11),
    dropdown.Option(12),
]

anos = [
    dropdown.Option(2019),
    dropdown.Option(2020),
    dropdown.Option(2021),
    dropdown.Option(2022),
    dropdown.Option(2023),
]

procura = TextField(hint_text="ID da venda ou ID do produto")
dia_start = Dropdown(options=dias, width=50)
mes_start = Dropdown(options=meses, key="start", width=50)
ano_start = Dropdown(options=anos, width=80)
dia_end = Dropdown(width=50)
mes_end = Dropdown(options=meses, key="end", width=50)
ano_end = Dropdown(options=anos, width=80)
check_procura = Checkbox()
check_data = Checkbox()
btn_aplicar = FilledTonalButton("Aplicar filtros")

def mes_start_change(e):
    global dias
    global dia_start
    global mes_start
    global ano_start

    dias = []

    def is_bissexto(ano):
        if (ano % 4 == 0 and ano % 100 != 0) or (ano % 400 == 0):
            return True
        else:
            return False
        
    mes = str(mes_start.value)
        
    if mes in ["1", "3", "5", "7", "8", "10", "12"]:
        for num in range(31):
            dias.append(dropdown.Option(num + 1))
    elif mes in ["4", "6", "9", "11"]:
        for num in range(30):
            dias.append(dropdown.Option(num + 1))
    elif mes == "2":
        ano_bi = is_bissexto(int(ano_start.value))

        if ano_bi:
            for num in range(29):
                dias.append(dropdown.Option(num + 1))
        else:
            for num in range(28):
                dias.append(dropdown.Option(num + 1))
    else:
        print("Erro de caso")

    #print(dias)
    #print(f"A{mes_start.value}A")



    #tela
    dia_start.options = dias
    navigation.refresh()

def mes_end_change(e):
    global dias
    global dia_end
    global mes_end
    global ano_end

    dias = []

    def is_bissexto(ano):
        if (ano % 4 == 0 and ano % 100 != 0) or (ano % 400 == 0):
            return True
        else:
            return False
        
    mes = str(mes_end.value)
        
    if mes in ["1", "3", "5", "7", "8", "10", "12"]:
        for num in range(31):
            dias.append(dropdown.Option(num + 1))
    elif mes in ["4", "6", "9", "11"]:
        for num in range(30):
            dias.append(dropdown.Option(num + 1))
    elif mes == "2":
        ano_bi = is_bissexto(int(ano_end.value))

        if ano_bi:
            for num in range(29):
                dias.append(dropdown.Option(num + 1))
        else:
            for num in range(28):
                dias.append(dropdown.Option(num + 1))
    else:
        print("Erro de caso")

    #print(dias)
    #print(f"A{mes_start.value}A")



    #tela
    dia_end.options = dias
    navigation.refresh()

def checkbox_change(e):
    global check_procura
    global check_data
    global btn_aplicar

    if check_data.value == False and check_procura.value == False:
        btn_aplicar.disabled = True
    else:
        btn_aplicar.disabled = False

    navigation.refresh()

def aplicar_filtros(e):
    #navigation.ChangeScreen("02", e)

    ok = True

    if check_procura.value == True and procura.value != "":
        sv_config.set("procura", procura.value)
        #print(procura.value[0:3].lower())
        if procura.value[0:3].lower() == "mlb":
            sv_config.set("tipo_procura", "item")
        else:
            sv_config.set("tipo_procura", "venda")
    else:
        sv_config.set("procura", "")
        sv_config.set("tipo_procura", "")

    if check_data.value == True:
        data1 = datetime.strptime(f"{ano_start.value}-{mes_start.value}-{dia_start.value} 00:00:00.0000", "%Y-%m-%d %H:%M:%S.%f")
        data2 = datetime.strptime(f"{ano_end.value}-{mes_end.value}-{dia_end.value} 00:00:00.0000", "%Y-%m-%d %H:%M:%S.%f")

        if data1 <= data2:
            sv_config.set("data", f"{ano_start.value}-{mes_start.value}-{dia_start.value}/{ano_end.value}-{mes_end.value}-{dia_end.value}")
        else:
            navigation.notify("Data inicial maior que a data final!")
            ok = False
    else:
        sv_config.set("data", "False")

    
    if ok:
        navigation.BackScreen(e)

def remover_filtros(e):
    sv_config.set("procura", "")
    sv_config.set("tipo_procura", "")
    sv_config.set("data", "False")
    navigation.BackScreen(e)


mes_start.on_change=mes_start_change
ano_start.on_change=mes_start_change
mes_end.on_change=mes_end_change
ano_end.on_change=mes_end_change
check_procura.on_change=checkbox_change
check_data.on_change=checkbox_change
btn_aplicar.on_click=aplicar_filtros

tela = Column(
    [
        Container(
            Column(
                [
                    Row([check_procura, Text(f"Procura:"), procura]),
                    Row([
                        check_data,
                        Text(f"Período:"), 
                        dia_start,
                        Text("/"),
                        mes_start,
                        Text("/"),
                        ano_start,
                        Text(" até "),
                        dia_end,
                        Text("/"),
                        mes_end,
                        Text("/"),
                        ano_end,
                    ]),
                    Row([
                            btn_aplicar,
                            FilledTonalButton("Remover filtros", on_click=remover_filtros),
                        ]),
                    
                ]
            )
        )
    ],
    visible=False
)

def on_visible():
    global addit
    global dias
    global meses
    global anos
    global procura
    global dia_start
    global mes_start
    global ano_start
    global dia_end
    global mes_end
    global ano_end

    global save_temp

    if sv_config.get("procura") != "":
        check_procura.value = True
        procura.value = sv_config.get("procura")
    else:
        check_procura.value = False
        procura.value = ""

    if sv_config.get("data") != "False":
        check_data.value = True

        datas = str(sv_config.get("data")).split('/')

        data = datas[0].split('-')

        ano_start.value = data[0]
        mes_start.value = data[1]
        mes_start_change("opa")
        dia_start.value = data[2]

        data = datas[1].split('-')

        ano_end.value = data[0]
        mes_end.value = data[1]
        mes_end_change("opa")
        dia_end.value = data[2]


    else:
        check_data.value = False

        data_atual = datetime.now()

        ano_start.value = data_atual.year
        mes_start.value = data_atual.month
        mes_start_change("opa")
        dia_start.value = 1

        ano_end.value = data_atual.year
        mes_end.value = data_atual.month
        mes_end_change("opa")
        dia_end.value = data_atual.day

    checkbox_change("opa")

    #dias = ["1", "2", "3"]

    #dia_start.options= dias
    #tela.controls[0].content.controls[1].controls[1].options = dias
    #print(tela.controls[0].content.controls[1].controls[1])


    print(f"Opa: {addit}")

#navigation.paginas.append([tela,0,1,on_visible,"Detalhes do produto"])

navigation.paginas.append(
    {
        'objeto': tela,
        'numero': '01',
        'vis_event': on_visible,
        'titulo': "Filtros",
    }
)
