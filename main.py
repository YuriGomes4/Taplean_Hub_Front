from time import sleep
import streamlit as st
session_state = st.session_state

# Verifique se a chave "page" existe na variável de estado da sessão
if "page" not in session_state:
    session_state["page"] = "11111"

from pages.login.main import numero as login_num
from pages.login.main import load as login_load
from pages.login.main import tela as login_tela

from pages.configuracoes.main import numero as config_num
from pages.configuracoes.main import load as config_load
from pages.configuracoes.main import tela as config_tela

import navigation

navigation.paginas[login_num] = login_load
navigation.paginas[f"{login_num}tela"] = login_tela
login_tela.empty()

navigation.paginas[config_num] = config_load
navigation.paginas[f"{config_num}tela"] = config_tela
config_tela.empty()

#login_load()

#def NavigationChange(screen):
#    print("Mudou")
#    session_state["page"] = screen
#    navigation.alterar_pagina()
    
if session_state["page"] == "11111":
    session_state["page"] = "@@"
    navigation.alterar_pagina()
