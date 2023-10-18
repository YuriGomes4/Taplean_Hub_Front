import streamlit as st

def base():

    if st.sidebar.button("Gráficos", use_container_width=True, type="secondary"):
        if st.session_state.page != "00":
            st.session_state.page = "00"
            st.rerun()

    if st.sidebar.button("Produtos", use_container_width=True, type="secondary"):
        if st.session_state.page != "10":
            st.session_state.page = "10"
            st.rerun()
            
    if st.sidebar.button("Configurações", use_container_width=True, type="secondary"):
        if st.session_state.page != "20":
            st.session_state.page = "20"
            st.rerun()