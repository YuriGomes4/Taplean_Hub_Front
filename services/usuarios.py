import json
import streamlit as st
import requests

from services import config

def ver_usuarios():

    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/usuario/all"

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        return response.json()['result']
    else:
        print("Falha ao listar os usuários.")

def ver_usuario(usuario=None):

    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/usuario"

    params = {
        'usuario': usuario
    }

    if usuario != None:
        response = requests.get(update_url, headers=headers, params=params)
    else:
        response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        return response.json()['result']
    else:
        print("Falha ao listar o usuário.")

def pegar_permissoes(usuario=None):

    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/usuario/permissions"

    params = {
        'usuario': usuario
    }

    if usuario != None:
        response = requests.get(update_url, headers=headers, params=params)
    else:
        response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        #print(f"asda{str(response.json()['result'])}sdas")
        if str(response.json()['result']) != "" and str(response.json()['result']) != "None":
            st.session_state.minhaspermissoes = json.loads(str(response.json()['result']).replace("'", '"'))
        else:
            st.session_state.minhaspermissoes = {}
    else:
        print("Falha ao listar as permissões.")

def mudar_permissoes(usuario, permissoes):

    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/usuario/permissions"

    params = {
        'usuario': usuario,
        'permissoes': str(permissoes)
    }

    response = requests.put(update_url, headers=headers, params=params)

    if response.status_code == 200:
        print("Permissões atualizadas.")
        return True
    else:
        print("Falha ao atualizar as permissões.")
        return False
    
def tenho_acesso(acesso):
    try:
        permissoes = st.session_state.minhaspermissoes
    except:
        permissoes = {}
    if acesso.__contains__("_"):
        linha = acesso.split("_")
        try:
            master = permissoes[linha[0]]
            result = master[acesso]
        except:
            return False
        else:
            return True if result == "sim" else False
    else:
        try:
            result = permissoes[acesso]
        except:
            return False
        else:
            return True if result == "sim" else False
        
def mudar_sellers(sellers, usuario=None):

    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/usuario/sellers"

    params = {
        'sellers': str(sellers)
    }

    if usuario != None:
        params["usuario"] = usuario

    response = requests.put(update_url, headers=headers, params=params)

    if response.status_code == 200:
        print("Sellers atualizadas.")
        return True
    else:
        print("Falha ao atualizar os sellers.")
        return False
    
def mudar_infos(nome, email, usuario=None):

    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/usuario"

    params = {
        'nome': nome,
        'email': email
    }

    if usuario != None:
        params["usuario"] = usuario

    response = requests.put(update_url, headers=headers, params=params)

    if response.status_code == 200:
        print("Informações atualizadas.")
        return True
    else:
        print("Falha ao atualizar as informações.")
        return False

def ver_sellers(usuario=None):

    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/usuario/sellers"

    params = {
        'usuario': usuario
    }

    if usuario != None:
        response = requests.get(update_url, headers=headers, params=params)
    else:
        response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        if str(response.json()['result']) != "":
            return str(response.json()['result']).split(",")
        else:
            return []
    else:
        print("Falha ao listar os sellers.")