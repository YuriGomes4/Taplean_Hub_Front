import threading
import webbrowser
from flask import Flask, request
import ssl
import os
import requests

# Variáveis de configuração da autenticação
client_id = '8228774779066849'
client_secret = 'n2tNuT15vwBUZGeBck1SA0ozBc6MQ2AA'
redirect_uri = 'https://localhost:3000'
state = '12345'
authorization_code = None

# Criando a instância do aplicativo Flask
app = Flask(__name__)

# Função para abrir a URL de autorização no navegador
def open_authorization_url():
    url = f'https://auth.mercadolivre.com.br/authorization?response_type=code&client_id={client_id}&redirect_uri={redirect_uri}&state={state}'
    webbrowser.open(url)


def get_token(code, state):

    headers = {
        'accept': 'application/json',
        'content-type': 'application/x-www-form-urlencoded',
    }

    data = {
        'grant_type': 'authorization_code',
        'client_id': client_id,
        'client_secret': client_secret,
        'code': code,
        'redirect_uri': redirect_uri,
    }

    response = requests.post('https://api.mercadolibre.com/oauth/token', headers=headers, data=data)

    print(response.json())

    token = response.json()['access_token']
    user_id = response.json()['user_id']
    refresh_token = response.json()['refresh_token']


    return [token, user_id, refresh_token]

# Rota para capturar os parâmetros
@app.route('/')
def capture_params():
    code = request.args.get('code', '')
    state = request.args.get('state', '')

    if code and state:
        result = get_token(code, state)
        return f'Code: {code}<br>State: {state}<br>Token: {result[0]}<br>User_ID: {result[1]}<br>Refresh_token: {result[2]}'
    else:
        return 'Parâmetros ausentes ou inválidos.'

# Gerando certificado autoassinado
def generate_self_signed_cert():
    cert_file = 'cert.pem'
    key_file = 'key.pem'

    if not os.path.exists(cert_file) or not os.path.exists(key_file):
        from OpenSSL import crypto

        k = crypto.PKey()
        k.generate_key(crypto.TYPE_RSA, 4096)

        cert = crypto.X509()
        cert.get_subject().C = "US"
        cert.get_subject().ST = "New York"
        cert.get_subject().L = "New York"
        cert.get_subject().O = "Flask Development"
        cert.get_subject().OU = "IT"
        cert.get_subject().CN = "localhost"
        cert.set_serial_number(1000)
        cert.gmtime_adj_notBefore(0)
        cert.gmtime_adj_notAfter(365*24*60*60)
        cert.set_issuer(cert.get_subject())
        cert.set_pubkey(k)
        cert.sign(k, 'sha256')

        with open(cert_file, "wb") as f:
            f.write(crypto.dump_certificate(crypto.FILETYPE_PEM, cert))
        
        with open(key_file, "wb") as f:
            f.write(crypto.dump_privatekey(crypto.FILETYPE_PEM, k))


# Inicia o servidor local em uma thread
open_authorization_thread = threading.Thread(target=open_authorization_url)
open_authorization_thread.start()

# Gerar o certificado autoassinado, caso ainda não exista
generate_self_signed_cert()

# Executando o servidor Flask com suporte HTTPS
if __name__ == '__main__':
    # Carregando o certificado e a chave privada
    context = ssl.SSLContext(ssl.PROTOCOL_TLS_SERVER)
    context.load_cert_chain('cert.pem', 'key.pem')

    # Iniciando o servidor com suporte HTTPS
    app.run(host='localhost', port=3000, ssl_context=context)

# Abre a URL de autorização no navegador
#open_authorization_url()

# Aguarda até que o código de autorização seja recebido
#open_authorization_thread.join()
