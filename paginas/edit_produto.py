from datetime import datetime, date
import streamlit as st
import services
import pandas as pd

from services import usuarios

def page():
    from .base import base

    base()

    produto = st.session_state.produto

    st.write(f"#### Produto {produto['title']}")

    abas = []

    abas.append("Detalhes")
    if usuarios.tenho_acesso('produtos_regras'):
        abas.append("Regras")
    if usuarios.tenho_acesso('produtos_historico'):
        abas.append("Histórico")

    tabs = st.tabs(abas)
    #tabs_name["Detalhes"], tabs_name["Regras"], tabs_name["Histórico"] = st.tabs(["Detalhes", "Regras", "Histórico"])

    tabs_name = {}

    count = 0
    for aba in abas:
        tabs_name[aba] = tabs[count]
        count += 1

    ######################################### - Detalhes

    if "Detalhes" in tabs_name.keys():

        free_shipping = produto['free_shipping']
        if int(free_shipping) == 1:
            free_shipping_text = "Sim"
        else: 
            free_shipping_text = "Não"

        liquido = round(float(produto['price']) - float(produto['shipping_free_cost']) - float(produto['sale_fee']) - float(produto['cost']), 2)


        tabs_name["Detalhes"].write(f"MLB: {produto['id']}"),
        tabs_name["Detalhes"].write(f"Categoria: {produto['category_id']}"),
        custo = tabs_name["Detalhes"].number_input("Custo", value=float(produto['cost']))
        #tabs_name["Detalhes"].write(f"Custo: {produto['cost']}"),
        tabs_name["Detalhes"].write(f"Preço de venda: {produto['price']}"),
        tabs_name["Detalhes"].write(f"Título: {produto['title']}"),
        tabs_name["Detalhes"].write(f"Tipo de anúncio: {produto['listing_type_id']}"),
        tabs_name["Detalhes"].write(f"Frete grátis: {free_shipping_text}"),
        tabs_name["Detalhes"].write(f"Custo de frete: {produto['shipping_free_cost']}"),
        tabs_name["Detalhes"].write(f"Taxas de venda: {produto['sale_fee']}"),
        tabs_name["Detalhes"].write(f"Líquido: R$ {liquido}"),
        tabs_name["Detalhes"].write(f"Vendas: {produto['sales']}"),
        if tabs_name["Detalhes"].button("Salvar", type='primary', use_container_width=True):

            new_values = {
                'category_id': produto['category_id'],
                'cost': custo,
                'price': produto['price'],
                'title': produto['title'],
                'listing_type_id': produto['listing_type_id'],
                'free_shipping': free_shipping,
                'shipping_free_cost': produto['shipping_free_cost'],
                'sale_fee': produto['sale_fee'],
            }

            services.produtos.modify_Produtos_row(produto['id'], False, new_values)

            if st.session_state.page != "10":
                st.session_state.page = "10"
                st.rerun()

        if tabs_name["Detalhes"].button("Cancelar", type='secondary', use_container_width=True):
            if st.session_state.page != "10":
                st.session_state.page = "10"
                st.rerun()

        regras = services.produtos.get_regras(produto['id'])

        #print(len(regras))

    ######################################### - Regras

    if "Regras" in tabs_name.keys():

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

        cont = 1

        for regra in regras:

            if regra['feito'] == False:

                text = f"""

    | Campo analisado | Analisador | Valor esperado | Campo a ser alterado | Valor a ser colocado |
    |----------|----------|----------|----------|----------|
    | {inverted_colunas[regra["coluna_obj"]]} | {inverted_operacoes[regra["operador"]]} | {regra["valor_obj"]} | {inverted_colunas[regra["coluna_new"]]} | {regra["valor_new"]} |
    """

                #tabs_name["Regras"].markdown(text)
                cor = "red"
                tabs_name["Regras"].markdown(f"##### Regra {cont}")
                tabs_name["Regras"].markdown(f"""<p>Se o valor do campo <span style="color: {cor}">{inverted_colunas[regra["coluna_obj"]]}</span> do produto for <span style="color: {cor}">{inverted_operacoes[regra["operador"]]}</span> a <span style="color: {cor}">{regra["valor_obj"]}</span>, o campo <span style="color: {cor}">{inverted_colunas[regra["coluna_new"]]}</span> será alterado para <span style="color: {cor}">{regra["valor_new"]}</span></p>""", unsafe_allow_html=True)
                col1, col2 = tabs_name["Regras"].columns(2)
                if col1.button("Editar regra", use_container_width=True, type='primary'):
                    if st.session_state.page != "12":
                        st.session_state.regra = regra['id']
                        st.session_state.page = "12"
                        st.rerun()
                if col2.button("Deletar regra", use_container_width=True, type='secondary'):
                    services.produtos.delete_regra(regra['id'])
                    st.rerun()

                tabs_name["Regras"].divider()

                cont += 1

                #cols = tabs_name["Regras"].columns(3)

        if tabs_name["Regras"].button("Adicionar nova regra", type="primary", use_container_width=True):
            if st.session_state.page != "12":
                st.session_state.regra = "create"
                st.session_state.page = "12"
                st.rerun()

    ######################################### - Historico

    if "Histórico" in tabs_name.keys():

        mudancas = services.produtos.product_changes(produto['id'])

        # Função para extrair a data de cada mudança
        def extrair_data(mudanca):
            data = datetime.strptime(mudanca['date'], "%Y-%m-%dT%H:%M:%S.%f")
            return data

        # Classifique as mudanças com base na data
        mudancas_ordenadas = sorted(mudancas, key=extrair_data, reverse=True)

        # Agora 'mudancas_ordenadas' contém as mudanças ordenadas por data

        historico = []

        filtros = ["Todos"]

        for mudanca in mudancas_ordenadas:
            if mudanca['change'] not in filtros:
                filtros.append(mudanca['change'])

        col1, col2 = tabs_name["Histórico"].columns(2)

        filtro = col1.selectbox("Filtrar por tipo", filtros)

        today = datetime.now()
        jan_1 = date(today.year, 1, 1)

        d = col2.date_input(
            "Filtrar por data",
            (jan_1, today),
            format="DD.MM.YYYY",
        )

        print(d[0].year)

        for mudanca in mudancas_ordenadas:
            data = datetime.strptime(mudanca['date'], "%Y-%m-%dT%H:%M:%S.%f")

            text = f"""
    <div>
    <p style="margin-bottom: 2px">Campo: <b>{mudanca['change']}</b></p>
    <div class="row" style="display: flex; align-items: center; margin-bottom: 10px">
        <div class="column" style="width: 100%;">
            <div class="text">
                Depois: {mudanca['new_value']}
            </div>
            <div class="text">
                Antes: {mudanca['old_value']}
            </div>
        </div>
        <div class="datetime" style="display: flex; align-items: flex-end; flex-direction:column">
            <div class="text">
                {data.day}/{data.month}/{data.year}
            </div>
            <div class="text">
                {data.hour}:{data.minute}
            </div>
        </div>
    </div>
    </div>
    """
            #tabs_name["Histórico"].markdown(f"**{mudanca['change']}**")

            d_datetime_0 = datetime.combine(d[0], datetime.min.time())
            d_datetime_1 = datetime.combine(d[1], datetime.min.time())

            if filtro == "Todos" or filtro == mudanca['change']:
                if d_datetime_0 <= data <= d_datetime_1:
                    tabs_name["Histórico"].markdown(text, unsafe_allow_html=True)
