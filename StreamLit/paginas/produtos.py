import streamlit as st
import pandas as pd

from services import produtos as sv_extrato
from services import personal_prefs as sv_preferences
from services import config as sv_config

extratos = []

produtos = []

def load_prods(produtos):

    extratos = []

    for produto in produtos:
        if int(produto['seller']) == int(sv_preferences.get('vendedor')):
            
            titulo = f"{produto['icone']} {produto['title']}"

            exp = st.expander(titulo)

            exp.write(f"ID: {produto['id']}")

            exp.write(f"Tipo: {produto['listing_type_id']}")

            exp.write(f"Categoria: {produto['category_id']}")

            liquido = f"Liquido R$: {round(float(produto['price']) - float(produto['shipping_free_cost']) - float(produto['sale_fee']) - float(produto['cost']), 2)}"

            styled_text = f'<span style="color: green;">{liquido}</span>'
            exp.markdown(styled_text, unsafe_allow_html=True)

            if exp.button(f"Ver detalhes", key=produto['id']):
                if st.session_state.page != "11":
                    st.session_state.page = "11"
                    if st.session_state.produto != produto:
                        st.session_state.produto = produto
                    st.rerun()

            #st.text()

def page():
    from .base import base

    base()

    sort_opts = {
        "Normal": 0,
        "Curva ABC": 1
    }

    st.write("# Produtos")

    select_sort = st.selectbox("Ordenação", sort_opts.keys(), index=sort_opts[st.session_state.prod_sort])
    if st.session_state.prod_sort != select_sort:
        sv_preferences.set('prod_sort', select_sort)
        load_prods(sv_extrato.prods_sort(select_sort))
        st.session_state.prod_sort = select_sort
        st.rerun()
    else:
        load_prods(sv_extrato.prods_sort(select_sort))
