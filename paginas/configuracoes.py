import streamlit as st

import services
from services import usuarios

def sync_prods():
    services.produtos.sync_prods()

# hide all dialogs in overlay
#page.overlay.extend([pick_files_dialog, save_file_dialog, get_directory_dialog])

def remove_prods():
    services.produtos.remove_prods()

opts = []

def list_orders():
    services.produtos.list_orders()

def remove_orders():
    services.produtos.remove_orders()

def sales_prods():
    services.produtos.sales_prods()

#def seller_changed(e):
    #print(drop.value)
    #for seller in services.vendedor.get_all():
    #    if seller['nome'] == drop.value:
    #        services.personal_prefs.set('vendedor', seller['id'])
            #services.preferences.set('prod_sort', "")

def page():
    from .base import base

    base()

    #def seller_changed():
    #    print(selected_seller)
        #for seller in services.vendedor.get_all():
        #    if seller['nome'] == selected_seller:
        #        services.personal_prefs.set('vendedor', seller['id'])
                #services.preferences.set('prod_sort', "")

    st.title("Configurações")

    if len(usuarios.ver_sellers()) > 0:

        all_sellers = services.vendedor.get_all()
        my_sellers = usuarios.ver_sellers()
        dict_sellers = {}

        sellers = {}

        for seller in all_sellers:
            dict_sellers[int(seller['id'])] = seller['nome']


        for seller in my_sellers:
            sellers[dict_sellers[int(seller)]] = seller

        print(my_sellers)

        opts = []

        for seller in sellers.keys():
            opts.append(seller)

        select_seller = st.selectbox("Vendedor", options=opts, index=opts.index(dict_sellers[int(services.personal_prefs.get("vendedor"))]) if str(services.personal_prefs.get("vendedor")) in my_sellers else 0)
        print(select_seller, services.personal_prefs.get("vendedor"))
        if services.personal_prefs.get("vendedor") != sellers[select_seller]:
            services.personal_prefs.set("vendedor", sellers[select_seller])
            #st.session_state.cookie_manager.set('vendedor', sellers[services.personal_prefs.get("vendedor")])
            #st.session_state.cookie_manager.set('vendedor', sellers[services.personal_prefs.get("vendedor")])
            #st.session_state.cookie_manager.set('vendedor', "sellers[st.session_state.vendedor]")
            st.rerun()

    if usuarios.tenho_acesso('configuracoes_listar produtos'):
        st.button("Listar produtos", on_click=sync_prods, key="sync_prods")
    if usuarios.tenho_acesso('configuracoes_limpar lista produtos'):
        st.button("Limpar lista de produtos", on_click=remove_prods, key="remove_prods")
    if usuarios.tenho_acesso('configuracoes_listar vendas'):
        st.button("Listar vendas", on_click=list_orders, key="list_orders")
    if usuarios.tenho_acesso('configuracoes_limpar lista vendas'):
        st.button("Limpar lista de vendas", on_click=remove_orders, key="remove_orders")
    if usuarios.tenho_acesso('configuracoes_calcular vendas produtos'):
        st.button("Calcular vendas nos produtos", on_click=sales_prods, key="sales_prods")
    if usuarios.tenho_acesso('configuracoes_registrar vendedor'):
        if st.button("Registrar novo vendedor", key="reg_seller"):
            if st.session_state.page != "21":
                st.session_state.page = "21"
                st.rerun()
        #temas = ["Escuro", "Claro"]
        #tema = st.selectbox("Tema", temas, index=temas.index(services.personal_prefs.get("tema")))
        #if tema != services.personal_prefs.get("tema"):
        #    services.personal_prefs.set("tema", tema)
        #    services.temas.setTema(nomeTema=tema)
        #    st.rerun()
        #    st.rerun()