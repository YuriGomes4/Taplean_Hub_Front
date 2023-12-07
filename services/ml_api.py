from time import sleep
import requests

BASE_URL = 'https://api.mercadolibre.com'

def ver_anuncio(mlb):

    params = {
        "ids": mlb
    }

    url = f'{BASE_URL}/items'

    response = requests.get(url, params=params)

    return response.json()[0]["body"]

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
    return response.json()

def ver_visitas(mlb, dias, intervalo, termino):
    url = f'{BASE_URL}/items/{mlb}/visits/time_window?last={dias}&unit={intervalo}&ending={termino}'

    count = 0
    while True:
        response = requests.get(url)

        if response.status_code == 200:
            return response.json()['results']
        else:
            sleep(1)
        count += 1

        if count >= 15:
            break