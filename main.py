import os
from time import sleep
import streamlit as st

config_file = "personal_prefs.cnf"

from services import personal_prefs as sv_personal_prefs
from services import config
from services import default_prefs

if not(os.path.exists(config_file)):

    with open(config_file, 'w') as file:
        file.close()

    for key, value in default_prefs.get_all().items():
        print("opdsa", key, value)
        sv_personal_prefs.set(key, value)

else:
    for key, value in default_prefs.get_all().items():
        if key not in sv_personal_prefs.get_all().keys():
            sv_personal_prefs.set(key, value)

from paginas import login, configuracoes, graficos, produtos, edit_produto, add_rule

st.set_page_config(
    page_icon="images/Logo.png",
    page_title=f"Tap Hub - {config.get('versao')}"
)

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