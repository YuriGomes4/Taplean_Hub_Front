from . import personal_prefs

import requests


def get_all(seller_id):
    url_base = personal_prefs.get('url_base')  # http://127.0.0.1:5000

    headers = {
        'x-access-token' : personal_prefs.get('token'),
    }

    update_url = f"{url_base}/api/v1/vendas/all/{seller_id}"

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Vendas listadas com sucesso!")
    else:
        print("Falha ao listar as vendas.")

    tudo = response.json()['result']
    return tudo