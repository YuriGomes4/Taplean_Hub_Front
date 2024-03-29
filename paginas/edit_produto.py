from datetime import datetime, date, timedelta
import json
import streamlit as st
import services
import pandas as pd
import plotly.express as px

from services import usuarios
from services import ml_api
from services import produtos

def page():
    from .base import base

    base()

    produto = st.session_state.produto

    st.write(f"#### Produto {produto['title']}")

    abas = []

    abas.append("Detalhes")
    abas.append("Gráficos")
    if usuarios.tenho_acesso('produtos_regras'):
        abas.append("Regras")
    abas.append("Qualidade")
    abas.append("Anotações")
    if usuarios.tenho_acesso('produtos_historico'):
        abas.append("Histórico")

    tabs = st.tabs(abas)
    #tabs_name["Detalhes"], tabs_name["Regras"], tabs_name["Histórico"] = st.tabs(["Detalhes", "Regras", "Histórico"])

    tabs_name = {}

    count = 0
    for aba in abas:
        tabs_name[aba] = tabs[count]
        count += 1

    if st.button("Voltar para os produtos", type='secondary', use_container_width=True):
        if st.session_state.page != "10":
            st.session_state.page = "10"
            st.rerun()

    ######################################### - Detalhes

    tipos = ml_api.tipos_anuncios()

    if "Detalhes" in tabs_name.keys():

        free_shipping = produto['free_shipping']
        free_shipping_text = "Sim" if int(free_shipping) == 1 else "Não"
        print(free_shipping_text, free_shipping)

        liquido = round(float(produto['price']) - float(produto['shipping_free_cost']) - float(produto['sale_fee']) - float(produto['cost']), 2)

        export = False

        tabs_name["Detalhes"].write(f"MLB: {produto['id']}"),
        categoria, caminho_cat = ml_api.ver_categoria(produto['category_id'])
        tabs_name["Detalhes"].write(f"Título: {produto['title']}"),
        tabs_name["Detalhes"].write(f"Categoria: {caminho_cat} ({categoria['id']})"),
        styled_text = f'<span>Status: </span><span style="color: {("green" if produto["status"] == "active" else "orange")};">{("Ativo" if produto["status"] == "active" else "Pausado")}</span>'
        tabs_name["Detalhes"].markdown(styled_text, unsafe_allow_html=True)
        custo = tabs_name["Detalhes"].number_input("Custo", value=float(produto['cost']))
        #tabs_name["Detalhes"].write(f"Custo: {produto['cost']}"),
        tabs_name["Detalhes"].write(f"Preço de venda: R$ {str(produto['price']).replace('.', ',')}"),
        tabs_name["Detalhes"].write(f"Tipo de anúncio: {tipos[produto['listing_type_id']]}"),
        frete_gratis = tabs_name["Detalhes"].selectbox(f"Frete grátis", ["Sim", "Não"], index=["Sim", "Não"].index(free_shipping_text)),
        if frete_gratis != free_shipping_text:
            export = True
        else:
            export = False
        tabs_name["Detalhes"].write(f"Custo de frete: R$ {str(produto['shipping_free_cost']).replace('.', ',')}"),
        tabs_name["Detalhes"].write(f"Taxas de venda: R$ {str(produto['sale_fee']).replace('.', ',')}"),
        styled_text = f'<span>Líquido: </span><span style="color: {("green" if liquido > 0 else "red")};">R$ {str(liquido).replace(".", ",")}</span>'
        tabs_name["Detalhes"].markdown(styled_text, unsafe_allow_html=True)
        #tabs_name["Detalhes"].write(f"Líquido: R$ {liquido}"),
        tabs_name["Detalhes"].write(f"Vendas: {produto['sales']}"),
        if tabs_name["Detalhes"].button("Salvar", type='primary', use_container_width=True):

            new_values = {
                'category_id': produto['category_id'],
                'cost': custo,
                'price': produto['price'],
                'title': produto['title'],
                'listing_type_id': produto['listing_type_id'],
                'free_shipping': 1 if frete_gratis == "Sim" else 0,
                'shipping_free_cost': produto['shipping_free_cost'],
                'sale_fee': produto['sale_fee'],
            }

            services.produtos.modify_Produtos_row(produto['id'], export, new_values)

            if st.session_state.page != "10":
                st.session_state.page = "10"
                st.rerun()

        regras = services.produtos.get_regras(produto['id'])

        #print(len(regras))

    ######################################### - Regras

    if "Regras" in tabs_name.keys():

        colunas_dict = {
            "ID Categoria" : "category_id",
            "Custo" : "cost",
            "Preço" : "price",
            "Título" : "title",
            "Tipo de anúncio" : "listing_type_id",
            "Frete grátis" : "free_shipping",
            "Custo de frete grátis" : "shipping_free_cost",
            "Taxa de venda" : "sale_fee",
            "Vendas" : "sales",
            "Faturamento total" : "invoicing",
            "Preço" : "preco",
            "Posição" : "posicao",
            "Logística" : "logistica",
            "Status" : "status",
            "Saúde" : "saude",
            "Tipo" : "tipo",
            "Desconto" : "desconto",
            "Frete grátis" : "frete_gratis",
        }

        operacoes_dict = {
            "Maior ou igual" : ">=",
            "Maior" : ">",
            "Menor ou igual" : "<=",
            "Menor" : "<",
            "Igual" : "==",
            "Diferente" : "!=",
        }

        inverted_colunas = {v: k for k, v in colunas_dict.items()}
        inverted_colunas['price'] = "Preço"
        inverted_operacoes = {v: k for k, v in operacoes_dict.items()}

        cont = 1

        for regra in regras:

            if regra['feito'] == False:

                cor = "red"
                tabs_name["Regras"].markdown(f"##### Regra {cont}")
                if regra["funcao"] != "seguir_preco_anuncio":
                    tabs_name["Regras"].markdown(f"""<p>Se o valor do campo <span style="color: {cor}">{inverted_colunas[regra["coluna_obj"]]}</span> do produto for <span style="color: {cor}">{inverted_operacoes[regra["operador"]]}</span> a <span style="color: {cor}">{regra["valor_obj"]}</span>, o campo <span style="color: {cor}">{inverted_colunas[regra["coluna_new"]]}</span> será alterado para <span style="color: {cor}">{regra["valor_new"]}</span></p>""", unsafe_allow_html=True)
                else:
                    tabs_name["Regras"].markdown(f"""<p>Se o <span style="color: {cor}">{inverted_colunas[regra["coluna_obj"]]}</span> do anúncio for <span style="color: {cor}">{"Menor" if regra["operador"] == "<" else "Maior"}</span> que o <span style="color: {cor}">preço</span> do produto, o <span style="color: {cor}">{inverted_colunas[regra["coluna_new"]]}</span> do produto será alterado para <span style="color: {cor}">R$ {str(regra["valor_new"].split("/")[1]).replace(".", ",")} {"mais barato" if regra["operador"] == "<" else "mais caro"}</span> {f"até o valor mínimo de R$ {str(regra['valor_new'].split('/')[0]).replace('.', ',')}" if regra["operador"] == "<" else f"até o valor máximo de R$ {str(regra['valor_new'].split('/')[2]).replace('.', ',')}"}</p>""", unsafe_allow_html=True)
                col1, col2 = tabs_name["Regras"].columns(2)
                if col1.button("Editar regra", use_container_width=True, type='primary', key=f"editbt{regra['id']}"):
                    if st.session_state.page != "12":
                        st.session_state.regra = regra['id']
                        st.session_state.page = "12"
                        st.rerun()
                if col2.button("Deletar regra", use_container_width=True, type='secondary', key=f"deletebt{regra['id']}"):
                    services.produtos.delete_regra(regra['id'])
                    st.rerun()

                tabs_name["Regras"].divider()

                cont += 1

                #cols = tabs_name["Regras"].columns(3)

        if tabs_name["Regras"].button("Adicionar nova regra", type="primary", use_container_width=True):
            if st.session_state.page != "12":
                st.session_state.regra = "create"
                st.session_state.page = "12"
                st.rerun()

    ######################################### - Historico

    if "Histórico" in tabs_name.keys():

        mudancas = services.produtos.product_changes(produto['id'])

        # Função para extrair a data de cada mudança
        def extrair_data(mudanca):
            data = datetime.strptime(str(mudanca['date']), "%Y-%m-%dT%H:%M:%S")
            #data = datetime.strptime(str(mudanca['date']), "%Y-%m-%dT%H:%M:%S.%f")
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
            data = extrair_data(mudanca)

            text = f"""
    <div>
    <p style="margin-bottom: 2px">Campo: <b>{mudanca['change']}</b></p>
    <div class="row" style="display: flex; align-items: center; margin-bottom: 10px">
        <div class="column" style="width: 100%;">
            <div class="text">
                Depois: {mudanca['new_value']}
            </div>
            <div class="text">
                Antes: {mudanca['old_value']}
            </div>
        </div>
        <div class="datetime" style="display: flex; align-items: flex-end; flex-direction:column">
            <div class="text">
                {data.day}/{data.month}/{data.year}
            </div>
            <div class="text">
                {data.hour}:{data.minute}
            </div>
        </div>
    </div>
    </div>
    """
            #tabs_name["Histórico"].markdown(f"**{mudanca['change']}**")

            d_datetime_0 = datetime.combine(d[0], datetime.min.time())
            d_datetime_1 = datetime.combine(d[1], datetime.min.time())

            if filtro == "Todos" or filtro == mudanca['change']:
                if d_datetime_0 <= data <= d_datetime_1:
                    tabs_name["Histórico"].markdown(text, unsafe_allow_html=True)

    ######################################### - Qualidade

    #tabs_name['Qualidade']
    tags = str(produto['tags'])[1:-1].replace("'", "").split(",")
    texto = """##### Tags do anúncio"""
    for tag in tags:
        texto += f"\n- {tag}"
    tabs_name['Qualidade'].markdown(texto)
    tabs_name['Qualidade'].write("")
    exp = tabs_name['Qualidade'].expander("Sobre as tags")
    exp.write("")
    exp.markdown("""###### good_quality_thumbnail
Explicação sobre essa tag""")
    exp.write("")
    exp.markdown("""###### extended_warranty_eligible
Produto elegível para garantia extendida.""")
    exp.write("")
    exp.markdown("""###### immediate_payment
Explicação sobre essa tag""")
    exp.write("")
    exp.markdown("""###### cart_eligible
Produto elegível para catálogo.""")
    exp.write("")

    if "Anotações" in tabs_name.keys():
        if produto['notes'] != "" and produto['notes'] != None:
            notes = json.loads(produto['notes'].replace('"', '').replace("'", '"'))
        else:
            notes = {}


        s_priv_notes = notes[st.session_state.user_id] if st.session_state.user_id in notes.keys() else ""
        priv_notes = tabs_name["Anotações"].text_area("Anotações privadas", height=300, value=s_priv_notes, help="Só você pode ver essas anotações.")
        s_prod_notes = notes['produto'] if 'produto' in notes.keys() else ""
        prod_notes = tabs_name["Anotações"].text_area("Anotações do produto", height=300, value=s_prod_notes, help="Todos que tiverem acesso a esse produto poderão ver essas anotações.")

        def save_notes():
            produtos.modify_Produtos_row(produto['id'], False, {'notes': str({'produto': prod_notes, st.session_state.user_id: priv_notes})})

        if priv_notes != s_priv_notes:
            save_notes()
            s_priv_notes = priv_notes

        if prod_notes != s_prod_notes:
            save_notes()
            s_prod_notes = prod_notes

    ######################################### - Gráficos
            
    tempo_opcoes = {
        "Última semana": {'dias': 7, 'intervalo': 1},
        "Último mês": {'dias': 30, 'intervalo': 10},
        "Últimos 2 meses": {'dias': 60, 'intervalo': 30},
        "Últimos 3 meses": {'dias': 90, 'intervalo': 30},
        "Personalizado": {}
    }

    tempo_padrao = "Última semana"

    tempo_atual = tabs_name['Gráficos'].selectbox("Período analisado", tempo_opcoes.keys(), index=list(tempo_opcoes.keys()).index(tempo_padrao))
        
    if tempo_atual != "Personalizado":
        tempo_gf = tempo_opcoes[tempo_atual]['dias']-1
        ending_gf = f'{(datetime.now() - timedelta(days=1)).year}-{(datetime.now() - timedelta(days=1)).month}-{(datetime.now() - timedelta(days=1)).day}'
        intervalo_gf = tempo_opcoes[tempo_atual]['intervalo']
    else:

        
        date_min = today - timedelta(days=150)

        d = tabs_name['Gráficos'].date_input(
            "Filtrar por data",
            (today - timedelta(days=30), today),
            min_value=date_min,
            max_value=today,
            format="DD/MM/YYYY",
            key="grafico"
        )

        try:
            entre_d = (d[1] - d[0]).days

            tempo_gf = entre_d
            ending_gf = f"{d[1].year}-{d[1].month}-{d[1].day}"
            intervalo_gf = round(entre_d/7) if entre_d/7 > 1 else 1
        except:
            entre_d = 3

            tempo_gf = entre_d
            ending_gf = today
            intervalo_gf = 1
    

    visitas = produtos.ver_visitas_intervalo(produto['id'], tempo_gf, ending_gf)
    vendas = produtos.ver_vendas_intervalo(produto['id'], tempo_gf, ending_gf)

    dias = []

    visitas_dia = []
    vendas_dia = []
    conversao_dia = []

    total_vendas = 0
    total_visitas = 0
    media_conversao = 0

    try:

        total_conv = 0

        for n in range(len(vendas)):
            date_s = datetime.strptime(vendas[n]['date'], "%Y-%m-%dT%H:%M:%SZ").date()
            dias.append(f"{date_s.day}/{date_s.month}/{date_s.year}")
            try:
                visitas_hoje = visitas[n]['total']
            except:
                visitas_hoje = 0

            vendas_hoje = vendas[n]['total']
            if vendas_hoje > 0 and visitas_hoje > 0:
                conversao_hoje = round((vendas_hoje/visitas_hoje)*100, 2)
            else:
                conversao_hoje = 0
            
            visitas_dia.append(visitas_hoje)
            vendas_dia.append(vendas_hoje)
            conversao_dia.append(conversao_hoje)

            total_visitas += visitas_hoje
            total_vendas += vendas_hoje
            total_conv += conversao_hoje

        media_conversao = total_conv/len(vendas)


        data = {
            'Vendas X Visitas': ["Visitas"] * len(dias) + ["Taxa de conversão"] * len(dias) + ["Vendas"] * len(dias),
            'Dia': dias * 3,
            'Vendas e visitas': visitas_dia + conversao_dia + vendas_dia,
        }

        df = pd.DataFrame(data)

        fig = px.line(df, x='Dia', y='Vendas e visitas', color='Vendas X Visitas', title=f"Vendas e visitas dos últimos {tempo_gf} dias" if tempo_atual != "Personalizado" else f"Vendas e visitas do dia {d[0].day}/{d[0].month}/{d[0].year} até {d[1].day}/{d[1].month}/{d[1].year}", markers=True, color_discrete_sequence=["#999999", "purple", st.get_option("theme.primaryColor")])
        fig.update_layout(
            dragmode=False,
            hovermode='x unified',
            xaxis=dict(
                tickmode='array',
                tickvals=(df.index[0::intervalo_gf]) if tempo_atual == "Última semana" or tempo_atual == "Personalizado" else df.index[0:int(len(df['Dia'])/3):intervalo_gf].to_list()+[int(len(df['Dia'])/3)-1],  # Mostra os dias de 10 em 10
                #ticktext=df['Dia'][0:int(len(df['Dia'])/3):intervalo_gf]  # Usa os textos correspondentes aos dias selecionados
            )
        )

        print(list(df.index[0:int(len(df['Dia'])/3):intervalo_gf].to_list())+[29])

        fig.update_traces(mode="markers+lines", hovertemplate=None)
        fig.update_xaxes(
            showspikes=True,
            spikecolor="gray",
            spikesnap="data",
            spikemode="across",
            spikedash="dash",
        )
        
        tabs_name['Gráficos'].plotly_chart(fig, use_container_width=True)

        tabs_name['Gráficos'].markdown("##### No período")
        tabs_name['Gráficos'].write("")
        tabs_name['Gráficos'].write(f"Total de VENDAS: {total_vendas}")
        tabs_name['Gráficos'].write(f"Total de VISITAS: {total_visitas}")
        tabs_name['Gráficos'].write(f"Média de taxa de conversão: {round(media_conversao, 2)}%")
    
    except:
        pass

    ######################################### - Promoções

    promocoes = services.produtos.ver_promocoes(produto['id'])

    print(promocoes)