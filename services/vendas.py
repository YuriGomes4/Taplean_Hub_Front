#from . import personal_prefs
import streamlit as st
import requests

from services import config


def get_all(seller_id, date_from=None, date_to=None):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/vendas/all/{seller_id}"

    params = {
        "date_from": date_from,
        "date_to": date_to,
    }

    if date_from and date_to:
        response = requests.get(update_url, headers=headers, params=params)
    else:
        response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Vendas listadas com sucesso!")
        return response.json()['result']
    else:
        print("Falha ao listar as vendas.")
        print(response.json())