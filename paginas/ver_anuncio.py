from datetime import date, datetime, timedelta
from time import sleep
import pandas as pd
import requests
import streamlit as st
from services import anuncio, ml_api, produtos
import plotly.express as px

def page():

    anun_id = st.session_state.anuncio
    anun = anuncio.ver_anuncio(anun_id)

    anun_mlb = anun['id'].split('$')[1]

    st.title(anun['titulo'])

    abas = []

    abas.append("Detalhes")
    abas.append("Gráficos")
    abas.append("Histórico")
    #abas.append("Qualidade")

    tabs = st.tabs(abas)

    tabs_name = {}

    count = 0
    for aba in abas:
        tabs_name[aba] = tabs[count]
        count += 1

    ############################################### - Detalhes

    tipo = ml_api.tipos_anuncios()

    logistica = {
        "xd_drop_off": "Mercado Envios Agência",
        "cross_docking": "Mercado Envios Coleta",
        "self_service": "Mercado Envios Flex",
        "fulfillment": "Mercado Envios Fulfillment",
        "drop_off": "Mercado Envios Agência",
    }

    anun_api = ml_api.ver_anuncio(anun_id)

    count = 0

    while True:
        response = requests.get(anun_api['permalink'])

        #response = requests.get("https://produto.mercadolivre.com.br/MLB-1148161273-etiqueta-anvisa-para-manipulaco-de-alimentos-_JM#polycard_client=recommendations_home_navigation-trend-recommendations&reco_backend=machinalis-homes-pdp-boos&reco_client=home_navigation-trend-recommendations&reco_item_pos=2&reco_backend_type=function&reco_id=a81cd0b2-3d35-4de8-9aab-d2309c21c5de")

        if response.status_code == 200:
            break
        else:
            count =+ 1

            if count >= 50:
                st.toast("Não foi possível ver este anúncio!")
                break
            else:
                sleep(0.2)

    html_content = response.text

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

    tabs_name['Detalhes'].write(f"")
    tabs_name['Detalhes'].write(f"")
    left_co, cent_co,last_co = tabs_name['Detalhes'].columns((1,4,1))
    with cent_co:
        st.image(anun_api["pictures"][0]["secure_url"], use_column_width=True)
    tabs_name['Detalhes'].write(f"---------------------------------")
    tabs_name['Detalhes'].markdown("#### Informações")
    tabs_name['Detalhes'].write(f"")
    #st.write(f"")
    with tabs_name['Detalhes'].expander("Sobre o anúncio"):
        st.write(f"")
        st.write(f"MLB: {anun_mlb}")
        st.write(f"Título: {anun['titulo']}")
        st.markdown(f'Posição do anúncio: {str(anun["posicao"])+"º" if anun["posicao"] > 0 else "Não encontrado"} em "{anun["termo"]}"', help="O anúncio é procurado entre os primeiros 1000 resultados da busca com a pesquisa que você escreveu.")
        st.write(f"Preço: R$ {str(anun['preco']).replace('.', ',')}")
        #desconto = float(anun_api['original_price'])-float(produto['price']) if produto['original_price'] != None else produto['price']+1
        #print(anun_id['original_price'])
        st.write(f"Desconto: {round((float(anun['desconto'])/anun_api['original_price'] if anun_api['original_price'] != None else 0)*100)}%")
        styled_text = f'<span>Status: </span><span style="color: {("green" if anun["status"] == "active" else "orange")};">{("Ativo" if anun["status"] == "active" else "Pausado")}</span>'
        st.markdown(styled_text, unsafe_allow_html=True)
        st.write(f"Tipo do anúncio: {tipo[anun['tipo']]}")
        st.write(f"Entrega grátis: {'Sim' if anun['frete_gratis'] else 'Não'}")
        st.write(f"Logística: {logistica[anun['logistica']]}")
        saude = anun["saude"] if str(anun["saude"]) != "None" else 0
        styled_text = f'<span>Saúde do anúncio: </span><span style="color: {("green" if saude > 0 else "red")};">{str(int(saude*100))+"%" if saude > 0 else "Indisponível"}</span>'
        st.markdown(styled_text, unsafe_allow_html=True)

        categoria, caminho_cat = ml_api.ver_categoria(anun_api['category_id'])

        st.write(f'Categoria: {caminho_cat}')

        st.write(f"Catálogo: {'Sim' if anun_api['catalog_listing'] == True else 'Não'}")

        st.write(f"Link do anúncio: {anun_api['permalink']}")

    #st.write(f"---------------------------------")

    with tabs_name['Detalhes'].expander("Vendas"):
    #st.write(f"")
        st.write(f"")

        st.write(f"Range de vendas: {'+'+str(range_vendas) if range_vendas > 0 else 'Indisponível'}")

        data_criacao = datetime.strptime(anun_api['date_created'], "%Y-%m-%dT%H:%M:%S.%fZ").date()
        st.write(f"Data de criação: {data_criacao.day}/{data_criacao.month}/{data_criacao.year}")

        tempo_vida = (datetime.now().date()-data_criacao).days
        st.write(f"Tempo de vida: {tempo_vida} dias")

        st.write(f"Média de vendas por dia: {str(round(range_vendas/tempo_vida, 2))+' vendas' if range_vendas > 0 else 'Indisponível'}")

        visitas_totais = int(ml_api.ver_visitas(anun_mlb, data_criacao, datetime.now().date())[0]['total_visits']) if tempo_vida <= 365 else 0
        st.write(f"Total de visitas: {visitas_totais if visitas_totais > 0 else 'Indisponível'}")

        media_conversao = range_vendas/visitas_totais if visitas_totais > 0 else 0
        st.write(f"Taxa de conversão média: {str(round(media_conversao, 2)*100)+'%' if media_conversao > 0 else 'Indisponível'}")

    #st.write(f"---------------------------------")

    with tabs_name['Detalhes'].expander("Valores"):
    #st.write(f"")
        st.write(f"")

        taxa_venda = ml_api.taxa_venda(anun['preco'], anun['tipo'], anun_api['category_id'])
        st.write(f"Taxa de venda: R$ {str(taxa_venda).replace('.', ',')}")

        custo_frete_gratis = ml_api.custo_frete_gratis(anun_mlb) if anun['frete_gratis'] else 0
        st.write(f"Custo de entrega grátis: R$ {str(round(custo_frete_gratis, 2)).replace('.', ',') if custo_frete_gratis != 130000 else 'Problema para calcular o custo de frete grátis'}")

        liquido = round(float(anun['preco']) - (custo_frete_gratis if custo_frete_gratis != 130000 else 0) - taxa_venda, 2)
        st.write(f"Recebimento bruto: R$ {str(liquido).replace('.', ',')}")

        st.write(f"Faturamento total estimado: {'R$ '+str(round(range_vendas*float(anun['preco']), 2)).replace('.', ',') if range_vendas > 0 else 'Indisponível'}")
        st.write(f"Faturamento bruto total estimado: {'R$ '+str(round(range_vendas*liquido, 2)).replace('.', ',') if range_vendas > 0 else 'Indisponível'}")

    #st.write(f"---------------------------------")

    with tabs_name['Detalhes'].expander("Sobre o vendedor"):
    #st.write(f"")
        st.write(f"")

        st.write(f"Seller ID: {anun_api['seller_id']}")

        seller = ml_api.ver_seller(anun_api['seller_id'])

        st.write(f"Nome da loja: {seller['nickname']}")

        st.write(f"Loja oficial: {'Não' if anun_api['official_store_id'] == None else anun_api['official_store_id']}")

    ######################################### - Gráficos

    if "Gráficos" in tabs_name.keys():

        #with tabs_name["Gráficos"].spinner('Carregando gráfico de visitas'):

        visitas = ml_api.ver_visitas_intervalo(anun_mlb, 30, "day", f'{(datetime.now() - timedelta(days=1)).year}-{(datetime.now() - timedelta(days=1)).month}-{(datetime.now() - timedelta(days=1)).day}')

        dias = []
        visitas_dia = []

        for data in visitas:
            date_g = datetime.strptime(data['date'], "%Y-%m-%dT%H:%M:%SZ").date()
            dias.append(f"{date_g.day}/{date_g.month}/{date_g.year}")
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
        
        tabs_name["Gráficos"].plotly_chart(fig, use_container_width=True)

    ######################################### - Historico

    if "Histórico" in tabs_name.keys():

        mudancas = produtos.product_changes(anun['id'])

        # Função para extrair a data de cada mudança
        def extrair_data(mudanca):
            data = datetime.strptime(mudanca['date'], "%Y-%m-%dT%H:%M:%S.%f")
            return data

        # Classifique as mudanças com base na data
        mudancas_ordenadas = sorted(mudancas, key=extrair_data, reverse=True)

        # Agora 'mudancas_ordenadas' contém as mudanças ordenadas por data

        historico = []

        filtros = ["Todos"]

        for mudanca in mudancas_ordenadas:
            if mudanca['change'] not in filtros:
                filtros.append(mudanca['change'])

        col1, col2 = tabs_name["Histórico"].columns(2)

        filtro = col1.selectbox("Filtrar por tipo", filtros)

        today = datetime.now()
        jan_1 = date(today.year, 1, 1)

        d = col2.date_input(
            "Filtrar por data",
            (jan_1, today),
            format="DD.MM.YYYY",
        )

        for mudanca in mudancas_ordenadas:
            data = datetime.strptime(mudanca['date'], "%Y-%m-%dT%H:%M:%S.%f")

            text = f"""
    <div>
    <p style="margin-bottom: 2px">Campo: <b>{mudanca['change']}</b></p>
    <div class="row" style="display: flex; align-items: center; margin-bottom: 10px">
        <div class="column" style="width: 100%;">
            <div class="text">
                Depois: {tipo[mudanca['new_value']] if mudanca['change'] == "tipo" else mudanca['new_value']}
            </div>
            <div class="text">
                Antes: {tipo[mudanca['old_value']] if mudanca['change'] == "tipo" else mudanca['old_value']}
            </div>
        </div>
        <div class="datetime" style="display: flex; align-items: flex-end; flex-direction:column">
            <div class="text">
                {data.day}/{data.month}/{data.year}
            </div>
            <div class="text">
                {'0'+str(data.hour) if len(str(data.hour)) < 2 else data.hour}:{'0'+str(data.minute) if len(str(data.minute)) < 2 else data.minute}
            </div>
        </div>
    </div>
    </div>
    """
            #tabs_name["Histórico"].markdown(f"**{mudanca['change']}**")

            d_datetime_0 = datetime.combine(d[0], datetime.min.time())
            d_datetime_1 = datetime.combine(d[1], datetime.max.time())

            if filtro == "Todos" or filtro == mudanca['change']:
                if d_datetime_0 <= data <= d_datetime_1:
                    tabs_name["Histórico"].markdown(text, unsafe_allow_html=True)





    if st.button("Voltar para os anúncios", use_container_width=True):
        if st.session_state.page != "40":
            st.session_state.page = "40"
            st.rerun()


