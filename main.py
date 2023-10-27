import os
from time import sleep
import streamlit as st
import extra_streamlit_components as stx

config_file = "personal_prefs.cnf"

from services import personal_prefs as sv_personal_prefs
from services import config
from services import default_prefs

#if not(os.path.exists(config_file)):

#    with open(config_file, 'w') as file:
#        file.close()

#    for key, value in default_prefs.get_all().items():
#        print("opdsa", key, value)
#        sv_personal_prefs.set(key, value)

#else:
#    for key, value in default_prefs.get_all().items():
#        if key not in sv_personal_prefs.get_all().keys():
#            sv_personal_prefs.set(key, value)


from paginas import login, configuracoes, graficos, produtos, edit_produto, add_rule, reg_seller

st.set_page_config(
    page_icon="images/Logo.png",
    page_title=f"Tap Hub - {config.get('versao')}"
)

cookie_manager = stx.CookieManager()
st.session_state.cookie_manager = cookie_manager

#if cookie_manager.get("init") == None:
#    cookie_manager.set("init", "init", key="initcookie")
#    st.rerun()

#cookies = cookie_manager.get_all()
#print(cookies)

#if cookies != {}:
#    for key, value in default_prefs.get_all().items():
#        if cookie_manager.get(key) != None:
#            #print(f"{key} ja existe com o valor {cookie_manager.get(key)}")
#            if f"{key}" not in st.session_state:
#                st.session_state[f"{key}"] = cookie_manager.get(key)
#        else:
#            cookie_manager.set(key, value, key=f"key{key}{value}")
#            st.session_state[f"{key}"] = str(value)
#            #print(f"Criado {key}")
#            st.rerun()

# Verifique se a chave "page" existe na variável de estado da sessão
if "page" not in st.session_state:
    st.session_state.page = "@@"

if "produto" not in st.session_state:
    st.session_state.produto = ""

if "regra" not in st.session_state:
    st.session_state.regra = "create"

if "seller_id" not in st.session_state:
    st.session_state.seller_id = ""

#for key,value in sv_personal_prefs.get_all().items():
#    if f"{key}" not in st.session_state:
#        st.session_state[f"{key}"] = value

login.verify_access()

#print(st.session_state.page)

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
elif st.session_state.page == "21":
    reg_seller.page()

            