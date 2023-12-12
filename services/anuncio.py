import requests

import streamlit as st
from services import config
from services import personal_prefs

def seguir_anuncio(mlb, termo):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'Content-Type': 'application/x-www-form-urlencoded',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    params = {
        'mlb': mlb,
        'termo': termo
    }

    update_url = f"{url_base}/api/v1/anuncio"

    response = requests.post(update_url, headers=headers, params=params)

    if response.status_code == 200:
        print("Anúncio seguido com sucesso!")
    else:
        print(f"Falha ao seguir o anúncio. - {response.status_code}")

def ver_anuncios():
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'Content-Type': 'application/x-www-form-urlencoded',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/anuncio"

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Anúncios listados com sucesso!")
        return response.json()['result']
    else:
        print(f"Falha ao listar os anúncios. - {response.status_code}")
        return {}
    
def ver_anuncio(mlb):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'Content-Type': 'application/x-www-form-urlencoded',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/anuncio/{mlb}"

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Anúncio listado com sucesso!")
        return response.json()['result']
    else:
        print(f"Falha ao listar o anúncio. - {response.status_code}")
        return {}
    
def ver_mudanca(mlb):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'Content-Type': 'application/x-www-form-urlencoded',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/anuncio/{mlb}"

    response = requests.put(update_url, headers=headers)

    if response.status_code == 200:
        print("Anúncios verificado com sucesso!")
        return response.json()['result']
    else:
        print(f"Falha ao verificar o anúncio. - {response.status_code}")
        return {}