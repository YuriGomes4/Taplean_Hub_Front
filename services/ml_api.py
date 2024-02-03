from time import sleep
import requests
import streamlit as st
import py_ml

from services import config

BASE_URL = 'https://api.mercadolibre.com'

LIMIT_REQ = 40

def ver_anuncio(mlb):

    return py_ml.anuncio.get().unico(mlb)

def tipos_anuncios():
    url = f'{BASE_URL}/sites/MLB/listing_types'

    response = requests.get(url)

    tipos = {}

    for item in response.json():
        tipos[item['id']] = item['name']

    return tipos

def ver_categoria(categoria):
    url = f'{BASE_URL}/categories/{categoria}'

    response = requests.get(url)

    cat = response.json()

    caminho_cat = ""

    for index, item in enumerate(cat['path_from_root']):
        if index == (len(cat['path_from_root'])-1):
            caminho_cat += item['name']
        else:
            caminho_cat += item['name'] + " > "

    return response.json(), caminho_cat

def ver_visitas_intervalo(mlb, dias, intervalo, termino, limite=None):
    url = f'{BASE_URL}/items/{mlb}/visits/time_window?last={dias}&unit={intervalo}&ending={termino}'

    count = 0
    while True:
        response = requests.get(url)

        if response.status_code == 200:
            return response.json()['results']
        else:
            sleep(1)
        count += 1

        if count >= (LIMIT_REQ if limite == None else limite):
            break

def ver_visitas(mlb, date_from, date_to):
    url = f'{BASE_URL}/items/visits?ids={mlb}&date_from={date_from}T00:00:00Z&date_to={date_to}T23:59:59Z'

    count = 0
    while True:
        response = requests.get(url)

        if response.status_code == 200:
            return response.json()
        else:
            sleep(1)
        count += 1

        if count >= LIMIT_REQ:
            return 0

def ver_seller(id):
    url = f'{BASE_URL}/users/{id}'

    response = requests.get(url)
    return response.json()

def taxa_venda(price, listing_type_id, category_id, taxa_fixa=False):
    url = f'{BASE_URL}/sites/MLB/listing_prices'

    params = {
        "price": price,
        "listing_type_id": listing_type_id,
        "category_id": category_id,
    }

    response = requests.get(url, params=params)

    if taxa_fixa:
        return (response.json()['sale_fee_amount']-response.json()['sale_fee_details']['fixed_fee']), response.json()['sale_fee_details']['fixed_fee']
    else:
        return response.json()['sale_fee_amount']

def custo_frete_gratis(mlb):
    url = f'{BASE_URL}/items/{mlb}/shipping_options'
    params = {'zip_code': '04913000'}
    response = requests.get(url, params=params)

    #print(response.json())
    count = 0
    while True:
        if response.status_code == 200:
            return response.json()['options'][0]['list_cost']
        else:
            count += 1
            if count >= LIMIT_REQ:
                return 130000
            sleep(0.2)

def posicao_anuncio(termo, mlb):
    url = f'{BASE_URL}/sites/MLB/search'

    offset = 0

    params = {
        "q": termo,
        "offset": offset
    }

    response = requests.get(url, params=params)

    pos = 1
    if int(response.json()['paging']['total']) > 0:
        while True:

            for item in response.json()['results']:
                if item['id'] == mlb:
                    return pos
                else:
                    pos += 1

            if pos-1 >= int(response.json()['paging']['total']) or pos-1 >= 1000:
                return 0
            else:
                offset += 50

            response = requests.get(url, params=params)

def detalhes_categoria(id_categoria):
    
    return py_ml.geral.get().detalhes_categoria(id_categoria)

def mais_vendidos(id_pesquisa, id_categoria):
    
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    update_url = f"{url_base}/api/v1/pesquisa_mercado/maisvendidos/{id_categoria}"

    params = {
        'pesquisa': id_pesquisa
    }

    response = requests.get(update_url, headers=headers, params=params)

    if response.status_code == 200:
        return response.json()['result']
    else:
        return []
    
def filhos_categoria(id_categoria):
    try:
        filhos = detalhes_categoria(id_categoria)['children_categories']
    except:
        pass

    cat_dict = {}
    cat_dict_r = {}

    for cat in filhos:
        cat_dict[cat['id']] = cat['name']
        cat_dict_r[cat['name']] = cat['id']

    return cat_dict, cat_dict_r
    
def categorias():
    categorias = py_ml.geral.get().categorias()

    cat_dict = {}
    cat_dict_r = {}

    for cat in categorias:
        cat_dict[cat['id']] = cat['name']
        cat_dict_r[cat['name']] = cat['id']

    return cat_dict, cat_dict_r