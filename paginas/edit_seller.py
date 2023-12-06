import json
import random
from time import sleep
import streamlit as st
from services import usuarios, vendedor
 
def page():
    from .base import base

    base()

    seller = vendedor.get(st.session_state.selleredit)

    st.title(f"Seller - {seller['nome']}")

    tabs = st.tabs(["Informações", "Permissões"])

    ##################################### - Informações

    nome = tabs[0].text_input("Nome", seller['nome'], key="nome")
    client_ml = tabs[0].text_input("client_ml", seller['client_ml'], key="client_ml")
    secret_ml = tabs[0].text_input("secret_ml", seller['secret_ml'], key="secret_ml")
    id_ml = tabs[0].text_input("id_ml", seller['id_ml'], key="id_ml")
    refresh_tk_ml = tabs[0].text_input("refresh_tk_ml", seller['refresh_tk_ml'], key="refresh_tk_ml")
    tk_ml = tabs[0].text_input("tk_ml", seller['tk_ml'], key="tk_ml")
    tk_tiny = tabs[0].text_input("tk_tiny", seller['tk_tiny'], key="tk_tiny")
    last_updated = tabs[0].write("last_updated: " + str(seller['last_updated']))
    if tabs[0].button("Atualizar informações", type='primary', use_container_width=True):
        #if usuarios.mudar_infos(nome, email, user['public_id']):
            #st.toast("Informações atualizadas!")
        #else:
            #st.toast("Falha ao atualizar informações!")
        pass
    if tabs[0].button("Cancelar", type='secondary', use_container_width=True):
        if st.session_state.page != "30":
            st.session_state.page = "30"
            st.rerun()

    ##################################### - Permissões

    padrao_permissoes = {
        "vendas": {
            "vendas_receber vendas": "nao",
            "vendas_listar vendas": "nao",
        },
        "produtos": {
            "produtos_listar produtos": "nao",
            "produtos_guardar historico": "nao",
        },
    }

    if seller['permissions'] != None and seller['permissions'] != "":
        permissions = json.loads(str(seller['permissions']).replace("'", '"'))
    else:
        permissions = {}

    novas_permissoes = {}

    for key,value in permissions.items():
        novas_permissoes[key] = value

    for key,value in padrao_permissoes.items():
        if key not in novas_permissoes.keys():
            novas_permissoes[key] = value
        elif type(novas_permissoes[key]) == dict:
            master_key = key
            for key,value in padrao_permissoes[key].items():
                if key not in novas_permissoes[master_key].keys():
                    novas_permissoes[master_key][key] = value

    #print(novas_permissoes)

    if "permissoes" not in st.session_state or st.session_state.sellerpermissoes == "":
        st.session_state.sellerpermissoes = novas_permissoes
        #print("reset")

    permissoes_atuais = {}

    for key, value in novas_permissoes.items():
        if type(value) == str:
            permissoes_atuais[key] = value
        elif type(value) == dict:
            permissoes_atuais[key] = "categoria"
            for chave, valor in value.items():
                permissoes_atuais[chave] = valor


    #print(permissoes_atuais)

    for key,value in permissoes_atuais.items():
        if value != "categoria":
            checkbx = "sim" if tabs[1].checkbox(key, True if value == "sim" else False) else "nao"
            if permissoes_atuais[key] != checkbx:
                permissoes_atuais[key] = checkbx
        else:
            tabs[1].write(key)

            #value = st.session_state.permissoes[key]

    permissoes_teste = {}

    for key, value in permissoes_atuais.items():
        if value != "categoria" and not(key.__contains__("_")):
            permissoes_teste[key] = value
        elif key.__contains__("_"):
            linha = key.split("_")
            permissoes_teste[linha[0]][key] = value
        else:
            permissoes_teste[key] = {}


    #print(permissoes_teste)

    if tabs[1].button("Atualizar permissões", use_container_width=True, type= 'primary'):
        if vendedor.mudar_permissoes(seller['id_ml'], permissoes_teste):
            st.toast("Permissões atualizadas!")
            sleep(3)
            st.rerun()
        else:
            st.toast("Falha ao atualizar permissões")
        



        