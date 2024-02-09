from datetime import datetime
import uuid
from operator import itemgetter
import streamlit as st
import requests

from services import config
from services import personal_prefs

seller = 0
sort = ""
sorted_prods = []


def modify_Produtos_row(row_id, export, update):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    #update = {}

    #for chave, valor in kwargs.items():
    #    update[f'{chave}'] = valor

    update_data = {
        "id": row_id,
        "export": export,
        "updates": update
    }

    update_url = f"{url_base}/api/v1/produto/update"

    headers = {
        #'Content-Type': 'application/x-www-form-urlencoded',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    response = requests.post(update_url, headers=headers , json=update_data)
    print(update_data)

    if response.status_code == 200:
        print("Produto atualizado com sucesso!")
        st.session_state.produto_alterado = True
        st.session_state.produto_alterado_data = update_data
    else:
        print("Falha ao atualizar o produto.")

    return response

def get_all():
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/produto/all"

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Produtos listados com sucesso!")
        return response.json()['result']
    else:
        print("Falha ao listar os produtos.")
        return []

#transactions = get_all()

def get_all_ids():
    produtos = get_all()
    ids = []
    for item in produtos:
        ids.append(item['id'])
    return ids

def sync_prods():
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    update_url = f"{url_base}/api/v1/produto/sync_ml/{personal_prefs.get('vendedor')}"

    headers = {
        'Content-Type': 'application/x-www-form-urlencoded',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Produtos sincronizados com sucesso!")
    else:
        print("Falha ao sincronizar os produtos.")

def remove_prods():
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'Content-Type': 'application/x-www-form-urlencoded',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/produto/remove_ml/{personal_prefs.get('vendedor')}"

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Produtos removidos com sucesso!")
    else:
        print("Falha ao remover os produtos.")

def sales_prods():
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'Content-Type': 'application/x-www-form-urlencoded',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/produto/sales/{personal_prefs.get('vendedor')}"

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Produtos atualizados com sucesso!")
    else:
        print("Falha ao atualizar os produtos.")

def list_orders():
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'Content-Type': 'application/x-www-form-urlencoded',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/vendas/list/{personal_prefs.get('vendedor')}"

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Vendas listadas com sucesso!")
    else:
        print("Falha ao listar as vendas.")

def remove_orders():
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'Content-Type': 'application/x-www-form-urlencoded',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/vendas/remove/{personal_prefs.get('vendedor')}"

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Produtos removidos com sucesso!")
    else:
        print("Falha ao remover os produtos.")

def prods_sort(new_sort):
    global seller
    global sort
    global sorted_prods

    temp_prods = []

    produtos = get_all()

    if sort != new_sort or seller != personal_prefs.get('vendedor') or st.session_state.produto_alterado == True:
        sort = new_sort
        seller = personal_prefs.get('vendedor')

        if sort == "Curva ABC":

            total_inv = 0
            perc_acum = 0

            temp_prods = []
            for produto in produtos:
                if produto['seller'] == personal_prefs.get('vendedor'):
                    #produto['icone'] = "hdr_auto_outlined"
                    temp_prods.append(produto)
                    total_inv = total_inv + produto['invoicing']

            temp_prods = sorted(temp_prods, key=itemgetter('invoicing'), reverse=True)

            for produto in temp_prods:
                invc = produto['invoicing']
                if invc > 0 and total_inv > 0:
                    prod_perc = invc/total_inv
                else:
                    prod_perc = 1
                #print(prod_perc)

                if prod_perc+perc_acum <= 0.8:
                    #produto['icone'] = "🇦🟢"
                    produto['icone'] = "A"
                    produto['color'] = "green"
                elif prod_perc+perc_acum <= 0.95:
                    #produto['icone'] = "🇧🟡"
                    produto['icone'] = "B"
                    produto['color'] = "yellow"
                else:
                    #produto['icone'] = "🇨🔴"
                    produto['icone'] = "C"
                    produto['color'] = "red"

                perc_acum = prod_perc+perc_acum


            sorted_prods = temp_prods
        elif sort == "Normal":
            temp_prods = []
            for produto in produtos:
                if produto['seller'] == personal_prefs.get('vendedor'):
                    produto['icone'] = "➕"
                    produto['color'] = "amber"
                    temp_prods.append(produto)

            sorted_prods = temp_prods
        else:
            print("Erro ao ordenar lista de produtos: Ordenação não reconhecida")

    return sorted_prods

#A icons.HDR_AUTO_OUTLINED
#A icons.FORMAT_COLOR_TEXT
#A icons.TEXT_FORMAT
#A icons.SPELLCHECK
#A icons.TEXT_INCREASE
#B icons.CURRENCY_BITCOIN
#B icons.FORMAT_BOLD
#C icons.EURO_SYMBOL
#C icons.CLOSED_CAPTION_OFF
#C icons.COPYRIGHT


def product_changes(product_id):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'Content-Type': 'application/x-www-form-urlencoded',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/produto/changes/{product_id}"

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Mudanças listadas com sucesso!")
        return response.json()['result']
    else:
        print("Falha ao listar as mudanças.")
        return []
    
def get_regras(product_id):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'Content-Type': 'application/x-www-form-urlencoded',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/produto/regras/{product_id}"

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Regras listadas com sucesso!")
        return response.json()['result']
    else:
        print("Falha ao listar as regras.")
        return []
    
def get_regra(regra_id):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'Content-Type': 'application/json',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/produto/regra/{regra_id}"

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Regra listada com sucesso!")
        return response.json()['result']
    else:
        print("Falha ao listar a regra.")
        return []
    
def add_regra(regra):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    print(regra)

    headers = {
        'Content-Type': 'application/json',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/produto/regra"

    response = requests.post(update_url, headers=headers, json=regra)

    #print(response.json())

    if response.status_code == 200:
        print("Regra adicionada com sucesso!")
        return response.json()['result']
    else:
        print("Falha ao adicionar a regra.")
        return []
    
def update_regra(regra_id, update):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'Content-Type': 'application/json',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/produto/regra/{regra_id}"

    response = requests.put(update_url, headers=headers, json=update)

    if response.status_code == 200:
        print("Regra atualizada com sucesso!")
        return response.json()['result']
    else:
        print("Falha ao atualizar a regra.")
        return []
    
def delete_regra(regra_id):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'Content-Type': 'application/json',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/produto/regra/{regra_id}"

    response = requests.delete(update_url, headers=headers)

    if response.status_code == 200:
        print("Regra deletada com sucesso!")
        return response.json()['result']
    else:
        print("Falha ao deletar a regra.")
        return []
    
def ver_visitas_intervalo(mlb, dias, termino):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'Content-Type': 'application/x-www-form-urlencoded',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    params = {
        'last': dias,
        'ending': termino
    }

    update_url = f"{url_base}/api/v1/produto/{mlb}/visits/time_window"

    response = requests.get(update_url, headers=headers, params=params)

    if response.status_code == 200:
        print("Visitas listadas com sucesso!")
        return response.json()['result']
    else:
        print("Falha ao listar as visitas do item.")
        return None

def ver_vendas_intervalo(mlb, dias, termino):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'Content-Type': 'application/x-www-form-urlencoded',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    params = {
        'last': dias,
        'ending': termino
    }

    update_url = f"{url_base}/api/v1/produto/{mlb}/sales/time_window"

    response = requests.get(update_url, headers=headers, params=params)

    if response.status_code == 200:
        print("Vendas listadas com sucesso!")
        return response.json()['result']
    else:
        print("Falha ao listar as vendas do item.")
        return None
    
def ver_promocoes(mlb):

    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/produto/{mlb}/promocoes"

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Promoções listados com sucesso!")
        return response.json()['result']
    else:
        print("Falha ao listar as promoções.")
        return []