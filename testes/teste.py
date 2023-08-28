import requests

client_id = '8228774779066849'
client_secret = 'n2tNuT15vwBUZGeBck1SA0ozBc6MQ2AA'
refresh_token = 'TG-64d03ed676800700014e80f3-1163179144'

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

print(response.json())