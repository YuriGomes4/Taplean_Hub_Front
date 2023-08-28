import requests

# Substitua estas informações pelas suas credenciais
client_id = '8228774779066849'
client_secret = 'n2tNuT15vwBUZGeBck1SA0ozBc6MQ2AA'
access_token = 'APP_USR-8228774779066849-080414-e60976c4015f0cb18c3733f48f93944d-1163179144'
seller_id = 1163179144
#state = '2412345'

# URL da API do Mercado Livre para obter os produtos
url = f'https://api.mercadolibre.com/users/{seller_id}/items/search'
#url = 'https://api.mercadolibre.com/users/me'

# Parâmetros para a solicitação (você pode ajustá-los conforme necessário)
params = {
    #'seller_id': seller_id,  # Substitua pelo ID do vendedor desejado
    'access_token': access_token,
    #'limit': 50,  # O máximo permitido é 50 por página
}

# Fazendo a solicitação à API
response = requests.get(url, params=params)
#response = requests.get(url)

# Verificando a resposta
if response.status_code == 200:
    data = response.json()
    products = data['results']

    # Aqui você tem a lista de todos os produtos da conta
    for product in products:
        # Aqui você pode processar as informações dos produtos conforme necessário
        url = f'https://api.mercadolibre.com/items/{product}'
        response = requests.get(url, params=params)
        data = response.json()

        print(data)

    #print(data)
else:
    print(f'Falha na solicitação. Código de status: {response.status_code}')
