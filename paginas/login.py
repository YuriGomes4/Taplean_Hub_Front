import streamlit as st

from services import default_prefs

import requests

def login(email, senha):

    url_base = default_prefs.get('url_base')  # http://127.0.0.1:5000

    update_url = f"{url_base}/api/auth/login"

    print(email, senha)

    headers = {
        'Content-Type': 'application/x-www-form-urlencoded',
    }

    data = f'email={email}&password={senha}'

    response = requests.post(update_url, headers=headers, data=data)

    if response.status_code == 201:
        print("Login aprovado!")
        st.session_state.cookie_manager.set('token', response.json()['token'])
        st.session_state.page = "00"
        st.rerun()
        #NavigationChange(screen="00")
    else:
        print("Usuário e/ou senha incorreto!")

def verify_access():
    url_base = default_prefs.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'x-access-token' : str(st.session_state.cookie_manager.get('token')),
    }

    update_url = f"{url_base}/api/auth/verify"

    response = requests.get(update_url, headers=headers)


    if response.status_code == 200:
        print("Login aprovado!")
        if st.session_state.page == "@@":
            st.session_state.page = "00"

def page():

    st.write("# Login")
    
    email = st.text_input("Email", value="yuri@example.com")
    senha = st.text_input("Senha", value="123456", type="password")
    if st.button("Entrar", type="primary", use_container_width=True, key="entrar"):
        login(email, senha)

    verify_access()