from . import personal_prefs
import streamlit as st
import navigation
#from main import NavigationChange

import requests

def login(email, senha):

    url_base = personal_prefs.get('url_base')  # http://127.0.0.1:5000

    update_url = f"{url_base}/api/auth/login"

    print(email, senha)

    headers = {
        'Content-Type': 'application/x-www-form-urlencoded',
    }

    data = f'email={email}&password={senha}'

    response = requests.post(update_url, headers=headers, data=data)

    if response.status_code == 201:
        print("Login aprovado!")
        personal_prefs.set('token', response.json()['token'])
        if st.session_state["page"] != "00":
            st.session_state["page"] = "00"
            navigation.alterar_pagina()
        #NavigationChange(screen="00")
    else:
        print("Usuário e/ou senha incorreto!")
        #navigation.notify("Usuário e/ou senha incorreto!")

def verify_access():
    url_base = personal_prefs.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'x-access-token' : personal_prefs.get('token'),
    }

    update_url = f"{url_base}/api/auth/verify"

    response = requests.get(update_url, headers=headers)


    if response.status_code == 200:
        print("Login aprovado!")
        if st.session_state["page"] != "00":
            st.session_state["page"] = "00"
            navigation.alterar_pagina()