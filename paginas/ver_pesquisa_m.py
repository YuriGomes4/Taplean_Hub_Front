import streamlit as st
import pandas as pd

from services import ml_api

def page():
    from .base import base

    base()

    pesquisa = st.session_state.pesquisa_m

    st.title(pesquisa['nome'])

    pesq_tab, config_tab = st.tabs(["Pesquisa", "Configurações"])

    if pesquisa['tipo'] == "categoria":

        categorias = pesquisa['categorias'].split(',')
        produtos = pesquisa['produtos'].split(',')
        range_vendas = pesquisa['range_vendas'].split(',')
        tempo_vida = pesquisa['tempo_vida'].split(',')
        m_visitas_diarias = pesquisa['m_visitas_diarias'].split(',')
        preco_venda = pesquisa['preco_venda'].split(',')
        tipo_anuncio = pesquisa['tipo_anuncio'].split(',')
        taxa_fixa = pesquisa['taxa_fixa'].split(',')
        comissao = pesquisa['comissao'].split(',')
        titulo = pesquisa['titulo'].split('$@$')
        link = pesquisa['link'].split(',')
        frete_gratis = pesquisa['frete_gratis'].split(',')
        custo_frete = pesquisa['custo_frete'].split(',')

        data = [None] * len(produtos)

        cats = {}

        for cat in categorias:
            if cat not in cats:
                cat_json, cam_cat = ml_api.ver_categoria(cat)
                cats[cat] = cat_json['name']

        cat_abas = pesq_tab.tabs(cats.values())

        for cat in list(cats.keys()):

            for i in range(len(produtos)):

                if categorias[i] == cat:

                    media_mes_qnt = round((int(range_vendas[i])/int(tempo_vida[i]))*30)
                    media_mes_valor = media_mes_qnt*float(preco_venda[i])

                    imposto = 0*float(preco_venda[i])
                    embalagem = 0

                    liquido = float(preco_venda[i]) - float(comissao[i]) - float(custo_frete[i]) - imposto - float(taxa_fixa[i]) - embalagem

                    lucro_desejado = 0.20*float(preco_venda[i])

                    custo_sug = round(liquido - lucro_desejado, 2)

                    lucro = liquido - custo_sug

                    try:
                        per_custo = str(round((lucro/custo_sug)*100))+"%"
                    except: 
                        per_custo = 0

                    try:
                        per_venda = str(round((lucro/float(preco_venda[i]))*100))+"%"
                    except:
                        per_venda = 0

                    data[i] = {"Anúncio": link[i], "Titulo" : titulo[i], "Custo sugestão": custo_sug, "Média fat. mês": media_mes_valor, "Média qnt mês": media_mes_qnt, "Média visitas diárias": m_visitas_diarias[i], " ": " ", "Preço": preco_venda[i], "Tipo anúncio": ml_api.tipos_anuncios()[tipo_anuncio[i]], "Frete grátis": True if frete_gratis[i] == "true" else False, "Taxa fixa": taxa_fixa[i], "Comissão": comissao[i], "Imposto": imposto, "Frete": custo_frete[i], "Embalagem": embalagem, "Valor líquido": liquido, "Lucro": lucro, "% Custo": per_custo, "% Venda": per_venda}


            df = pd.DataFrame(data)

            cat_abas[list(cats.keys()).index(cat)].dataframe(df, hide_index=True, use_container_width=True, column_config={
                "Anúncio": st.column_config.LinkColumn(display_text="Ver anúncio")
            }
            )

    if st.button("Adicionar produtos a pesquisa de mercado", type='primary', use_container_width=True):
        if st.session_state.page != "53":
            st.session_state.prods_pesquisa = []
            st.session_state.page = "53"
            st.rerun()