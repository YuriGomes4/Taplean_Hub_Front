from time import sleep
import requests
import streamlit as st

from services import config

def page():

    st.title("Nova senha")
    nova_senha = st.text_input(f"Nova senha", type="password")
    confirme_nova_senha = st.text_input(f"Confirme a nova senha", type="password")
    if st.button("Atualizar senha", use_container_width=True, type='primary'):
        if nova_senha == confirme_nova_senha:
            url_base = config.get('url_base')  # http://127.0.0.1:5000

            update_url = f"{url_base}/api/v1/usuario/reset_pass"

            headers = {
                'Content-Type': 'application/json',
            }

            params = {
                'email': st.session_state.email,
                'code': st.session_state.codigo,
                'nova_senha': nova_senha
            }

            response = requests.put(update_url, headers=headers, params=params)

            if response.status_code == 200:
                st.toast("Senha atualizada")
                sleep(3)
                st.session_state.page = "@@"
                st.rerun()
            else:
                st.toast("Falha ao atualizar senha")
        else:
            st.toast("Você precisa digitar a mesma senha nos 2 campos")