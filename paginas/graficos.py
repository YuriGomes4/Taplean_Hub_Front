import streamlit as st
from datetime import datetime, timedelta 

from services import personal_prefs as sv_preferences
from services import vendas as sv_vendas

import pandas as pd
import numpy as np

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

    from .base import base

    print(dia_da_semana)

    base()

    # Crie um array estruturado do NumPy com colunas nomeadas
    data = np.array([(dias[7], dias[0]), (dias[8], dias[1]), (dias[9], dias[2]), (dias[10], dias[3]), (dias[11], dias[4]), (dias[12], dias[5]), (dias[13], dias[6])],dtype=[("X", "i4"), ("Y", "i4")])

    # Crie o DataFrame com as colunas nomeadas
    chart_data = pd.DataFrame(data, columns=['X', 'Y'])

    # Crie um dicionário para mapear os índices numéricos para texto
    index_mapping = {i: f"{i}_{dia_da_semana[i]}" for i in range(7)}

    # Substitua os índices numéricos por texto
    chart_data.index = chart_data.index.map(index_mapping)

    st.line_chart(chart_data)