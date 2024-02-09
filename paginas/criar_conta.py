from time import sleep
import requests
import streamlit as st

from services import config, conta

def page():

    st.title("Criar conta")
    nome_usuario = st.text_input(f"Seu nome de usuário")
    nome = st.text_input(f"Seu nome")
    st.text_input(f"Seu email", st.session_state.email, disabled=True)
    nova_senha = st.text_input(f"Nova senha", type="password")
    confirme_nova_senha = st.text_input(f"Confirme a nova senha", type="password")
    assinaturas = conta.get().assinaturas()
    planos = {}
    for assin in assinaturas:
        planos[assin['nome']] = assin['codigo']
    plano = st.selectbox("Escolha seu plano", planos.keys())
    if st.button("Criar", use_container_width=True, type='primary'):
        if nova_senha == confirme_nova_senha:
            url_base = config.get('url_base')  # http://127.0.0.1:5000

            update_url = f"{url_base}/api/v1/conta/registrar"

            data = {
                'email': st.session_state.email,
                'code': st.session_state.codigo,
                'password': nova_senha,
                'name': nome,
                'username': nome_usuario,
                'assinatura': planos[plano],
            }

            response = requests.post(update_url, data=data)

            if response.status_code == 201:
                st.toast("Usuario criado")
                sleep(3)
                st.session_state.page = "@@"
                st.rerun()
            else:
                st.toast("Falha ao criar usuario")
        else:
            st.toast("Você precisa digitar a mesma senha nos 2 campos")