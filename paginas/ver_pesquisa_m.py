import streamlit as st
import pandas as pd

from services import ml_api, pesquisa_m

def page():
    from .base import base

    base()

    pesquisa = st.session_state.pesquisa_m

    st.title(pesquisa['nome'])

    pesq_tab, config_tab = st.tabs(["Pesquisa", "Configurações"])

    #try:

    if pesquisa['tipo'] == "categoria":

        if str(pesquisa['produtos']).__contains__(","):
            produtos = pesquisa['produtos'].split(',')
            categorias = pesquisa['categorias'].split(',')
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
        elif pesquisa['produtos'] != "" and pesquisa['produtos'] != "None" and pesquisa['produtos'] != None:
            produtos = [pesquisa['produtos']]
            categorias = [pesquisa['categorias']]
            range_vendas = [pesquisa['range_vendas']]
            tempo_vida = [pesquisa['tempo_vida']]
            m_visitas_diarias = [pesquisa['m_visitas_diarias']]
            preco_venda = [pesquisa['preco_venda']]
            tipo_anuncio = [pesquisa['tipo_anuncio']]
            taxa_fixa = [pesquisa['taxa_fixa']]
            comissao = [pesquisa['comissao']]
            titulo = [pesquisa['titulo']]
            link = [pesquisa['link']]
            frete_gratis = [pesquisa['frete_gratis']]
            custo_frete = [pesquisa['custo_frete']]
        else:
            produtos = []

        if len(produtos) > 0:

            cats = {}

            for cat in categorias:
                if cat not in cats:
                    cat_json, cam_cat = ml_api.ver_categoria(cat)
                    cats[cat] = cat_json['name']

            cat_abas = pesq_tab.tabs(cats.values())

            for cat in list(cats.keys()):

                data = [None] * len(produtos)

                for i in range(len(produtos)):

                    if categorias[i] == cat:

                        media_mes_qnt = round((int(range_vendas[i])/int(tempo_vida[i]))*30)
                        media_mes_valor = media_mes_qnt*float(preco_venda[i])

                        imposto = round(float(preco_venda[i])*(pesquisa['configuracoes']['imposto']/100), 2)+round(pesquisa['configuracoes']['frete_medio']*(pesquisa['configuracoes']['imposto']/100), 2)
                        embalagem = pesquisa['configuracoes']['embalagem']

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

                while True:
                    if None in data:
                        data.remove(None)
                    else:
                        break

                df = pd.DataFrame(data)

                cat_abas[list(cats.keys()).index(cat)].dataframe(df, hide_index=True, use_container_width=True, column_config={
                    "Anúncio": st.column_config.LinkColumn(display_text="Ver anúncio")
                }
                )

        else:
            pesq_tab.write("Nenhum produto na pesquisa")


    if pesq_tab.button("Adicionar produtos a pesquisa de mercado", type='primary', use_container_width=True):
        if st.session_state.page != "53":
            st.session_state.prods_pesquisa = []
            st.session_state.tipo_pesquisa = ""
            st.session_state.page = "53"
            st.rerun()

    pesquisa_att = pesquisa_m.ver_pesquisas(pesquisa['id'])

    imposto_medio = config_tab.number_input("Imposto médio", value=float(pesquisa_att['configuracoes']['imposto']), step=0.10, key="imposto medio")
    if imposto_medio != pesquisa_att['configuracoes']['imposto']:
        pesquisa_att['configuracoes']['imposto'] = round(imposto_medio, 2)
        #st.session_state.pesquisa_m = pesquisa
        pesquisa_m.alterar_pesquisa(pesquisa['id'], {"configuracoes": pesquisa_att['configuracoes']})
        pesquisa = pesquisa_att

    custo_embalagem = config_tab.number_input("Custo de embalagem", value=float(pesquisa_att['configuracoes']['embalagem']), step=0.10, key="embalagem")
    if custo_embalagem != pesquisa_att['configuracoes']['embalagem']:
        pesquisa_att['configuracoes']['embalagem'] = round(custo_embalagem, 2)
        #st.session_state.pesquisa_m = pesquisa
        pesquisa_m.alterar_pesquisa(pesquisa['id'], {"configuracoes": pesquisa_att['configuracoes']})
        pesquisa = pesquisa_att

    frete_medio = config_tab.number_input("Frete médio", value=float(pesquisa_att['configuracoes']['frete_medio']), step=0.10, key="Frete medio")
    config_tab.write(f"Será adicionado {round(pesquisa['configuracoes']['frete_medio']*(pesquisa['configuracoes']['imposto']/100), 2)} ao imposto na tabela")
    if frete_medio != pesquisa_att['configuracoes']['frete_medio']:
        pesquisa_att['configuracoes']['frete_medio'] = round(frete_medio, 2)
        #st.session_state.pesquisa_m = pesquisa
        pesquisa_m.alterar_pesquisa(pesquisa['id'], {"configuracoes": pesquisa_att['configuracoes']})
        pesquisa = pesquisa_att