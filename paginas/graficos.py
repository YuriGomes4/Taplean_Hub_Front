import streamlit as st
from datetime import datetime, timedelta 

#from services import personal_prefs as st.session_state.cookie_manager
from services import vendas as sv_vendas
from services import vendedor as sv_vendedor
from services import personal_prefs as sv_personal_prefs

import pandas as pd
import numpy as np

import plotly.express as px
import plotly.graph_objects as go
from urllib.request import urlopen

import json


def page():

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

    vendas = sv_vendas.get_all(sv_personal_prefs.get('vendedor'), data_min, data_atual)

    print(data_atual, data_min)

    dias = [0] * 14

    dias_visitas = []

    # Suponhamos que 'vendas' seja uma lista de objetos com a propriedade 'date_created'.
    # data_min é a data inicial do intervalo.
    # data_atual é a data final do intervalo.

    for venda in vendas:
        # Calcula a diferença em dias entre a data da venda e a data mínima.
        diferenca = ((datetime.strptime(venda["date_closed"], "%Y-%m-%dT%H:%M:%S") + timedelta(hours=1)) - data_min).days

        # Verifica se a venda ocorreu dentro do intervalo de 14 dias.
        #if 0 <= diferenca <= 13:
            # Incrementa o contador no elemento correspondente em 'dias'.
        dias[diferenca] += 1

        # Lista para armazenar as datas intermediárias


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

    from .base import base

    print(dia_da_semana)

    base()

    # Crie um array estruturado do NumPy com colunas nomeadas
    #data = np.array([(dias[7], dias[0]), (dias[8], dias[1]), (dias[9], dias[2]), (dias[10], dias[3]), (dias[11], dias[4]), (dias[12], dias[5]), (dias[13], dias[6])],dtype=[("X", "i4"), ("Y", "i4")])

    # Crie o DataFrame com as colunas nomeadas
    #chart_data = pd.DataFrame(data, columns=['X', 'Y'])

    # Crie um dicionário para mapear os índices numéricos para texto
    #index_mapping = {i: f"{i}_{dia_da_semana[i]}" for i in range(7)}

    # Substitua os índices numéricos por texto
    #chart_data.index = chart_data.index.map(index_mapping)

    #st.line_chart(chart_data)

    st.title("Gráficos")

    tabs = st.tabs(["Vendas", "Visitas", "localização"])

    data = {
        'Semana': ["Semana passada"] * 7 + ["Semana atual"] * 7,
        'Dia da semana': dia_da_semana * 2,
        'Vendas': dias[0:7] + dias[7:14]
    }

    df = pd.DataFrame(data)

    fig = px.line(df, x='Dia da semana', y='Vendas', color='Semana', title="Vendas semanais", markers=True, color_discrete_sequence=["#999999", st.get_option("theme.primaryColor")])
    fig.update_layout(
        dragmode=False
    )
    
    tabs[0].plotly_chart(fig, use_container_width=True)
    

    if tabs[1].button("Carregar gráfico", use_container_width=True, type='primary'):
        datas_intermediarias = []

        # Loop para gerar as datas intermediárias
        data_inicio = data_min
        while data_inicio <= data_atual:
            datas_intermediarias.append(data_inicio)
            data_inicio += timedelta(days=1)

        # Agora, a lista datas_intermediarias contém todas as datas entre data_inicio e data_fim.
        for data in datas_intermediarias:
            data_str = f"{data.year}-{data.month}-{f'0{data.day}' if len(str(data.day)) == 1 else data.day}"
            dias_visitas.append(sv_vendedor.get_visitas(sv_personal_prefs.get('vendedor'), data_str, data_str))

        data = {
            'Semana': ["Semana passada"] * 7 + ["Semana atual"] * 7,
            'Dia da semana': dia_da_semana * 2,
            'Visitas': dias_visitas[0:7] + dias_visitas[7:14]
        }

        df = pd.DataFrame(data)

        fig = px.line(df, x='Dia da semana', y='Visitas', color='Semana', title="Visitas semanais", markers=True, color_discrete_sequence=["#999999", st.get_option("theme.primaryColor")])
        fig.update_layout(
            dragmode=False
        )
        
        tabs[1].plotly_chart(fig, use_container_width=True)



    #import plotly.express as px

    estados_brasil = {
        "Brasil": "BR",
        "Acre": "AC",
        "Alagoas": "AL",
        "Amapá": "AP",
        "Amazonas": "AM",
        "Bahia": "BA",
        "Ceará": "CE",
        "Distrito Federal": "DF",
        "Espírito Santo": "ES",
        "Goiás": "GO",
        "Maranhão": "MA",
        "Mato Grosso": "MT",
        "Mato Grosso do Sul": "MS",
        "Minas Gerais": "MG",
        "Pará": "PA",
        "Paraíba": "PB",
        "Paraná": "PR",
        "Pernambuco": "PE",
        "Piauí": "PI",
        "Rio de Janeiro": "RJ",
        "Rio Grande do Norte": "RN",
        "Rio Grande do Sul": "RS",
        "Rondônia": "RO",
        "Roraima": "RR",
        "Santa Catarina": "SC",
        "São Paulo": "SP",
        "Sergipe": "SE",
        "Tocantins": "TO"
    }


    select_map = tabs[2].selectbox("Mapa", estados_brasil.keys())

    todas_vendas = sv_vendas.get_all(sv_personal_prefs.get('vendedor'))

    if select_map == "Brasil":
        procura = "state"
        arquivo = "BR-Est.geojson"
        filtrar = False
        titulo = "Vendas totais por estado do Brasil"
    else:
        procura = "city"
        arquivo = f"{estados_brasil[select_map]}.json"
        filtrar = True
        titulo = f"Vendas por cidade de {select_map}"

    div_vendas = {}
    
    file = open(f'assets/{arquivo}', "r", encoding="utf-8")
    map = json.load(file)

    #print(map)

    #state_id_map = {}
    for feature in map ['features']:
        feature['id'] = feature['properties']['name']
    #    state_id_map[feature['properties']['sigla']] = feature['id']
        div_vendas[feature['properties']['name']] = 0

    #print(div_vendas)

    #estados_vendas

    for venda in todas_vendas:
        #str_json = str(venda['shipping']).replace(str(venda['shipping'])[str(venda['shipping']).index("'comment'"):str(venda['shipping']).index("'id'")], ""). replace("None", '"None"').replace("',", '",').replace("':", '":').replace("']", '"]').replace("'}", '"}').replace("['", '["').replace("{'", '{"').replace(" '", ' "')

        str_json = str(venda['shipping'])

        while str_json.__contains__("'comment':"):
            ind1 = str_json.index("'comment':")
            ind2 = ind1+str_json[ind1:ind1+500].index("'id'")
            str_json = str_json.replace(str_json[ind1:ind2], "")

        fix_json = str_json.replace("None", '"None"').replace("',", '",').replace("':", '":').replace("']", '"]').replace("'}", '"}').replace("['", '["').replace("{'", '{"').replace(" '", ' "')
            

        #print(fix_json)

        correcao_mapa = {
            "Bonfim Paulista": "Ribeirão Preto",
            "Major Prado": "Santo Antônio do Aracanguá",
            "Paruru": "Ibiúna",
            "Primavera": "Rosana",
            "Caruara": "Santos",
        }

        ship = json.loads(fix_json)
        if not(str(venda['shipping']).__contains__("not_found_shipping_for_order_id")):
            if filtrar:
                if str(ship['receiver_address']['state']['id']).replace("BR-", "") == estados_brasil[select_map]:
                    if str(ship['receiver_address'][procura]['name']) in correcao_mapa.keys():
                        div_vendas[correcao_mapa[str(ship['receiver_address'][procura]['name'])]] += 1
                    else:
                        div_vendas[str(ship['receiver_address'][procura]['name'])] += 1
            else:
                if str(ship['receiver_address'][procura]['name']) in correcao_mapa.keys():
                    div_vendas[correcao_mapa[str(ship['receiver_address'][procura]['name'])]] += 1
                else:
                    div_vendas[str(ship['receiver_address'][procura]['name'])] += 1

    data = {
        "Estados": div_vendas.keys(),
        "Vendas": div_vendas.values(),
    }

    df = pd.DataFrame(data)

    #print(df)

    fig2 = px.choropleth(
        df,
        locations='Estados', # Spatial coordinates
        color="Vendas",
        geojson=map,
        color_continuous_scale=["#0f0888", "#b22c8f", "#f0814e", "#f1f622"],
        range_color=[0, max(div_vendas.values())/2 if max(div_vendas.values())/2 > 3 else 3]
        #range_color=[0, 15 if max(div_vendas.values()) > 0 else 3]
    )

    fig2.update_layout(
        title_text = titulo,
        #geo_scope='south america', # limite map scope to USA
    )

    fig2.update_geos(
        fitbounds="locations",
        visible=False,
    )

    tabs[2].plotly_chart(fig2, use_container_width=True)

    df_sorted = df.sort_values(by='Vendas', ascending=False)

    tabs[2].dataframe(df_sorted, hide_index=True, use_container_width=True)