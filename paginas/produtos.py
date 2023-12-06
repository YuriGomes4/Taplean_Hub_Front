import streamlit as st
import pandas as pd

from services import produtos as sv_extrato
from services import personal_prefs as sv_personal_prefs
from services import config as sv_config

extratos = []

produtos = []

def load_prods(produtos):

    extratos = []

    sort = sv_personal_prefs.get("prod_sort")

    match sort:
        case "Normal":
            tam_colunas = (1.2, 2.3, 0.8, 0.9, 0.7, 1)
            fields = ["MLB", 'Titulo', 'Status', 'Qualidade', 'Líquido', "Ação"]
            id, title, status, health, liquid, acao = st.columns(tam_colunas)
        case "Curva ABC":
            tam_colunas = (0.55, 1.2, 1.75, 0.8, 0.9, 0.7, 1)
            fields = ["Curva", "MLB", 'Titulo', 'Status', 'Qualidade', 'Líquido', "Ação"]
            curva, id, title, status, health, liquid, acao = st.columns(tam_colunas)


    colms = st.columns(tam_colunas)

    for col, field_name in zip(colms, fields):
        # header
        col.write(field_name)

    for produto in produtos:
        if int(produto['seller']) == int(sv_personal_prefs.get('vendedor')):
            
            titulo = f"{produto['icone']} {produto['title']}"

            match sort:
                case "Normal":
                    id, title, status, health, liquid, acao = st.columns(tam_colunas)
                case "Curva ABC":
                    curva, id, title, status, health, liquid, acao = st.columns(tam_colunas)
                    styled_text = f'<span style="color: {produto["color"]};">{produto["icone"]}</span>'
                    curva.markdown(styled_text, unsafe_allow_html=True)
            id.text(produto['id'])
            title.text(produto['title'])
            styled_text = f'<span style="color: {("green" if produto["status"] == "active" else "orange")};">{("Ativo" if produto["status"] == "active" else "Pausado")}</span>'
            status.markdown(styled_text, unsafe_allow_html=True)
            saude = float(str(produto["health"])) if str(produto["health"]) != "None" else 0
            styled_text = f'<span style="color: {("green" if saude > 0 else "red")};">{str(int(saude*100))+"%" if saude > 0 else ""}</span>'
            health.markdown(styled_text, unsafe_allow_html=True)

            #exp = st.expander(titulo)

            #exp.write(f"ID: {produto['id']}")

            #exp.write(f"Tipo: {produto['listing_type_id']}")

            #exp.write(f"Categoria: {produto['category_id']}")

            liquido = round(float(produto['price']) - float(produto['shipping_free_cost']) - float(produto['sale_fee']) - float(produto['cost']), 2)

            liquido_txt = f"Liquido R$: {liquido}"

            styled_text = f'<span style="color: {("green" if liquido > 0 else "red")};">{liquido}</span>'
            #exp.markdown(styled_text, unsafe_allow_html=True)

            liquid.markdown(styled_text, unsafe_allow_html=True)

            #if exp.button(f"Ver detalhes", key=produto['id']):
            #    if st.session_state.page != "11":
            #        st.session_state.page = "11"
            #        if st.session_state.produto != produto:
            #            st.session_state.produto = produto
            #        st.rerun()

            if acao.button(f"Detalhes", key=produto['id']):
                if st.session_state.page != "11":
                    st.session_state.page = "11"
                    if st.session_state.produto != produto:
                        st.session_state.produto = produto
                    st.rerun()

def page():
    from .base import base

    base()

    sort_opts = {
        "Normal": 0,
        "Curva ABC": 1
    }

    st.write("# Produtos")

    select_sort = st.selectbox("Ordenação", sort_opts.keys(), index=sort_opts[sv_personal_prefs.get("prod_sort")])
    if sv_personal_prefs.get("prod_sort") != select_sort:
        #st.session_state.cookie_manager.set('prod_sort', select_sort)
        sv_personal_prefs.set("prod_sort", select_sort)
        load_prods(sv_extrato.prods_sort(select_sort))
        st.rerun()
    else:
        load_prods(sv_extrato.prods_sort(select_sort))
