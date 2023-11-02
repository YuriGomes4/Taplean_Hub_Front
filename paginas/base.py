from time import sleep
import streamlit as st

from services import personal_prefs, usuarios

def base():

    if usuarios.tenho_acesso('graficos_acessar') and str(personal_prefs.get('vendedor')) != "0":
        if st.sidebar.button("Gráficos", use_container_width=True, type="secondary"):
            if st.session_state.page != "00":
                st.session_state.page = "00"
                st.rerun()

    
    if usuarios.tenho_acesso('produtos_acessar') and str(personal_prefs.get('vendedor')) != "0":
        if st.sidebar.button("Produtos", use_container_width=True, type="secondary"):
            if st.session_state.page != "10":
                st.session_state.page = "10"
                st.rerun()
    
    if usuarios.tenho_acesso('configuracoes_acessar'):
        if st.sidebar.button("Configurações", use_container_width=True, type="secondary"):
            if st.session_state.page != "20":
                st.session_state.page = "20"
                st.rerun()

    
    if usuarios.tenho_acesso('admin'):
        if st.sidebar.button("Administração", use_container_width=True, type="secondary"):
            if st.session_state.page != "30":
                st.session_state.page = "30"
                st.rerun()

    if st.sidebar.button("Sair da conta", use_container_width=True, type='secondary'):
        st.session_state.cookie_manager.set('token', "disconnect")