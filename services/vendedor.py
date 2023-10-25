import uuid

from . import personal_prefs

import requests


def get_all():
    url_base = personal_prefs.get('url_base')  # http://127.0.0.1:5000

    update_url = f"{url_base}/api/v1/vendedor/all"

    headers = {
        'x-access-token' : personal_prefs.get('token'),
    }

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Vendedores listados com sucesso!")
    else:
        print("Falha ao listar os Vendedores.")

    tudo = response.json()['result']
    return tudo

def get(id):
    url_base = personal_prefs.get('url_base')  # http://127.0.0.1:5000

    update_url = f"{url_base}/api/v1/vendedor/{id}"

    headers = {
        'x-access-token' : personal_prefs.get('token'),
    }

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Vendedor listado com sucesso!")
    else:
        print("Falha ao listar o Vendedor.")

    return response.json()['result']

def get_visitas(id, date_from, date_to):
    url_base = personal_prefs.get('url_base')  # http://127.0.0.1:5000

    update_url = f"{url_base}/api/v1/vendedor/{id}/visitas"

    headers = {
        'x-access-token' : personal_prefs.get('token'),
    }

    params = {
        'date_from': date_from,
        'date_to': date_to,
    }

    response = requests.get(update_url, headers=headers, params=params)

    if response.status_code == 200:
        print("Visitas listadas com sucesso!")
    else:
        print("Falha ao listar as visitas.")

    return response.json()['result']

def register_seller(seller_id, nome):
    url_base = personal_prefs.get('url_base')  # http://127.0.0.1:5000

    update_url = f"{url_base}/api/v1/vendedor/register/{seller_id}"

    #response = requests.post(f"{sv_personal_prefs.get('url_base')}/api/v1/vendedor/register/{seller_id}?nome={nome}")

    headers = {
        'x-access-token' : personal_prefs.get('token'),
    }

    params = {
        'nome': nome,
    }

    response = requests.post(update_url, headers=headers, params=params)

    if response.status_code == 200:
        print("Vendedor cadastrado!")
    else:
        print("Falha ao cadastrar o vendedor.")

    return response