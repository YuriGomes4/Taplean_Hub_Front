import streamlit as st

from services import pesquisa_m, personal_prefs

def page():
    from .base import base

    base()

    st.title("Criar pesquisa de mercado")

    nome = st.text_input("Qual o nome da sua pesquisa?")

    opts_tipo = ["Escolher os produtos (pesquisando ou por categoria)", "Profundidade de mercado (dos seus produtos)"]

    dict_tipo = {
        "Escolher os produtos (pesquisando ou por categoria)": "categoria",
        "Profundidade de mercado (dos seus produtos)": "meus anuncios"
    }

    tipo = st.selectbox("Qual o tipo da sua pesquisa?", opts_tipo)

    imposto_medio = st.number_input("Imposto médio", value=0.0, step=0.10, key="imposto medio")

    custo_embalagem = st.number_input("Custo de embalagem", value=0.0, step=0.10, key="embalagem")

    frete_medio = st.number_input("Frete médio", value=0.0, step=0.10, key="Frete medio")

    if st.button("Criar pesquisa de mercado", type='primary', use_container_width=True):
        if nome != "":
            pesquisa_json = {
                'nome': nome,
                'tipo': dict_tipo[tipo],
                'vendedor': int(personal_prefs.get('vendedor')),
                'configuracoes': {"imposto": imposto_medio, "embalagem":custo_embalagem, "frete_medio":frete_medio}
            }
            pesquisa = pesquisa_m.criar_pesquisa(pesquisa_json)

            if st.session_state.page != "53":
                st.session_state.pesquisa_m = pesquisa
                st.session_state.page = "53"
                st.rerun()
        else:
            st.toast("Dê um nome para sua pesquisa de mercado")