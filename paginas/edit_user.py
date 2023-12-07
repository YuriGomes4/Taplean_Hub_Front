import json
import random
from time import sleep
import streamlit as st
from services import usuarios, vendedor
 
def page():
    from .base import base

    base()

    user = usuarios.ver_usuario(st.session_state.usuario)

    st.title(f"Usuário - {user['name']}")

    user2 = usuarios.ver_usuario()

    tabs = st.tabs(["Informações", "Permissões", "Sellers"])

    eu = False

    if user == user2:
        eu = True

    ##################################### - Informações

    nome = tabs[0].text_input("Nome", user['name'], key="nome")
    email = tabs[0].text_input("Email", user['email'], key="email")
    if tabs[0].button("Atualizar informações", type='primary', use_container_width=True):
        if usuarios.mudar_infos(nome, email, user['public_id']):
            st.toast("Informações atualizadas!")
        else:
            st.toast("Falha ao atualizar informações!")

    ##################################### - Permissões

    padrao_permissoes = {
        "admin": "nao",
        "graficos": {
            "graficos_acessar": "nao",
            "graficos_vendas": "nao",
            "graficos_visitas": "nao",
            "graficos_localizacao": "nao",
        },
        "produtos": {
            "produtos_acessar": "nao",
            "produtos_regras": "nao",
            "produtos_historico": "nao",
        },
        "anuncios":{
            "anuncios_acessar": "nao",
        },
        "configuracoes": {
            "configuracoes_acessar": "nao",
            "configuracoes_listar produtos": "nao",
            "configuracoes_limpar lista produtos": "nao",
            "configuracoes_listar vendas": "nao",
            "configuracoes_limpar lista vendas": "nao",
            "configuracoes_calcular vendas produtos": "nao",
            "configuracoes_registrar vendedor": "nao",
        }
    }

    if user['permissions'] != None and user['permissions'] != "":
        permissions = json.loads(str(user['permissions']).replace("'", '"'))
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

    if "permissoes" not in st.session_state or st.session_state.permissoes == "":
        st.session_state.permissoes = novas_permissoes
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
            if key == "admin" and eu:
                checkbx = "sim" if tabs[1].checkbox(key, True if value == "sim" else False, disabled=True) else "nao"
            else:
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
        if usuarios.mudar_permissoes(user['public_id'], permissoes_teste):
            st.toast("Permissões atualizadas!")
            sleep(3)
            st.rerun()
        else:
            st.toast("Falha ao atualizar permissões")

    ##################################### - Sellers

    sellers = vendedor.get_all()

    all_sellers_name = []
    dict_sellers = {}

    actual_sellers = []

    for seller in sellers:
        all_sellers_name.append(seller['nome'])
        dict_sellers[seller['id']] = seller['nome']

    try:
        for seller in usuarios.ver_sellers(user['public_id']):
            actual_sellers.append(dict_sellers[int(seller)])
    except:
        pass

    multi = tabs[2].multiselect("Seller", all_sellers_name, actual_sellers)
    if actual_sellers != multi:
        actual_sellers = multi

    inverted_dict_sellers = {}

    for key, value in dict_sellers.items():
        inverted_dict_sellers[value] = key

    formated_actual_sellers = ""

    count = 0
    for seller in actual_sellers:
        formated_actual_sellers = formated_actual_sellers + str(inverted_dict_sellers[seller])

        count += 1

        if len(actual_sellers) != count:
            formated_actual_sellers = formated_actual_sellers + ","

    if tabs[2].button("Atualizar sellers", type='primary', use_container_width=True):
        if usuarios.mudar_sellers(formated_actual_sellers, user["public_id"]):
            st.toast("Sellers atualizados!")
        else:
            st.toast("Falha ao atualizar sellers!")
        #print(formated_actual_sellers)


        