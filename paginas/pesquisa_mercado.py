import streamlit as st

from services import pesquisa_m

def page():
    from .base import base

    base()

    st.title("Pesquisas de mercado")

    tam_colunas = (8, 1.5)
    fields = ['Nome', "Ação"]

    colms = st.columns(tam_colunas)

    for col, field_name in zip(colms, fields):
        # header
        col.write(field_name)

    pesquisas = pesquisa_m.ver_pesquisas()


    for pesquisa in pesquisas:
        nome, acao = st.columns(tam_colunas)
        #mlb.text(anun['id'].split("$")[1])
        nome.text(pesquisa['nome'])
        #styled_text = f'<span style="color: {("green" if anun["status"] == "active" else "orange")};">{("Ativo" if anun["status"] == "active" else "Pausado")}</span>'
        #status.markdown(styled_text, unsafe_allow_html=True)
        #pos.text(anun['posicao'])
        #price.text(f'{str(anun["preco"]).replace(".", ",")}')

        if acao.button("Detalhes", key=f"Detalhes{pesquisa['id']}"):
            #anuncio.ver_mudanca(anun['id'].split("$")[1])
            if st.session_state.page != "52":
                st.session_state.pesquisa_m = pesquisa['id']
                st.session_state.page = "52"
                st.rerun()

    if st.button("Criar uma nova pesquisa de mercado", type='primary', use_container_width=True):
        if st.session_state.page != "51":
            st.session_state.page = "51"
            st.rerun()