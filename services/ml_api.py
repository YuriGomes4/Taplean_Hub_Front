import requests

from . import personal_prefs, vendedor

# Substitua estas informações pelas suas credenciais
client_id = vendedor.get(personal_prefs.get('vendedor')).client_ml
client_secret = vendedor.get(personal_prefs.get('vendedor')).secret_ml
access_token = vendedor.get(personal_prefs.get('vendedor')).tk_ml
seller_id = vendedor.get(personal_prefs.get('vendedor')).id_ml
refresh_token = vendedor.get(personal_prefs.get('vendedor')).refresh_tk_ml
#state = '2412345'

def get_all_products():
    global client_id
    global client_secret
    global access_token
    global seller_id
    global refresh_token

    client_id = vendedor.get(personal_prefs.get('vendedor')).client_ml
    client_secret = vendedor.get(personal_prefs.get('vendedor')).secret_ml
    access_token = vendedor.get(personal_prefs.get('vendedor')).tk_ml
    seller_id = vendedor.get(personal_prefs.get('vendedor')).id_ml
    refresh_token = vendedor.get(personal_prefs.get('vendedor')).refresh_tk_ml

    print(seller_id)

    params = {
        #'seller_id': seller_id,  # Substitua pelo ID do vendedor desejado
        'access_token': access_token,
        #'limit': 50,  # O máximo permitido é 50 por página
    }

    def req_prods():

        # URL da API do Mercado Livre para obter os produtos
        url = f'https://api.mercadolibre.com/users/{seller_id}/items/search'
        #url = 'https://api.mercadolibre.com/users/me'

        # Fazendo a solicitação à API
        response = requests.get(url, params=params)
        #response = requests.get(url)

        return response
    
    response = req_prods()

    products = []

    if response.status_code != 200:
        if response.json()['message'] == 'invalid_token':
            headers = {
                'accept': 'application/json',
                'content-type': 'application/x-www-form-urlencoded',
            }

            data = {
                'grant_type': 'refresh_token',
                'client_id': client_id,
                'client_secret': client_secret,
                'refresh_token': refresh_token,
            }

            response = requests.post('https://api.mercadolibre.com/oauth/token', headers=headers, data=data)

            try:
                vendedor_db = vendedor.get(personal_prefs.get('vendedor'))
                vendedor_db.tk_ml = response.json()['access_token']
                vendedor_db.refresh_tk_ml = response.json()['refresh_token']
                vendedor.session.commit()
                vendedor.session.close()

                response = req_prods()
            except:
                print(f'Falha na solicitação. Código de status: {response.status_code}')
                print(response.json())

    if response.status_code == 200:
        data = response.json()
        mlbs = data['results']


        # Aqui você tem a lista de todos os produtos da conta
        for mlb in mlbs:
            # Aqui você pode processar as informações dos produtos conforme necessário
            url = f'https://api.mercadolibre.com/items/{mlb}'
            response = requests.get(url, params=params)
            product = response.json()

            url = f'https://api.mercadolibre.com/sites/MLB/listing_prices?price={product["price"]}&listing_type_id={product["listing_type_id"]}&category_id={product["category_id"]}'
            response = requests.get(url, params=params)

            sale_fee = response.json()['sale_fee_amount']

            product['sale_fee'] = sale_fee

            if product['shipping']['free_shipping'] == 1:

                url = f'https://api.mercadolibre.com/items/{mlb}/shipping_options'
                params = {'access_token': access_token, 'zip_code': '04913000'}
                response = requests.get(url, params=params)

                #print(response.json())

                ship_cost = response.json()['options'][0]['list_cost']

            else:
                ship_cost = 0

            product['shipping_free_cost'] = ship_cost

            #print(product['shipping_free_cost'])

            products.append(product)

            #print(data)

        print(f'Produtos: {len(mlbs)}')
    else:
        print(f'Falha na solicitação. Código de status: {response.status_code}')
        print(response.json())

    return products
