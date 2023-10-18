import streamlit as st

import navigation
import services

numero = "00"

tela = st.empty()

def sync_prods(e):
    services.produtos.sync_prods()

# hide all dialogs in overlay
#page.overlay.extend([pick_files_dialog, save_file_dialog, get_directory_dialog])

def remove_prods(e):
    services.produtos.remove_prods()

opts = []

def list_orders(e):
    services.produtos.list_orders()

def remove_orders(e):
    services.produtos.remove_orders()

def sales_prods(e):
    services.produtos.sales_prods()


#def seller_changed(e):
    #print(drop.value)
    #for seller in services.vendedor.get_all():
    #    if seller['nome'] == drop.value:
    #        services.personal_prefs.set('vendedor', seller['id'])
            #services.preferences.set('prod_sort', "")


def load():
    #global opts
    #global drop
    #opts = []

    cont = tela.container()

    #navigation.base()

    cont.selectbox("Vendedor", options=["Teste"])

    #for seller in services.vendedor.get_all():
    #    opts.append(dropdown.Option(seller['nome']))

    #drop.options = opts
    #drop.value = services.vendedor.get(services.personal_prefs.get('vendedor'))['nome']



    cont.button("Listar produtos", on_click=sync_prods, key="sync_prods")
    cont.button("Limpar lista de produtos", on_click=remove_prods, key="remove_prods")
    cont.button("Listar vendas", on_click=list_orders, key="list_orders")
    cont.button("Limpar lista de vendas", on_click=remove_orders, key="remove_orders")
    cont.button("Calcular vendas nos produtos", on_click=sales_prods, key="sales_prods")

    return cont

        #st.rerun()

    #navigation.refresh()