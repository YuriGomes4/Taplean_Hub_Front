import os
from time import sleep
import streamlit as st
import extra_streamlit_components as stx

config_file = "personal_prefs.cnf"

from services import personal_prefs as sv_personal_prefs, usuarios
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

from paginas import login, configuracoes, graficos, produtos, edit_produto, add_rule, reg_seller, reset_senha, ver_pesquisa_m, verif_email_1, verif_email_2, criar_conta, admin, edit_user, sem_acesso, edit_seller, anuncios, seguir_anuncio, ver_anuncio, pesquisa_mercado, add_prod_pm, criar_pesquisa_m

st.set_page_config(
    page_icon="images/Logo EleveCom redondo.png",
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

if "produto_alterado" not in st.session_state:
    st.session_state.produto_alterado = False

#for key,value in sv_personal_prefs.get_all().items():
#    if f"{key}" not in st.session_state:
#        st.session_state[f"{key}"] = value

login.verify_access()

#print(st.session_state.page)

def verificacoes():
    if len(usuarios.ver_sellers()) > 0:
        if str(sv_personal_prefs.get('vendedor')) not in usuarios.ver_sellers():
            sv_personal_prefs.set('vendedor', usuarios.ver_sellers()[0])
    else:
        sv_personal_prefs.set('vendedor', "0")

    #usuarios.pegar_permissoes()
        
if str(st.session_state.page)[0] != "@":
    if usuarios.ver_usuario()['conta']['status_pagamento'] != "pago":
        st.session_state.page = "100"

if st.session_state.page == "@@":
    login.page()
elif st.session_state.page == "@1":
    verif_email_1.page()
elif st.session_state.page == "@2":
    verif_email_2.page()
elif st.session_state.page == "!!":
    reset_senha.page()
elif st.session_state.page == "$$":
    criar_conta.page()
elif st.session_state.page == "00":
    verificacoes()
    graficos.page()
elif st.session_state.page == "10":
    verificacoes()
    st.session_state.prod_pesquisa = ""
    st.session_state.prod_fitro = "Nenhum"
    produtos.page()
elif st.session_state.page == "11":
    edit_produto.page()
elif st.session_state.page == "12":
    add_rule.page()
elif st.session_state.page == "20":
    verificacoes()
    configuracoes.page()
elif st.session_state.page == "21":
    reg_seller.page()
elif st.session_state.page == "30":
    verificacoes()
    admin.page()
elif st.session_state.page == "31":
    edit_user.page()
elif st.session_state.page == "32":
    edit_seller.page()
elif st.session_state.page == "40":
    verificacoes()
    anuncios.page()
elif st.session_state.page == "41":
    seguir_anuncio.page()
elif st.session_state.page == "42":
    ver_anuncio.page()
elif st.session_state.page == "50":
    verificacoes()
    pesquisa_mercado.page()
elif st.session_state.page == "51":
    criar_pesquisa_m.page()
elif st.session_state.page == "52":
    ver_pesquisa_m.page()
elif st.session_state.page == "53":
    add_prod_pm.page()
elif st.session_state.page == "100":
    verificacoes()
    sem_acesso.page()


            