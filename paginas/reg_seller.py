import webbrowser
import streamlit as st
from services import personal_prefs as sv_personal_prefs
from services import vendedor as sv_vendedor
import requests

def page():
    from .base import base

    base()

    st.title("Registrar um novo vendedor")
    nome = st.text_input("Nome do vendedor")
    col1, col2 = st.columns(2)
    seller_id = col1.text_input("Seller ID", st.session_state.seller_id)
    col2.write("")
    col2.write("")
    if col2.button("Descobrir o Seller ID"):
# URL da página que você deseja obter o HTML
        url = seller_id

        # Faz uma solicitação GET à URL
        response = requests.get(url)

        # Verifica se a solicitação foi bem-sucedida (código de status 200)
        if response.status_code == 200:
            # Obtém o conteúdo HTML da página como uma string
            html_content = response.text

            ind = 0
            seller = ""
            inicio = int(html_content.index('"seller_id":'))+12
            while True:
                if html_content[inicio+ind] == ",":
                    break
                else:
                    seller += html_content[inicio+ind]
                    ind += 1

            st.session_state.seller_id = seller
            st.rerun()
            
        else:
            print(f"A solicitação falhou com o código de status {response.status_code}")

    st.write('Caso você não saiba o Seller ID, coloque o link de um anúncio e clique no botão "Descobrir o Seller ID"')

    if nome != "" and seller_id != "":

        st.link_button("Vá para o DevCenter e crie uma nova aplicação", "https://developers.mercadolivre.com.br/devcenter")

        if st.button("Teste"):
            response = sv_vendedor.register_seller(seller_id, nome)

            if response.status_code == 200:
                client_id = "8228774779066849"
                redirect_uri = f"{sv_personal_prefs.get('url_base')}/api/v1/retornos/redirect"
                state = f"{seller_id}!!!{redirect_uri}"
                url = f"https://auth.mercadolivre.com.br/authorization?response_type=code&client_id={client_id}&redirect_uri={redirect_uri}&state={state}"
                webbrowser.open(url)
            else:
                st.toast(f"Erro na requisição {str(response.content)}")
                print(response.content)
            #st.link_button("Autorize o aplicativo", url)

