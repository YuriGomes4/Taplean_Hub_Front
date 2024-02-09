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

    if user['conta']['assinatura']['permissoes'] != None and user['conta']['assinatura']['permissoes'] != "":
        permissions = user['conta']['assinatura']['permissoes']
    else:
        permissions = {}

    for key,value in permissions.items():
        if type(value) != dict:
            tabs[1].checkbox(key, value, disabled=True)
        else:
            tabs[1].write(key)
            for key2, value2 in value.items():
                    tabs[1].checkbox(key2, value2, disabled=True)




    #print(permissoes_teste)


    ##################################### - Sellers

    sellers = vendedor.get_all()

    all_sellers_name = []
    dict_sellers = {}

    actual_sellers = []

    for seller in sellers:
        all_sellers_name.append(seller['nome'])
        dict_sellers[seller['id_publico']] = seller['nome']

    try:
        for seller in usuarios.ver_sellers(user['public_id']):
            actual_sellers.append(dict_sellers[seller])
    except:
        pass

    tabs[2].multiselect("Seller", all_sellers_name, actual_sellers, disabled=True)
    


        