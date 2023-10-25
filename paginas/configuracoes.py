import streamlit as st

import services

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

    sellers = {}

    for seller in services.vendedor.get_all():
        sellers[seller['nome']] = seller['id']


    opts = []

    for seller in services.vendedor.get_all():
        opts.append(seller['nome'])

    st.title("Configurações")

    select_seller = st.selectbox("Vendedor", options=opts, index=int(services.personal_prefs.get('vendedor'))-1)
    if st.session_state.vendedor != select_seller:
        services.personal_prefs.set('vendedor', sellers[select_seller])
        st.session_state.vendedor = select_seller
        st.rerun()

    st.button("Listar produtos", on_click=sync_prods, key="sync_prods")
    st.button("Limpar lista de produtos", on_click=remove_prods, key="remove_prods")
    st.button("Listar vendas", on_click=list_orders, key="list_orders")
    st.button("Limpar lista de vendas", on_click=remove_orders, key="remove_orders")
    st.button("Calcular vendas nos produtos", on_click=sales_prods, key="sales_prods")
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