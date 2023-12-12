import streamlit as st

from services import anuncio

def page():
    from .base import base

    base()

    st.title("Anúncios dos concorrentes")

    tam_colunas = (1.2, 2.3, 0.8, 0.9, 0.7, 1)
    fields = ["MLB", 'Titulo', 'Status', 'Posição', "Preço", "Ação"]

    colms = st.columns(tam_colunas)

    for col, field_name in zip(colms, fields):
        # header
        col.write(field_name)

    anuncios = anuncio.ver_anuncios()


    for anun in anuncios:
        mlb, title, status, pos, price, acao = st.columns(tam_colunas)
        mlb.text(anun['id'].split("$")[1])
        title.text(anun['titulo'])
        styled_text = f'<span style="color: {("green" if anun["status"] == "active" else "orange")};">{("Ativo" if anun["status"] == "active" else "Pausado")}</span>'
        status.markdown(styled_text, unsafe_allow_html=True)
        pos.text(anun['posicao'])
        price.text(f'{str(anun["preco"]).replace(".", ",")}')
        if acao.button("Detalhes", key=f"Detalhes{anun['id']}"):
            #anuncio.ver_mudanca(anun['id'].split("$")[1])
            if st.session_state.page != "42":
                st.session_state.anuncio = anun['id'].split("$")[1]
                st.session_state.page = "42"
                st.rerun()

    if st.button("Seguir anúncio", type='primary', use_container_width=True):
        if st.session_state.page != "41":
            st.session_state.page = "41"
            st.rerun()