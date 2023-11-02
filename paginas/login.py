import streamlit as st
import requests
import json

from services import config
from services import default_prefs

def login(email, senha):

    url_base = config.get('url_base')  # http://127.0.0.1:5000

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
        #st.session_state.page = "00"

        update_url = f"{url_base}/api/v1/usuario/preferences"

        headers = {
            'x-access-token' : response.json()['token'],
        }

        response = requests.get(update_url, headers=headers)

        if response.json()['result'] == None:
            preferences = {}
        else:
            preferences = json.loads(str(response.json()['result']).replace("'", '"'))

        print(preferences)

        for key, value in default_prefs.get_all().items():
            if key not in list(preferences.keys()):
                #print(f"{key} ja existe com o valor {cookie_manager.get(key)}")
                preferences[key] = value
                if f"{key}" not in st.session_state:
                    st.session_state[f"{key}"] = value
            else:
                if f"{key}" not in st.session_state:
                    st.session_state[f"{key}"] = value
                #print(f"Criado {key}")

        if f"prefs" not in st.session_state:
            st.session_state[f"prefs"] = preferences
                

        params = {
            'dados': str(preferences)
        }

        response = requests.put(update_url, headers=headers, params=params)

        print(response.json())

        #st.rerun()

        st.rerun()
        #NavigationChange(screen="00")
    else:
        print("Usuário e/ou senha incorreto!")
        st.toast("Usuário e/ou senha incorreto!")

def verify_access():
    if str(st.session_state.cookie_manager.get('token')) != "disconnect":
        url_base = config.get('url_base')  # http://127.0.0.1:5000

        headers = {
            'x-access-token' : str(st.session_state.cookie_manager.get('token')),
        }

        update_url = f"{url_base}/api/auth/verify"

        response = requests.get(update_url, headers=headers)


        if response.status_code == 200:
            #print("Acesso verificado!")

            update_url = f"{url_base}/api/v1/usuario/preferences"

            headers = {
                'x-access-token' : str(st.session_state.cookie_manager.get('token')),
            }

            response = requests.get(update_url, headers=headers)

            if response.json()['result'] == None:
                preferences = {}
            else:
                preferences = json.loads(str(response.json()['result']).replace("'", '"'))

            if st.session_state.page == "@@":
                if preferences['vendedor'] != "0":
                    st.session_state.page = "00"
                else:
                    st.session_state.page = "20"

            #print(preferences)

            for key, value in default_prefs.get_all().items():
                if key not in list(preferences.keys()):
                    #print(f"{key} ja existe com o valor {cookie_manager.get(key)}")
                    preferences[key] = value
                    if f"{key}" not in st.session_state:
                        st.session_state[f"{key}"] = value
                else:
                    if f"{key}" not in st.session_state:
                        st.session_state[f"{key}"] = value
                    #print(f"Criado {key}")

            if f"prefs" not in st.session_state:
                st.session_state[f"prefs"] = preferences
                    

            params = {
                'dados': str(preferences)
            }

            response = requests.put(update_url, headers=headers, params=params)

            #print(response.json())

            #st.rerun()

            #st.rerun()
    else:
        if st.session_state.page != "@@":
            st.session_state.page = "@@"
            st.rerun()
        st.session_state.cookie_manager.set('token', "aaa")

def page():

    st.write("# Login")
    
    email = st.text_input("Email")
    senha = st.text_input("Senha", type="password")

    if st.button("ENTRAR", type="primary", use_container_width=True, key="entrar"):
        login(email, senha)
    
    st.write("")
    if st.button("Esqueci a senha", type='secondary', use_container_width=True, key="esqueci a senha"):
        if st.session_state.page != "@1":
            if "tipo_verif_email" not in st.session_state:
                st.session_state.tipo_verif_email = "mudar senha"
            st.session_state.page = "@1"
            st.rerun()
    if st.button("Criar uma conta", type='secondary', use_container_width=True, key="criar conta"):
        if st.session_state.page != "@1":
                if "tipo_verif_email" not in st.session_state:
                    st.session_state.tipo_verif_email = "criar conta"
                st.session_state.page = "@1"
                st.rerun()

    #verify_access()