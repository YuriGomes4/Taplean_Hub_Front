import uuid
import streamlit as st

#from . import st.session_state.cookie_manager

import requests

from services import config


def get_all():
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    update_url = f"{url_base}/api/v1/vendedor/all"

    headers = {
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Vendedores listados com sucesso!")
    else:
        print("Falha ao listar os Vendedores.")

    tudo = response.json()['result']
    return tudo

def get(id_publico):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    update_url = f"{url_base}/api/v1/vendedor"

    headers = {
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    params = {
        'id': id_publico
    }

    response = requests.get(update_url, headers=headers, params=params)

    if response.status_code == 200:
        print("Vendedor listado com sucesso!")
    else:
        print("Falha ao listar o Vendedor.")

    return response.json()['result']

def get_visitas(id_publico, date_from, date_to):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    update_url = f"{url_base}/api/v1/vendedor/{id_publico}/visitas"

    headers = {
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    params = {
        'date_from': date_from,
        'date_to': date_to,
    }

    response = requests.get(update_url, headers=headers, params=params)

    if response.status_code == 200:
        print("Visitas listadas com sucesso!")
    else:
        print("Falha ao listar as visitas.")

    return response.json()['result']

def register_seller(seller_id, nome):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    update_url = f"{url_base}/api/v1/vendedor/register/{seller_id}"

    #response = requests.post(f"{sv_config.get('url_base')}/api/v1/vendedor/register/{seller_id}?nome={nome}")

    headers = {
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    params = {
        'nome': nome,
    }

    response = requests.post(update_url, headers=headers, params=params)

    if response.status_code == 200:
        print("Vendedor cadastrado!")
    else:
        print("Falha ao cadastrar o vendedor.")

    return response

def mudar_permissoes(seller, permissoes):

    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/vendedor/permissions"

    params = {
        'seller': seller,
        'permissoes': str(permissoes)
    }

    response = requests.put(update_url, headers=headers, params=params)

    if response.status_code == 200:
        print("Permissões atualizadas.")
        return True
    else:
        print("Falha ao atualizar as permissões.")
        return False
