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