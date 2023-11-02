import json
import pandas as pd
import streamlit as st
from services import usuarios, vendedor


def page():
    from .base import base

    base()

    st.title("Adminstração")

    tabs = st.tabs(["Usuários", "Sellers"])

    users = usuarios.ver_usuarios()

    for user in users:
        exp = tabs[0].expander(f"{user['name']} - {user['email']}")
        exp.write(f"ID Público: {user['public_id']}")
        exp.write(f"Nome: {user['name']}")
        exp.write(f"Email: {user['email']}")
        txt_perm = """Permissões:\n"""
        if user['permissions'] != None and user['permissions'] != "":
            permissions = json.loads(str(user['permissions']).replace("'", '"'))
            for key,value in permissions.items():
                txt_perm = txt_perm + f" - {key}: {value}\n"
        exp.write(txt_perm)
        exp.write("")
        exp.write(f"Sellers: {user['sellers']}")
        col1, col2 = exp.columns(2)
        if col1.button("Editar", type='primary', use_container_width=True, key=f"editar{user['public_id']}"):
            st.session_state.usuario = user['public_id']
            if st.session_state.page != "31":
                st.session_state.page = "31"
                st.rerun()

        col2.button("Deletar", type='secondary', use_container_width=True, key=f"deletar{user['public_id']}")



    sellers = vendedor.get_all()

    for seller in sellers:
        exp = tabs[1].expander(f"{seller['nome']}")
        exp.write(f"Nome: {seller['nome']}")
        exp.write(f"Seller ID ML: {seller['id_ml']}")
        exp.write(f"Refresh Token ML: {seller['refresh_tk_ml']}")
        exp.write(f"Token ML: {seller['tk_ml']}")
        exp.write(f"Token Tiny: {seller['tk_tiny']}")
        exp.write(f"Última atualização: {seller['last_updated']}")
