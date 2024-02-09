import requests
import streamlit as st

from services import config

def page():

    match st.session_state.tipo_verif_email:
        case "mudar senha":
            #titulo = "Recuperar senha"
            texto_botao = "Recuperar"
            caminho = "usuario"
            pagina = "!!"
        case "criar conta":
            #titulo = "Email para cadastro"
            texto_botao = "Validar"
            caminho = "conta"
            pagina = "$$"

    st.title("Código")
    codigo = st.number_input(f"Código enviado ao email {st.session_state.email}", step=1)
    if st.button(texto_botao, use_container_width=True, type='primary'):
        if 100000 < codigo < 999999:

            url_base = config.get('url_base')  # http://127.0.0.1:5000

            update_url = f"{url_base}/api/v1/{caminho}/verif_email"

            headers = {
                'Content-Type': 'application/json',
            }

            params = {
                'email': st.session_state.email,
                'code': codigo
            }

            response = requests.post(update_url, headers=headers, params=params)

            if response.status_code == 200:
                if "codigo" not in st.session_state:
                    st.session_state.codigo = int(response.json()['result'])
                    st.session_state.page = pagina
                    
                    st.rerun()
            else:
                st.toast("Código inválido")

        else:
            st.toast("Código inválido")