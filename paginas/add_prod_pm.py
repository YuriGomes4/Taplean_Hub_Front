from datetime import datetime, timedelta
import random
import requests
import streamlit as st
import pandas as pd
from PIL import Image
from io import BytesIO

from services import ml_api, pesquisa_m

def page():
    from .base import base

    base()

    pesquisa = st.session_state.pesquisa_m
    produtos = []

    st.title(f"Adicionar produtos a pesquisa de mercado {pesquisa['nome']}")

    if pesquisa['tipo'] == "categoria":
        #categorias = pesquisa['categorias'].split(',')

        opt_proc_prod = ["Selecione", "Mais vendido de uma categoria", "Pesquisando", "Por link do anúncio"]

        sb_proc_prod = st.selectbox("Como você quer adicionar so produtos?", opt_proc_prod, key="sb_proc_prod")
        if st.session_state.tipo_pesquisa != sb_proc_prod:
            st.session_state.tipo_pesquisa = sb_proc_prod
            st.session_state.prods_pesquisa = []

        final = False

        match sb_proc_prod:
            case "Mais vendido de uma categoria":
                cat_list, cat_list_r = ml_api.categorias()

                cats = [[None, cat_list_r]]

                for cat in cats:
                
                    try:
                        opts_cat = list(cat[1].keys())
                    except:
                        opts_cat = []
                    cat[0] = st.selectbox("Escolha a categoria", (["Selecione", "Pare aqui"] if len(cats) > 1 else ["Selecione"])+(opts_cat.remove("Pare aqui") if "Pare aqui" in opts_cat else opts_cat))

                    if cat[0] != "Selecione":

                            
                        catA_childs, catA_childs_r = ml_api.filhos_categoria(cat[1][cat[0]])
                        if len(catA_childs_r.keys()) > 0:
                            catA_childs_r["Pare aqui"] = cat[1][cat[0]]

                        if len(catA_childs_r) > 0 and cat[0] != "Pare aqui":

                            cats.append([None, catA_childs_r])
                        else:
                            final = True

                if final:

                    categ = cats[-1][1][cats[-1][0]]
                    produtos = ml_api.mais_vendidos(pesquisa['id'], categ)['content']

            case "Pesquisando":
                termo = st.text_input("Pesquise o seu produto como se fosse no Mercado Livre")

                if termo != "":
                    produtos = ml_api.pesquisar(termo)
                    final = True

            case "Por link do anúncio":
                for prod in st.session_state.prods_pesquisa:
                    produtos.append({'id': prod['produtos']})

                emp = st.empty()
                link_anuncio = emp.text_input("Cole o link do anúncio aqui", placeholder="https://produto.mercadolivre.com.br/MLB-2222222222-titulo-do-produto-_JM", key="link_anuncio")
                if link_anuncio != "":
                    try:
                        response = requests.get(link_anuncio)

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

                            if {'id': mlb} not in produtos:
                                produtos.append({'id': mlb})
                            else:
                                st.toast("Este produto já esta na lista")
                            final = True
                        else:
                            st.toast("Cole um link válido")
                    except:
                        st.toast("Cole um link válido")

                else:
                    if len(produtos) > 0:
                        final = True



        if final:

            if st.button("Adicionar produtos escolhidos", type='primary', use_container_width=True):
                pesquisa_m.adc_prod_pesquisas(pesquisa['id'], st.session_state.prods_pesquisa)
                if st.session_state.page != "52":
                    st.session_state.pesquisa_m = pesquisa_m.ver_pesquisas(pesquisa['id'])
                    st.session_state.page = "52"
                    st.rerun()

            gap = (0.3,0.6,0.9,0.55,0.6,0.6,0.6,0.6,0.7,0.4)

            fields = ["Ver", "Imagem", "Titulo", "Preço venda", "Tempo de vida", "Range vendas", "Vendas mês", "Visitas diarias", "Variação de visitas", ""]


            cols = st.columns(gap)

            for col, field_name in zip(cols, fields):
                # header
                col.write(field_name)


            if "prods_pesquisa" in st.session_state:
                prods = st.session_state.prods_pesquisa
            else:
                prods = []

            prods_ids = []

            for prod in prods:
                if prod['produtos'] not in prods_ids:
                    prods_ids.append(prod['produtos'])

            for prod in produtos:
                    
                ver, imagem, titulo, preco_v, tempo_vida, r_vendas, m_venda_mes, m_visitas_dia, var_visitas, adicionar = st.columns(gap)

                try:

                    det_prod = ml_api.ver_anuncio(prod['id'])

                    if det_prod['catalog_listing'] == False:

                        if prod['id'] not in prods_ids:


                            link = det_prod['permalink']

                            titl = det_prod['title']

                            preco = det_prod['price']

                            # URL da imagem
                            url = det_prod["pictures"][0]["secure_url"]

                            data_criacao = datetime.strptime(det_prod['date_created'], "%Y-%m-%dT%H:%M:%S.%fZ").date()
                            t_vida = (datetime.now().date()-data_criacao).days

                            while True:
                                response = requests.get(link)

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
                                visitas = ml_api.ver_visitas_intervalo(det_prod['id'], 30, "day", f'{(datetime.now() - timedelta(days=1)).year}-{(datetime.now() - timedelta(days=1)).month}-{(datetime.now() - timedelta(days=1)).day}')
                                
                                visitas_dia = []
                                for data in visitas:
                                    visitas_dia.append(data['total'])
                                #print(len(visitas_dia))

                                v_media = round((sum(visitas_dia) / len(visitas_dia)))

                            # Calcula a variação percentual entre os dias consecutivos
                            variacao_percentual = [(visitas_dia[i] - visitas_dia[i-1]) if (visitas_dia[i] - visitas_dia[i-1]) > 0 else (visitas_dia[i] - visitas_dia[i-1])*-1 for i in range(1, len(visitas_dia))]

                            # Calcula a média da variação percentual
                            media_variacao_percentual = round((sum(variacao_percentual) / len(variacao_percentual)), 2)

                            try:
                                pesq_prods = pesquisa['produtos'].split(',')
                            except:
                                pesq_prods = []

                            prods.append(
                                {
                                    "ja_tem": False if det_prod['id'] not in pesq_prods else True,
                                    "imagem": url,
                                    "categorias": det_prod['category_id'],
                                    "produtos": det_prod['id'],
                                    "range_vendas": range_vendas,
                                    "tempo_vida": t_vida,
                                    "m_visitas_diarias": v_media,
                                    "preco_venda": preco,
                                    "tipo_anuncio": det_prod['listing_type_id'],
                                    "variacao_visitas": str(round((media_variacao_percentual/v_media)*100, 2))+"%",
                                    #"comissao": None,
                                    "titulo": titl,
                                    "link": link,
                                    "frete_gratis": det_prod['shipping']['free_shipping'],
                                    #"custo_frete": None,
                                    "adicionar": False if det_prod['id'] not in pesq_prods else True,
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

                        ver.write("")
                        ver.write(f"""<a href="{prods[indx]['link']}">Ver</a>""", unsafe_allow_html=True)

                        imagem.image(img_cortada, width=70)

                        titulo.write("")
                        titulo.text(prods[indx]['titulo'])

                        preco_v.write("")
                        preco_v.text(prods[indx]['preco_venda'])

                        tempo_vida.write("")
                        tempo_vida.text(prods[indx]['tempo_vida'])

                        r_vendas.write("")
                        r_vendas.text('+'+str(prods[indx]['range_vendas']) if prods[indx]['range_vendas'] > 0 else 'Indisponível')

                        m_venda_mes.write("")
                        m_venda_mes.text(round((prods[indx]['range_vendas']/prods[indx]['tempo_vida'])*30))

                        m_visitas_dia.write("")
                        m_visitas_dia.text(prods[indx]['m_visitas_diarias'])

                        var_visitas.write("")
                        var_visitas.text(prods[indx]['variacao_visitas'])

                        adicionar.write("")
                        prods[indx]["adicionar"] = adicionar.toggle("a", prods[indx]["adicionar"], label_visibility='hidden', disabled=prods[indx]['ja_tem'], key=f"tg{prods[indx]['produtos']}")

                    else:
                        st.text(f"Anúncio não será mostrado por ser de catálogo - {prod['id']}")
                
                except:
                    st.text(f"Anúncio não será mostrado por ser de catálogo - {prod['id']}")






