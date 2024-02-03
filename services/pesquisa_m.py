import streamlit as st
import requests

from services import config, ml_api
from services import personal_prefs

def ver_pesquisas(id_pesquisa=None):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    update_url = f"{url_base}/api/v1/pesquisa_mercado"

    headers = {
        'Content-Type': 'application/x-www-form-urlencoded',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    if id_pesquisa != None:
        params = {
            'pesquisa': id_pesquisa
        }

        response = requests.get(update_url, headers=headers, params=params)
    else:
        response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        return response.json()['result']
    else:
        print("Falha ao ver os pesquisas.")

def adc_prod_pesquisas(id_pesquisa, produtos_list):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    update_url = f"{url_base}/api/v1/pesquisa_mercado"

    headers = {
        'Content-Type': 'application/json',
        'x-access-token' : st.session_state.cookie_manager.get('token'),
    }

    params = {
        'pesquisa': id_pesquisa
    }

    pesquisa = ver_pesquisas(id_pesquisa)

    categorias = pesquisa["categorias"]
    produtos = pesquisa["produtos"]
    range_vendas = pesquisa["range_vendas"]
    tempo_vida = pesquisa["tempo_vida"]
    m_visitas_diarias = pesquisa["m_visitas_diarias"]
    preco_venda = pesquisa["preco_venda"]
    tipo_anuncio = pesquisa["tipo_anuncio"]
    taxa_fixa = pesquisa["taxa_fixa"]
    comissao = pesquisa["comissao"]
    titulo = pesquisa["titulo"]
    link = pesquisa["link"]
    frete_gratis = pesquisa["frete_gratis"]
    custo_frete = pesquisa["custo_frete"]

    if pesquisa["produtos"] != "":
        categorias += ","
        produtos += ","
        range_vendas += ","
        tempo_vida += ","
        m_visitas_diarias += ","
        preco_venda += ","
        tipo_anuncio += ","
        taxa_fixa += ","
        comissao += ","
        titulo += ","
        link += ","
        frete_gratis += ","
        custo_frete += ","

    prod_list = []

    for prod in produtos_list:
        if prod['adicionar']:
            prod_list.append(prod)

    for prod in prod_list:

        if prod["produtos"] not in produtos:

            comiss, tx_fixa = ml_api.taxa_venda(float(prod["preco_venda"]), prod["tipo_anuncio"], prod["categorias"], True)

            categorias += prod["categorias"]
            produtos += prod["produtos"]
            range_vendas += str(prod["range_vendas"])
            tempo_vida += str(prod["tempo_vida"])
            m_visitas_diarias += str(prod["m_visitas_diarias"])
            preco_venda += str(prod["preco_venda"])
            tipo_anuncio += prod["tipo_anuncio"]
            taxa_fixa += str(tx_fixa)
            comissao += str(comiss)
            titulo += prod["titulo"]
            link += prod["link"]
            frete_gratis += "true" if prod["frete_gratis"] else "false"
            custo_frete += str(ml_api.custo_frete_gratis(prod["produtos"])) if prod["frete_gratis"] else "0"

            if len(produtos_list) > 1 and prod != prod_list[-1]:
                categorias += ","
                produtos += ","
                range_vendas += ","
                tempo_vida += ","
                m_visitas_diarias += ","
                preco_venda += ","
                tipo_anuncio += ","
                taxa_fixa += ","
                comissao += ","
                titulo += "$@$"
                link += ","
                frete_gratis += ","
                custo_frete += ","

    data = {
        'nome': pesquisa['nome'],
        'categorias': categorias,
        'produtos': produtos,
        'range_vendas': range_vendas,
        'tempo_vida': tempo_vida,
        'm_visitas_diarias': m_visitas_diarias,
        'preco_venda': preco_venda,
        'tipo_anuncio': tipo_anuncio,
        'taxa_fixa': taxa_fixa,
        'comissao': comissao,
        'titulo': titulo,
        'link': link,
        'frete_gratis': frete_gratis,
        'custo_frete': custo_frete,
    }

    response = requests.put(update_url, headers=headers, params=params, json=data)

    if response.status_code == 200:
        #return response.json()['result']
        print("Produtos adicionado com sucesso")
    else:
        print("Falha ao adicionar produtos na pesquisa de mercado.")