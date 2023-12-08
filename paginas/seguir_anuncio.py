from datetime import datetime, timedelta
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

        #response = requests.get("https://produto.mercadolivre.com.br/MLB-3821119448-fone-de-ouvido-bluetooth-sem-fio-tws-microfone-todos-celular-_JM")

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

            item = ""

            inicio = int(html_content.index('<span class="ui-pdp-subtitle">'))+15
            while True:
                if html_content[inicio+ind] == "<":
                    break
                else:
                    item += html_content[inicio+ind]
                    ind += 1

            txt_range_vendas = item.replace('Novo  |  +', '').replace(' vendidos', '').replace('mil', '000').replace('+', '').replace('Novo','')

            range_vendas = int(txt_range_vendas) if txt_range_vendas != "" else 0

            print(range_vendas)

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
            styled_text = f'<span>Saúde do anúncio: </span><span style="color: {("green" if saude > 0 else "red")};">{str(int(saude*100))+"%" if saude > 0 else "Indisponível"}</span>'
            st.markdown(styled_text, unsafe_allow_html=True)

            categoria = ml_api.ver_categoria(produto['category_id'])

            caminho_cat = ""

            for index, item in enumerate(categoria['path_from_root']):
                if index == (len(categoria['path_from_root'])-1):
                    caminho_cat += item['name']
                else:
                    caminho_cat += item['name'] + " > "

            st.write(f'Categoria: {caminho_cat}')

            st.write(f"Catálogo: {'Sim' if produto['catalog_listing'] == True else 'Não'}")

            st.write(f"Range de vendas: {'+'+str(range_vendas) if range_vendas > 0 else 'Indisponível'}")

            st.write(f"Seller ID: {produto['seller_id']}")

            seller = ml_api.ver_seller(produto['seller_id'])

            st.write(f"Nome da loja: {seller['nickname']}")

            st.write(f"Loja oficial: {'Não' if produto['official_store_id'] == None else produto['official_store_id']}")


        #print(f'{datetime.now().year}-{datetime.now().month}-{datetime.now().day}')

        with st.spinner('Carregando gráfico de visitas'):

            visitas = ml_api.ver_visitas(produto['id'], 30, "day", f'{(datetime.now() - timedelta(days=1)).year}-{(datetime.now() - timedelta(days=1)).month}-{(datetime.now() - timedelta(days=1)).day}')

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


