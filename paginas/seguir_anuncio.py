from datetime import datetime
import streamlit as st

from services import ml_api
import requests

import pandas as pd

import plotly.express as px

def page():
    st.title("Seguir anúncio")

    col1, col2 = st.columns((19, 3))
    url = col1.text_input(" ", placeholder="URL do anúncio", label_visibility='collapsed')
    if col2.button("Procurar"):
        response = requests.get(url)

        #response = requests.get("https://produto.mercadolivre.com.br/MLB-4081568982-perfume-banderas-queen-of-seduction-lively-muse-80ml-5-amostras-de-brinde-_JM#reco_item_pos=3&reco_backend=item_decorator&reco_backend_type=function&reco_client=home_navigation-history&reco_id=c3726e38-9fd0-4eda-8434-f410045b1d5c&c_id=/home/navigation/element&c_uid=c1af9076-4e9d-436a-8269-88d7da1f7717")

        tipo = ml_api.tipos_anuncios()

        logistica = {
            "xd_drop_off": "Mercado Envios Agência",
            "cross_docking": "Mercado Envios Coleta",
            "self_service": "Mercado Envios Flex",
            "fulfillment": "Mercado Envios Fulfillment",
            "drop_off": "Mercado Envios Agência",
        }

        if response.status_code == 200:
            # Obtém o conteúdo HTML da página como uma string
            html_content = response.text

            ind = 0
            item = ""
            inicio = int(html_content.index('"item_id":'))+10
            while True:
                if html_content[inicio+ind] == ",":
                    break
                else:
                    item += html_content[inicio+ind]
                    ind += 1

            mlb = item.replace('"', '')

            #st.write(ml_api.ver_anuncio(mlb))

            produto = ml_api.ver_anuncio(mlb)

            #response_img = requests.get(produto["pictures"][0]["secure_url"])

            #thumb = Image.open(BytesIO(response_img.content))

            st.markdown(f"#### {produto['title']}")
            st.write(f"")
            st.write(f"")
            left_co, cent_co,last_co = st.columns((1,4,1))
            with cent_co:
                st.image(produto["pictures"][0]["secure_url"], use_column_width=True)
            st.write(f"")
            st.write(f"")
            #st.write(f"")
            st.write(f"MLB: {produto['id']}")
            st.write(f"Título: {produto['title']}")
            st.write(f"Preço: R$ {str(produto['price']).replace('.', ',')}")
            styled_text = f'<span>Status: </span><span style="color: {("green" if produto["status"] == "active" else "orange")};">{("Ativo" if produto["status"] == "active" else "Pausado")}</span>'
            st.markdown(styled_text, unsafe_allow_html=True)
            st.write(f"Tipo do anúncio: {tipo[produto['listing_type_id']]}")
            st.write(f"Entrega grátis: {'Sim' if produto['shipping']['free_shipping'] else 'Não'}")
            st.write(f"Logística: {logistica[produto['shipping']['logistic_type']]}")
            saude = float(str(produto["health"])) if str(produto["health"]) != "None" else 0
            styled_text = f'<span>Saúde do anúncio: </span><span style="color: {("green" if saude > 0 else "red")};">{str(int(saude*100))+"%" if saude > 0 else ""}</span>'
            st.markdown(styled_text, unsafe_allow_html=True)

            categoria = ml_api.ver_categoria(produto['category_id'])

            caminho_cat = ""

            for index, item in enumerate(categoria['path_from_root']):
                if index == (len(categoria['path_from_root'])-1):
                    caminho_cat += item['name']
                else:
                    caminho_cat += item['name'] + " > "

            st.write(f'Categoria: {caminho_cat}')

            #print(datetime.now().year)

            #print(f'{datetime.now().year}-{datetime.now().month}-{datetime.now().day}')

            with st.spinner('Carregando gráfico de visitas'):

                visitas = ml_api.ver_visitas(produto['id'], 30, "day", f'{datetime.now().year}-{datetime.now().month}-{datetime.now().day}')

                dias = []
                visitas_dia = []

                for data in visitas:
                    dias.append(data['date'])
                    visitas_dia.append(data['total'])

                data = {
                    'Dia': dias,
                    'Visitas': visitas_dia
                }

                df = pd.DataFrame(data)

                fig = px.line(df, x='Dia', y='Visitas', title="Visitas dos últimos 30 dias", markers=True, color_discrete_sequence=[st.get_option("theme.primaryColor")])
                fig.update_layout(
                    dragmode=False
                )
                
                st.plotly_chart(fig, use_container_width=True)


