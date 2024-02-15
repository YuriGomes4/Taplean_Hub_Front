import streamlit as st
from services import usuarios

def page():
    from .base import base

    base()

    st.title("Pagamento")

    st.write("Realize o pagamento do seu plano para continuar usando o EleveCom")

    usuario = usuarios.ver_usuario()

    st.write(f"Seu plano atual é **{usuario['conta']['assinatura']['nome']}**")

    st.write(f"O valor do plano é **R$ {str(usuario['conta']['assinatura']['valor']).replace('.', ',')}**")