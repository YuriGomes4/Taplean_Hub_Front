import streamlit as st
import requests

from services import config
from services import personal_prefs

def ver_pesquisas():
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    update_url = f"{url_base}/api/v1/pesquisa_mercado"

    headers = {
        'Content-Type': 'application/x-www-form-urlencoded',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        return response.json()['result']
    else:
        print("Falha ao sincronizar os produtos.")