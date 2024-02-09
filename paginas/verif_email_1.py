import requests
import streamlit as st

from services import config

def page():

    match st.session_state.tipo_verif_email:
        case "mudar senha":
            titulo = "Recuperar senha"
            texto_botao = "Recuperar"
            caminho = "usuario"
        case "criar conta":
            titulo = "Email para cadastro"
            texto_botao = "Verificar"
            caminho = "conta"

    st.title(titulo)
    email = st.text_input("Email")
    if st.button(texto_botao, use_container_width=True, type='primary'):
            
        if email != "":

            #if "email" not in st.session_state:
            st.session_state.email = email

            url_base = config.get('url_base')  # http://127.0.0.1:5000

            update_url = f"{url_base}/api/v1/{caminho}/verif_email"

            headers = {
                'Content-Type': 'application/json',
            }

            params = {
                'email': st.session_state.email,
                'tipo': st.session_state.tipo_verif_email
            }

            response = requests.get(update_url, headers=headers, params=params)

            st.session_state.page = "@2"
            st.rerun()

        else:
            st.toast("O Email precisa ser preenchido")