from flet import(
    Column,
    Text,
    FontWeight,
    colors,
    Row,
    Border,
    BorderSide,
    Icon,
    icons,
    margin,
    Container,
    ChartAxis,
    ChartAxisLabel,
    ChartGridLines,
    LineChart,
    LineChartData,
    LineChartDataPoint,
    MainAxisAlignment,
    CrossAxisAlignment,
    alignment
)

import navigation
import services

from datetime import datetime, timedelta

from services import config as sv_config
from services import vendas as sv_vendas
from services import personal_prefs as sv_preferences

def load_chart():


    ano_atual = datetime.now().year
    mes_atual = datetime.now().month
    dia_atual = datetime.now().day
    #data_min = data_max.day

    ano_min = 0
    mes_min = 0
    dia_min = 0

    def is_bissexto(ano):
        if (ano % 4 == 0 and ano % 100 != 0) or (ano % 400 == 0):
            return True
        else:
            return False

    if dia_atual > 13:
        dia_min = dia_atual - 13
        mes_min = mes_atual
        ano_min = ano_atual
    else:
        if mes_atual > 1:
            mes_min = mes_atual-1

            if mes_min in [1, 3, 5, 7, 8, 10, 12]:
                dia_min = (dia_atual+31)-13
            elif mes_min in [4, 6, 9, 11]:
                dia_min = (dia_atual+30)-13
            elif mes_min == 2:
                ano_bi = is_bissexto(ano_atual)

                if ano_bi:
                    dia_min = (dia_atual+29)-13
                else:
                    dia_min = (dia_atual+28)-13
            else:
                print("Erro de caso")
            
            ano_min = ano_atual
        else:
            ano_min = ano_atual-1
            mes_min = 12
            dia_min = (dia_atual+31)-13

    data_atual = datetime.strptime(f"{ano_atual}-{mes_atual}-{dia_atual} 23:59:59", "%Y-%m-%d %H:%M:%S")
    data_min = datetime.strptime(f"{ano_min}-{mes_min}-{dia_min} 00:00:00", "%Y-%m-%d %H:%M:%S")

    vendas = sv_vendas.get_all(sv_preferences.get('vendedor'), data_min, data_atual)

    print(data_atual, data_min)

    dias = [0] * 14

    # Suponhamos que 'vendas' seja uma lista de objetos com a propriedade 'date_created'.
    # data_min é a data inicial do intervalo.
    # data_atual é a data final do intervalo.

    for venda in vendas:
        # Calcula a diferença em dias entre a data da venda e a data mínima.
        diferenca = (datetime.strptime(venda["date_created"], "%Y-%m-%dT%H:%M:%S") - data_min).days

        # Verifica se a venda ocorreu dentro do intervalo de 14 dias.
        #if 0 <= diferenca <= 13:
            # Incrementa o contador no elemento correspondente em 'dias'.
        dias[diferenca] += 1

    # O array 'dias' agora contém a quantidade de vendas para cada dia no intervalo.

    semana = ["Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sábado", "Domingo"]
    dia_da_semana = []

    for i in range(7):
        # Calcule a data do dia atual na sequência.
        data_dia_atual = data_min + timedelta(days=i)
        
        # Obtenha o nome do dia da semana para a data atual.
        dia_da_semana.append(semana[data_dia_atual.weekday()])
        
        #print(f"No {nome_dia_da_semana}, {data_dia_atual.date()}.")
        #print(dias)

    data_1 = [
        LineChartData(
            data_points=[
                LineChartDataPoint(1, dias[0]),
                LineChartDataPoint(2, dias[1]),
                LineChartDataPoint(3, dias[2]),
                LineChartDataPoint(4, dias[3]),
                LineChartDataPoint(5, dias[4]),
                LineChartDataPoint(6, dias[5]),
                LineChartDataPoint(7, dias[6]),
            ],
            stroke_width=8,
            color=colors.BLUE_GREY,
            curved=False,
            stroke_cap_round=True,
        ),
        LineChartData(
            data_points=[
                LineChartDataPoint(1, dias[7]),
                LineChartDataPoint(2, dias[8]),
                LineChartDataPoint(3, dias[9]),
                LineChartDataPoint(4, dias[10]),
                LineChartDataPoint(5, dias[11]),
                LineChartDataPoint(6, dias[12]),
                LineChartDataPoint(7, dias[13]),
            ],
            color=colors.PURPLE,
            below_line_bgcolor=colors.with_opacity(0, colors.PURPLE),
            stroke_width=8,
            curved=False,
            stroke_cap_round=True,
        )
    ]

    try:
    
        chart = LineChart(
            data_series=data_1,
            horizontal_grid_lines=ChartGridLines(),
            border=Border(
                bottom=BorderSide(4, colors.with_opacity(0.5, colors.ON_SURFACE))
            ),
            left_axis=ChartAxis(
                labels_size=40,
                title=Text("Vendas"),
                title_size=40
            ),
            bottom_axis=ChartAxis(
                labels=[
                    ChartAxisLabel(
                        value=1,
                        label=Container(
                            Column(
                                [
                                    Text(
                                        f"{dia_da_semana[0]}",
                                        size=16,
                                        weight=FontWeight.BOLD,
                                        color=colors.with_opacity(0.5, colors.ON_SURFACE),
                                    ),
                                    Row(
                                        [
                                            Text(f"{data_min.day}", size=16, weight=FontWeight.BOLD, color=colors.BLUE_GREY),
                                            Text("e", size=16, weight=FontWeight.BOLD, color=colors.with_opacity(0.5, colors.ON_SURFACE)),
                                            Text(f"{data_atual.day-6}", size=16, weight=FontWeight.BOLD, color=colors.PURPLE)
                                        ]
                                    )
                                ],
                                spacing=0,
                                horizontal_alignment=CrossAxisAlignment.CENTER
                            ),
                            margin=margin.only(top=10),
                        ),
                    ),
                    ChartAxisLabel(
                        value=2,
                        label=Container(
                            Column(
                                [
                                    Text(
                                        f"{dia_da_semana[1]}",
                                        size=16,
                                        weight=FontWeight.BOLD,
                                        color=colors.with_opacity(0.5, colors.ON_SURFACE),
                                    ),
                                    Row(
                                        [
                                            Text(f"{data_min.day+1}", size=16, weight=FontWeight.BOLD, color=colors.BLUE_GREY),
                                            Text("e", size=16, weight=FontWeight.BOLD, color=colors.with_opacity(0.5, colors.ON_SURFACE)),
                                            Text(f"{data_atual.day-5}", size=16, weight=FontWeight.BOLD, color=colors.PURPLE)
                                        ]
                                    )
                                ],
                                spacing=0,
                                horizontal_alignment=CrossAxisAlignment.CENTER
                            ),
                            margin=margin.only(top=10),
                        ),
                    ),
                    ChartAxisLabel(
                        value=3,
                        label=Container(
                            Column(
                                [
                                    Text(
                                        f"{dia_da_semana[2]}",
                                        size=16,
                                        weight=FontWeight.BOLD,
                                        color=colors.with_opacity(0.5, colors.ON_SURFACE),
                                    ),
                                    Row(
                                        [
                                            Text(f"{data_min.day+2}", size=16, weight=FontWeight.BOLD, color=colors.BLUE_GREY),
                                            Text("e", size=16, weight=FontWeight.BOLD, color=colors.with_opacity(0.5, colors.ON_SURFACE)),
                                            Text(f"{data_atual.day-4}", size=16, weight=FontWeight.BOLD, color=colors.PURPLE)
                                        ]
                                    )
                                ],
                                spacing=0,
                                horizontal_alignment=CrossAxisAlignment.CENTER
                            ),
                            margin=margin.only(top=10),
                        ),
                    ),
                    ChartAxisLabel(
                        value=4,
                        label=Container(
                            Column(
                                [
                                    Text(
                                        f"{dia_da_semana[3]}",
                                        size=16,
                                        weight=FontWeight.BOLD,
                                        color=colors.with_opacity(0.5, colors.ON_SURFACE),
                                    ),
                                    Row(
                                        [
                                            Text(f"{data_min.day+3}", size=16, weight=FontWeight.BOLD, color=colors.BLUE_GREY),
                                            Text("e", size=16, weight=FontWeight.BOLD, color=colors.with_opacity(0.5, colors.ON_SURFACE)),
                                            Text(f"{data_atual.day-3}", size=16, weight=FontWeight.BOLD, color=colors.PURPLE)
                                        ]
                                    )
                                ],
                                spacing=0,
                                horizontal_alignment=CrossAxisAlignment.CENTER
                            ),
                            margin=margin.only(top=10),
                        ),
                    ),
                    ChartAxisLabel(
                        value=5,
                        label=Container(
                            Column(
                                [
                                    Text(
                                        f"{dia_da_semana[4]}",
                                        size=16,
                                        weight=FontWeight.BOLD,
                                        color=colors.with_opacity(0.5, colors.ON_SURFACE),
                                    ),
                                    Row(
                                        [
                                            Text(f"{data_min.day+4}", size=16, weight=FontWeight.BOLD, color=colors.BLUE_GREY),
                                            Text("e", size=16, weight=FontWeight.BOLD, color=colors.with_opacity(0.5, colors.ON_SURFACE)),
                                            Text(f"{data_atual.day-2}", size=16, weight=FontWeight.BOLD, color=colors.PURPLE)
                                        ]
                                    )
                                ],
                                spacing=0,
                                horizontal_alignment=CrossAxisAlignment.CENTER
                            ),
                            margin=margin.only(top=10),
                        ),
                    ),
                    ChartAxisLabel(
                        value=6,
                        label=Container(
                            Column(
                                [
                                    Text(
                                        f"{dia_da_semana[5]}",
                                        size=16,
                                        weight=FontWeight.BOLD,
                                        color=colors.with_opacity(0.5, colors.ON_SURFACE),
                                    ),
                                    Row(
                                        [
                                            Text(f"{data_min.day+5}", size=16, weight=FontWeight.BOLD, color=colors.BLUE_GREY),
                                            Text("e", size=16, weight=FontWeight.BOLD, color=colors.with_opacity(0.5, colors.ON_SURFACE)),
                                            Text(f"{data_atual.day-1}", size=16, weight=FontWeight.BOLD, color=colors.PURPLE)
                                        ]
                                    )
                                ],
                                spacing=0,
                                horizontal_alignment=CrossAxisAlignment.CENTER
                            ),
                            margin=margin.only(top=10),
                        ),
                    ),
                    ChartAxisLabel(
                        value=7,
                        label=Container(
                            Column(
                                [
                                    Text(
                                        f"{dia_da_semana[6]}",
                                        size=16,
                                        weight=FontWeight.BOLD,
                                        color=colors.with_opacity(0.5, colors.ON_SURFACE),
                                    ),
                                    Row(
                                        [
                                            Text(f"{data_min.day+6}", size=16, weight=FontWeight.BOLD, color=colors.BLUE_GREY),
                                            Text("e", size=16, weight=FontWeight.BOLD, color=colors.with_opacity(0.5, colors.ON_SURFACE)),
                                            Text(f"{data_atual.day}", size=16, weight=FontWeight.BOLD, color=colors.PURPLE)
                                        ]
                                    )
                                ],
                                spacing=0,
                                horizontal_alignment=CrossAxisAlignment.CENTER
                            ),
                            margin=margin.only(top=10),
                        ),
                    )
                ],
                labels_interval=1,
                labels_size=32,
            ),
            tooltip_bgcolor=colors.with_opacity(0.8, colors.WHITE),
            min_y=0,
            #max_y=4,
            min_x=1,
            max_x=7,
            # animate=5000,
            #margin=margin.only(top=10),
            expand=True,
        )
    except:
        pass
    return chart

tela = Column(
    expand=True,
    visible=False
)

def on_visible():
    global tela
    chart = []
    try:
        chart.append(load_chart())
    except:
        pass

    tela.controls = [
        Row(
            [
                Icon(name=icons.CIRCLE, color=colors.BLUE_GREY), Text("Semana passada"),
                Container(margin=margin.only(left=20, top=60)),
                Icon(name=icons.CIRCLE, color=colors.PURPLE), Text("Semana atual"),
            ],
            #expand=True,
            alignment=MainAxisAlignment.CENTER
        ),
        Container(Row(chart), margin=margin.only(right=80, bottom=80), expand=True)
    ]
    navigation.refresh()

navigation.paginas.append(
    {
        'objeto': tela,
        'numero': '00',
        'vis_event': on_visible,
        'titulo': f"{sv_config.get('versao')} - Gráficos",
    }
)