from datetime import datetime, timedelta
import random
import requests
import streamlit as st
import pandas as pd
from PIL import Image
from io import BytesIO

from services import ml_api

def page():
    from .base import base

    base()

    pesquisa = st.session_state.pesquisa_m

    st.title(f"Adicionar produtos a pesquisa de mercado {pesquisa['nome']}")

    if pesquisa['tipo'] == "categoria":
        categorias = pesquisa['categorias'].split(',')

        opt_proc_prod = ["Selecione", "Mais vendido de uma categoria", "Pesquisando"]

        sb_proc_prod = st.selectbox("Como você quer procurar o produto?", opt_proc_prod, key="sb_proc_prod")

        match sb_proc_prod:
            case "Mais vendido de uma categoria":
                cat_list, cat_list_r = ml_api.categorias()

                final = False

                cats = [[None, cat_list_r]]

                for cat in cats:
                
                    cat[0] = st.selectbox("Escolha a categoria", ["Selecione"]+list(cat[1].keys()))

                    if cat[0] != "Selecione":

                        catA_childs, catA_childs_r = ml_api.filhos_categoria(cat[1][cat[0]])

                        if len(catA_childs_r) > 0:

                            cats.append([None, catA_childs_r])
                        else:
                            final = True

                if final:
                    categ = cats[-1][1][cats[-1][0]]

                    gap = (0.7,1,1,1,1,1,1,1)

                    fields = ["Imagem", "Titulo", "Tempo de vida", "R. vendas", "M. vendas mês", "M. visitas diarias", "Variação de visitas", "Adicionar"]


                    cols = st.columns(gap)

                    for col, field_name in zip(cols, fields):
                        # header
                        col.write(field_name)


                    produtos = ml_api.mais_vendidos(pesquisa['id'], categ)['content']

                    if "prods_pesquisa" in st.session_state:
                        prods = st.session_state.prods_pesquisa
                    else:
                        prods = []

                    prods_ids = []

                    for prod in prods:
                        if prod['produtos'] not in prods_ids:
                            prods_ids.append(prod['produtos'])

                    for prod in produtos:
                            
                        imagem, titulo, tempo_vida, r_vendas, m_venda_mes, m_visitas_dia, var_visitas, adicionar = st.columns(gap)

                        if prod['id'] not in prods_ids:

                            det_prod = ml_api.ver_anuncio(prod['id'])

                            try:
                                titl = det_prod['title']
                            except:
                                print(det_prod)

                            # URL da imagem
                            url = det_prod["pictures"][0]["secure_url"]

                            # Baixa a imagem da URL
                            response = requests.get(url)
                            img = Image.open(BytesIO(response.content))

                            # Redimensiona a imagem para uma altura de 70 pixels mantendo a proporção
                            largura_original, altura_original = img.size
                            nova_altura = 60
                            nova_largura = int(largura_original * nova_altura / altura_original)
                            img_redimensionada = img.resize((nova_largura, nova_altura), Image.LANCZOS)

                            # Calcula o ponto de corte para cortar na largura para 70 pixels
                            largura_corte = 70
                            altura_corte = nova_altura
                            x1 = (nova_largura - largura_corte) // 2
                            y1 = 0
                            x2 = x1 + largura_corte
                            y2 = altura_corte

                            # Corta a imagem na largura para 70 pixels
                            img_cortada = img_redimensionada.crop((x1, y1, x2, y2))



                            data_criacao = datetime.strptime(det_prod['date_created'], "%Y-%m-%dT%H:%M:%S.%fZ").date()
                            t_vida = (datetime.now().date()-data_criacao).days



                            while True:
                                response = requests.get(det_prod['permalink'])

                                if response.status_code == 200:
                                    # Obtém o conteúdo HTML da página como uma string
                                    html_content = response.text
                                    break

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

                            txt_range_vendas = item.replace('Novo  |  +', '').replace(' vendidos', '').replace('mil', '000').replace('+', '').replace('Novo','').replace('Novo  |  ', '')

                            range_vendas = int(txt_range_vendas) if txt_range_vendas != "" else 0



                            with st.spinner(f"Carregando visitas do anúncio {det_prod['id']}"):
                                visitas = ml_api.ver_visitas_intervalo(det_prod['id'], 30, "day", f'{(datetime.now() - timedelta(days=1)).year}-{(datetime.now() - timedelta(days=1)).month}-{(datetime.now() - timedelta(days=1)).day}', limite=800)
                                
                                visitas_dia = []
                                print(len(visitas_dia))
                                for data in visitas:
                                    visitas_dia.append(data['total'])

                                v_media = round(sum(visitas_dia) / len(visitas_dia))

                            # Calcula a variação percentual entre os dias consecutivos
                            variacao_percentual = [(visitas_dia[i] - visitas_dia[i-1]) for i in range(1, len(visitas_dia))]

                            # Calcula a média da variação percentual
                            media_variacao_percentual = round((sum(variacao_percentual) / len(variacao_percentual))*100, 2)

                            prods.append(
                                {
                                    "imagem": url,
                                    "categorias": categ,
                                    "produtos": det_prod['id'],
                                    "range_vendas": range_vendas,
                                    "tempo_vida": t_vida,
                                    "m_visitas_diarias": v_media,
                                    "preco_venda": det_prod['price'],
                                    "tipo_anuncio": det_prod['listing_type_id'],
                                    "variacao_visitas": media_variacao_percentual,
                                    #"comissao": None,
                                    "titulo": titl,
                                    "link": det_prod['permalink'],
                                    "frete_gratis": det_prod['shipping']['free_shipping'],
                                    #"custo_frete": None,
                                    "adicionar": False,
                                }
                            )

                            indx = -1

                            st.session_state.prods_pesquisa = prods
                        else:
                            indx = prods_ids.index(prod['id'])

                        response = requests.get(prods[indx]['imagem'])
                        img = Image.open(BytesIO(response.content))

                        # Redimensiona a imagem para uma altura de 70 pixels mantendo a proporção
                        largura_original, altura_original = img.size
                        nova_altura = 60
                        nova_largura = int(largura_original * nova_altura / altura_original)
                        img_redimensionada = img.resize((nova_largura, nova_altura), Image.LANCZOS)

                        # Calcula o ponto de corte para cortar na largura para 70 pixels
                        largura_corte = 70
                        altura_corte = nova_altura
                        x1 = (nova_largura - largura_corte) // 2
                        y1 = 0
                        x2 = x1 + largura_corte
                        y2 = altura_corte

                        # Corta a imagem na largura para 70 pixels
                        img_cortada = img_redimensionada.crop((x1, y1, x2, y2))

                        imagem.image(img_cortada, width=70)

                        titulo.write("")
                        titulo.text(prods[indx]['titulo'])

                        tempo_vida.write("")
                        tempo_vida.text(prods[indx]['tempo_vida'])

                        r_vendas.write("")
                        r_vendas.text('+'+str(prods[indx]['range_vendas']) if prods[indx]['range_vendas'] > 0 else 'Indisponível')

                        m_venda_mes.write("")
                        m_venda_mes.text(round((prods[indx]['range_vendas']/prods[indx]['tempo_vida'])*30))

                        m_visitas_dia.write("")
                        m_visitas_dia.text(prods[indx]['tempo_vida'])

                        var_visitas.write("")
                        var_visitas.text(prods[indx]['variacao_visitas'])

                        adicionar.write("")
                        prods[indx]["adicionar"] = adicionar.toggle("", prods[indx]["adicionar"], key=f"tg{prods[indx]['produtos']}")






