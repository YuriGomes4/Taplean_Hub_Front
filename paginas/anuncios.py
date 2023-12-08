import streamlit as st

def page():
    from .base import base

    base()

    st.title("Anúncios dos concorrentes")

    tam_colunas = (1.2, 2.3, 0.8, 0.9, 0.7, 1)
    fields = ["MLB", 'Titulo', 'Status', 'Qualidade', 'Líquido', "Ação"]

    colms = st.columns(tam_colunas)

    for col, field_name in zip(colms, fields):
        # header
        col.write(field_name)

    if st.button("Seguir anúncio", type='primary', use_container_width=True):
        if st.session_state.page != "41":
            st.session_state.page = "41"
            st.rerun()