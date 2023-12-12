from datetime import datetime, timedelta
from time import sleep
import streamlit as st

from services import ml_api
import requests

import pandas as pd

import plotly.express as px

from services import anuncio

def page():
    st.title("Seguir anúncio")

    col1, col2, col3 = st.columns((8, 8, 3))
    url = col1.text_input(" ", placeholder="URL do anúncio", label_visibility='collapsed')
    termo = col2.text_input(" ", placeholder="Como você buscaria o anúncio", label_visibility='collapsed', key="termo")
    if col3.button("Procurar"):
        if url != "" and termo != "" and len(termo) > 2:
            tipo = ml_api.tipos_anuncios()

            logistica = {
                "xd_drop_off": "Mercado Envios Agência",
                "cross_docking": "Mercado Envios Coleta",
                "self_service": "Mercado Envios Flex",
                "fulfillment": "Mercado Envios Fulfillment",
                "drop_off": "Mercado Envios Agência",
            }

            count = 0

            while True:
                response = requests.get(url)

                #response = requests.get("https://produto.mercadolivre.com.br/MLB-1148161273-etiqueta-anvisa-para-manipulaco-de-alimentos-_JM#polycard_client=recommendations_home_navigation-trend-recommendations&reco_backend=machinalis-homes-pdp-boos&reco_client=home_navigation-trend-recommendations&reco_item_pos=2&reco_backend_type=function&reco_id=a81cd0b2-3d35-4de8-9aab-d2309c21c5de")

                if response.status_code == 200:
                    # Obtém o conteúdo HTML da página como uma string
                    html_content = response.text

                    ind = 0
                    item = ""
                    ident = '"item_id":'
                    inicio = int(html_content.index(ident))+len(ident)
                    while True:
                        if html_content[inicio+ind] == ",":
                            break
                        else:
                            item += html_content[inicio+ind]
                            ind += 1

                    mlb = item.replace('"', '')

                    ind = 0
                    item = ""
                    ident = '<span class="ui-pdp-subtitle">'
                    inicio = int(html_content.index(ident))+len(ident)
                    while True:
                        if html_content[inicio+ind] == "<":
                            break
                        else:
                            item += html_content[inicio+ind]
                            ind += 1

                    txt_range_vendas = item.replace('Novo  |  +', '').replace(' vendidos', '').replace('mil', '000').replace('+', '').replace('Novo','')

                    range_vendas = int(txt_range_vendas) if txt_range_vendas != "" else 0

                    #print(range_vendas)

                    #st.write(ml_api.ver_anuncio(mlb))

                    produto = ml_api.ver_anuncio(mlb)

                    #response_img = requests.get(produto["pictures"][0]["secure_url"])

                    #thumb = Image.open(BytesIO(response_img.content))

                    st.markdown(f"### {produto['title']}")
                    st.write(f"")
                    st.write(f"")
                    left_co, cent_co,last_co = st.columns((1,4,1))
                    with cent_co:
                        st.image(produto["pictures"][0]["secure_url"], use_column_width=True)
                    st.write(f"---------------------------------")
                    st.markdown("#### Informações")
                    st.write(f"")
                    #st.write(f"")
                    with st.expander("Sobre o anúncio"):
                        st.write(f"")
                        st.write(f"MLB: {produto['id']}")
                        st.write(f"Título: {produto['title']}")
                        with st.spinner("Procurando posição do anúncio"):
                            posicao_anuncio = ml_api.posicao_anuncio(termo, mlb)
                            st.markdown(f'Posição do anúncio: {str(posicao_anuncio)+"º" if posicao_anuncio > 0 else "Não encontrado"} em "{termo}"', help="O anúncio é procurado entre os primeiros 1000 resultados da busca com a pesquisa que você escreveu.")
                        st.write(f"Preço: R$ {str(produto['price']).replace('.', ',')}")
                        desconto = float(produto['original_price'])-float(produto['price']) if produto['original_price'] != None else produto['price']+1
                        st.write(f"Desconto: {round((desconto/produto['original_price'] if produto['original_price'] != None else 0)*100)}%")
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

                    #st.write(f"---------------------------------")

                    with st.expander("Vendas"):
                    #st.write(f"")
                        st.write(f"")

                        st.write(f"Range de vendas: {'+'+str(range_vendas) if range_vendas > 0 else 'Indisponível'}")

                        data_criacao = datetime.strptime(produto['date_created'], "%Y-%m-%dT%H:%M:%S.%fZ").date()
                        st.write(f"Data de criação: {data_criacao.day}/{data_criacao.month}/{data_criacao.year}")

                        tempo_vida = (datetime.now().date()-data_criacao).days
                        st.write(f"Tempo de vida: {tempo_vida} dias")

                        st.write(f"Média de vendas por dia: {str(round(range_vendas/tempo_vida, 2))+' vendas' if range_vendas > 0 else 'Indisponível'}")

                        visitas_totais = int(ml_api.ver_visitas(mlb, data_criacao, datetime.now().date())[0]['total_visits']) if tempo_vida <= 365 else 0
                        st.write(f"Total de visitas: {visitas_totais if visitas_totais > 0 else 'Indisponível'}")

                        media_conversao = range_vendas/visitas_totais if visitas_totais > 0 else 0
                        st.write(f"Taxa de conversão média: {str(round(media_conversao, 2)*100)+'%' if media_conversao > 0 else 'Indisponível'}")

                    #st.write(f"---------------------------------")

                    with st.expander("Valores"):
                    #st.write(f"")
                        st.write(f"")

                        taxa_venda = ml_api.taxa_venda(produto['price'], produto['listing_type_id'], produto['category_id'])
                        st.write(f"Taxa de venda: R$ {str(taxa_venda).replace('.', ',')}")

                        custo_frete_gratis = ml_api.custo_frete_gratis(mlb) if produto['shipping']['free_shipping'] else 0
                        st.write(f"Custo de entrega grátis: R$ {str(round(custo_frete_gratis, 2)).replace('.', ',')}")

                        liquido = round(float(produto['price']) - custo_frete_gratis - taxa_venda, 2)
                        st.write(f"Recebimento bruto: R$ {str(liquido).replace('.', ',')}")

                        st.write(f"Faturamento total estimado: {'R$ '+str(round(range_vendas*float(produto['price']), 2)).replace('.', ',') if range_vendas > 0 else 'Indisponível'}")
                        st.write(f"Faturamento bruto total estimado: {'R$ '+str(round(range_vendas*liquido, 2)).replace('.', ',') if range_vendas > 0 else 'Indisponível'}")

                    #st.write(f"---------------------------------")

                    with st.expander("Sobre o vendedor"):
                    #st.write(f"")
                        st.write(f"")

                        st.write(f"Seller ID: {produto['seller_id']}")

                        seller = ml_api.ver_seller(produto['seller_id'])

                        st.write(f"Nome da loja: {seller['nickname']}")

                        st.write(f"Loja oficial: {'Não' if produto['official_store_id'] == None else produto['official_store_id']}")

                    st.write(f"---------------------------------")

                    st.markdown("#### Gráficos")
                    st.write(f"")


                    #print(f'{datetime.now().year}-{datetime.now().month}-{datetime.now().day}')

                    with st.spinner('Carregando gráfico de visitas'):

                        visitas = ml_api.ver_visitas_intervalo(produto['id'], 30, "day", f'{(datetime.now() - timedelta(days=1)).year}-{(datetime.now() - timedelta(days=1)).month}-{(datetime.now() - timedelta(days=1)).day}')

                        dias = []
                        visitas_dia = []

                        for data in visitas:
                            date = datetime.strptime(data['date'], "%Y-%m-%dT%H:%M:%SZ").date()
                            dias.append(f"{date.day}/{date.month}/{date.year}")
                            visitas_dia.append(data['total'])

                        data = {
                            'Dia': dias,
                            'Visitas': visitas_dia
                        }

                        df = pd.DataFrame(data)

                        fig = px.line(df, x='Dia', y='Visitas', title="Visitas dos últimos 30 dias", markers=True, color_discrete_sequence=[st.get_option("theme.primaryColor")])
                        fig.update_layout(
                            dragmode=False,
                            hovermode='x',
                            xaxis=dict(
                                tickmode='array',
                                tickvals=df.index[::10],  # Mostra os dias de 10 em 10
                                ticktext=df['Dia'][::10]  # Usa os textos correspondentes aos dias selecionados
                            )
                        )
                        fig.update_traces(
                            hovertext=df['Visitas'],
                            hovertemplate="Visitas: %{hovertext}<extra></extra>"
                        )
                        fig.update_xaxes(
                            showspikes=True,
                            spikecolor="gray",
                            spikesnap="data",
                            spikemode="across",
                            spikedash="dash",
                        )
                        
                        st.plotly_chart(fig, use_container_width=True)

                    def seguir():
                        #print("foi")
                        anuncio.seguir_anuncio(mlb, termo)

                    st.button("Seguir esse anúncio", use_container_width=True, type='primary', key='seguir_anuncio', on_click=seguir)

                    break
                else:
                    count =+ 1

                    if count >= 50:
                        st.toast("Não foi possível ver este anúncio!")
                        break
                    else:
                        sleep(0.2)

        else:
            if termo != "" and len(termo) <= 2:
                st.toast("O termo de busca está muito curto!")
            else:
                st.toast("Os dois campos precisam ser preenchidos!")

    if st.button("Voltar para os anúncios", use_container_width=True):
        if st.session_state.page != "40":
            st.session_state.page = "40"
            st.rerun()

