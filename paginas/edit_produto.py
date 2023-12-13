from datetime import datetime, date
import json
import streamlit as st
import services
import pandas as pd

from services import usuarios
from services import ml_api
from services import produtos

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
    abas.append("Qualidade")
    abas.append("Anotações")

    tabs = st.tabs(abas)
    #tabs_name["Detalhes"], tabs_name["Regras"], tabs_name["Histórico"] = st.tabs(["Detalhes", "Regras", "Histórico"])

    tabs_name = {}

    count = 0
    for aba in abas:
        tabs_name[aba] = tabs[count]
        count += 1

    ######################################### - Detalhes

    tipos = ml_api.tipos_anuncios()

    if "Detalhes" in tabs_name.keys():

        free_shipping = produto['free_shipping']
        free_shipping_text = "Sim" if int(free_shipping) == 1 else "Não"
        print(free_shipping_text, free_shipping)

        liquido = round(float(produto['price']) - float(produto['shipping_free_cost']) - float(produto['sale_fee']) - float(produto['cost']), 2)

        export = False


        tabs_name["Detalhes"].write(f"MLB: {produto['id']}"),
        categoria, caminho_cat = ml_api.ver_categoria(produto['category_id'])
        tabs_name["Detalhes"].write(f"Título: {produto['title']}"),
        tabs_name["Detalhes"].write(f"Categoria: {caminho_cat} ({categoria['id']})"),
        styled_text = f'<span>Status: </span><span style="color: {("green" if produto["status"] == "active" else "orange")};">{("Ativo" if produto["status"] == "active" else "Pausado")}</span>'
        tabs_name["Detalhes"].markdown(styled_text, unsafe_allow_html=True)
        custo = tabs_name["Detalhes"].number_input("Custo", value=float(produto['cost']))
        #tabs_name["Detalhes"].write(f"Custo: {produto['cost']}"),
        tabs_name["Detalhes"].write(f"Preço de venda: R$ {str(produto['price']).replace('.', ',')}"),
        tabs_name["Detalhes"].write(f"Tipo de anúncio: {tipos[produto['listing_type_id']]}"),
        frete_gratis = tabs_name["Detalhes"].selectbox(f"Frete grátis", ["Sim", "Não"], index=["Sim", "Não"].index(free_shipping_text)),
        if frete_gratis != free_shipping_text:
            export = True
        else:
            export = False
        tabs_name["Detalhes"].write(f"Custo de frete: R$ {str(produto['shipping_free_cost']).replace('.', ',')}"),
        tabs_name["Detalhes"].write(f"Taxas de venda: R$ {str(produto['sale_fee']).replace('.', ',')}"),
        styled_text = f'<span>Líquido: </span><span style="color: {("green" if liquido > 0 else "red")};">R$ {str(liquido).replace(".", ",")}</span>'
        tabs_name["Detalhes"].markdown(styled_text, unsafe_allow_html=True)
        #tabs_name["Detalhes"].write(f"Líquido: R$ {liquido}"),
        tabs_name["Detalhes"].write(f"Vendas: {produto['sales']}"),
        if tabs_name["Detalhes"].button("Salvar", type='primary', use_container_width=True):

            new_values = {
                'category_id': produto['category_id'],
                'cost': custo,
                'price': produto['price'],
                'title': produto['title'],
                'listing_type_id': produto['listing_type_id'],
                'free_shipping': 1 if frete_gratis == "Sim" else 0,
                'shipping_free_cost': produto['shipping_free_cost'],
                'sale_fee': produto['sale_fee'],
            }

            services.produtos.modify_Produtos_row(produto['id'], export, new_values)

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
            "Preço" : "preco",
            "Posição" : "posicao",
            "Logística" : "logistica",
            "Status" : "status",
            "Saúde" : "saude",
            "Tipo" : "tipo",
            "Desconto" : "desconto",
            "Frete grátis" : "frete_gratis",
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

    ######################################### - Qualidade

    #tabs_name['Qualidade']
    tags = str(produto['tags'])[1:-1].replace("'", "").split(",")
    texto = """##### Tags do anúncio"""
    for tag in tags:
        texto += f"\n- {tag}"
    tabs_name['Qualidade'].markdown(texto)
    tabs_name['Qualidade'].write("")
    exp = tabs_name['Qualidade'].expander("Sobre as tags")
    exp.write("")
    exp.markdown("""###### good_quality_thumbnail
Explicação sobre essa tag""")
    exp.write("")
    exp.markdown("""###### extended_warranty_eligible
Produto elegível para garantia extendida.""")
    exp.write("")
    exp.markdown("""###### immediate_payment
Explicação sobre essa tag""")
    exp.write("")
    exp.markdown("""###### cart_eligible
Produto elegível para catálogo.""")
    exp.write("")

    if "Anotações" in tabs_name.keys():
        if produto['notes'] != "" and produto['notes'] != None:
            notes = json.loads(produto['notes'].replace('"', '').replace("'", '"'))
        else:
            notes = {}


        s_priv_notes = notes[st.session_state.user_id] if st.session_state.user_id in notes.keys() else ""
        priv_notes = tabs_name["Anotações"].text_area("Anotações privadas", height=300, value=s_priv_notes, help="Só você pode ver essas anotações.")
        s_prod_notes = notes['produto'] if 'produto' in notes.keys() else ""
        prod_notes = tabs_name["Anotações"].text_area("Anotações do produto", height=300, value=s_prod_notes, help="Todos que tiverem acesso a esse produto poderão ver essas anotações.")

        def save_notes():
            produtos.modify_Produtos_row(produto['id'], False, {'notes': str({'produto': prod_notes, st.session_state.user_id: priv_notes})})

        if priv_notes != s_priv_notes:
            save_notes()
            s_priv_notes = priv_notes

        if prod_notes != s_prod_notes:
            save_notes()
            s_prod_notes = prod_notes

    if st.button("Voltar para os produtos", type='secondary', use_container_width=True):
        if st.session_state.page != "10":
            st.session_state.page = "10"
            st.rerun()
