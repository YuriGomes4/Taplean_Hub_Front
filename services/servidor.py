from time import sleep
import requests
import streamlit as st

from services import config

class auth():

    def __init__(self, print_error=True):
        try:
            self.access_token = st.session_state.cookie_manager.get('token')
        except:
            self.access_token = ""
        self.base_url = config.get('url_base')
        self.print_error = print_error

    def request(self, method="GET", url="", headers=None, params=None, data=None):

        req_params = params if params != None else {}
        req_headers = headers if headers != None else {}
        req_data = data if data != None else {}

        req_headers['x-access-token'] = self.access_token

        while True:

            match method:
                case "GET":
                    response = requests.get(url=url, params=req_params, headers=req_headers, data=req_data)
                case "PUT":
                    response = requests.put(url=url, params=req_params, headers=req_headers, data=req_data)
                case "POST":
                    response = requests.post(url=url, params=req_params, headers=req_headers, data=req_data)
                case "DELETE":
                    response = requests.delete(url=url, params=req_params, headers=req_headers, data=req_data)
                case "HEAD":
                    response = requests.head(url=url, params=req_params, headers=req_headers, data=req_data)
                case "OPTIONS":
                    response = requests.options(url=url, params=req_params, headers=req_headers, data=req_data)

            if response.status_code == 200:
                return response
            elif response.status_code != 429:
                if self.print_error:
                    print(f"""Erro no retorno da API do Servidor
Mensagem: {response.json()['message']}
URL: {url}
Metodo: {method}
Parametros: {req_params}
Headers: {req_headers}
Data: {req_data}
JSON: {response.json()}""")
                break
            else:
                sleep(5)