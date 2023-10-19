from time import sleep
import streamlit as st

from services import personal_prefs as sv_personal_prefs

from paginas import login, configuracoes, graficos, produtos, edit_produto, add_rule

# Verifique se a chave "page" existe na variável de estado da sessão
if "page" not in st.session_state:
    st.session_state.page = "@@"

if "produto" not in st.session_state:
    st.session_state.produto = ""

if "regra" not in st.session_state:
    st.session_state.regra = "create"

for key,value in sv_personal_prefs.get_all().items():
    if f"{key}" not in st.session_state:
        st.session_state[f"{key}"] = value

login.verify_access()

print(st.session_state.page)

if st.session_state.page == "@@":
    login.page()
elif st.session_state.page == "00":
    graficos.page()
elif st.session_state.page == "10":
    produtos.page()
elif st.session_state.page == "11":
    edit_produto.page()
elif st.session_state.page == "12":
    add_rule.page()
elif st.session_state.page == "20":
    configuracoes.page()