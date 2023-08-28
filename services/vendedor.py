from sqlalchemy import create_engine, Column, Integer, String, Float, Date, ForeignKey
from sqlalchemy.orm import relationship
from sqlalchemy.orm import sessionmaker
from sqlalchemy.ext.declarative import declarative_base
import uuid

from . import config

import requests


def get_all():
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    update_url = f"{url_base}/api/v1/vendedor/all"

    headers = {
        'x-access-token' : config.get('token'),
    }

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Vendedores listados com sucesso!")
    else:
        print("Falha ao listar os Vendedores.")

    tudo = response.json()['result']
    return tudo

def get(id):
    url_base = config.get('url_base')  # http://127.0.0.1:5000

    update_url = f"{url_base}/api/v1/vendedor/{id}"

    headers = {
        'x-access-token' : config.get('token'),
    }

    response = requests.get(update_url, headers=headers)

    if response.status_code == 200:
        print("Vendedor listado com sucesso!")
    else:
        print("Falha ao listar o Vendedor.")

    return response.json()['result']