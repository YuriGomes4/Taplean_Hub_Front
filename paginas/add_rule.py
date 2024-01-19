import streamlit as st
import services
from services import anuncio
from services import ml_api

def page():
    from .base import base

    base()

    product_id = st.session_state.produto['id']
    id_regra = ""

    st.title("Adicionar regra" if st.session_state.regra == "create" else "Editar regra")

    tipos = ml_api.tipos_anuncios()

    logistica = {
        "xd_drop_off": "Mercado Envios Agência",
        "cross_docking": "Mercado Envios Coleta",
        "self_service": "Mercado Envios Flex",
        "fulfillment": "Mercado Envios Fulfillment",
        "drop_off": "Mercado Envios Agência",
    }

    colunas_dict_anuncio = {
        "Preço" : "preco",
        "Posição" : "posicao",
        "Logística" : "logistica",
        "Status" : "status",
        "Saúde" : "saude",
        "Tipo" : "tipo",
        "Desconto" : "desconto",
        "Frete grátis" : "frete_gratis",
    }

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
    }

    operacoes_dict = {
        "Maior ou igual" : ">=",
        "Maior" : ">",
        "Menor ou igual" : "<=",
        "Menor" : "<",
        "Igual" : "==",
        "Diferente" : "!=",
    }

    colunas_opcoes = {
        "preco": {
            "name": "Preço",
            "input": "float_input",
            "relative_value": True,
        },
        "posicao": {
            "name": "Posição",
            "input": "int_input",
            "relative_value": True,
        },
        "logistica": {
            "name": "Logística",
            "input": "selectbox",
            "relative_value": False,
            "options": logistica.values()
        },
        "status": {
            "name": "Status",
            "input": "selectbox",
            "relative_value": False,
            "options": ["Ativo", "Pausado"]
        },
        "saude": {
            "name": "Saúde",
            "input": "int_input",
            "relative_value": True,
        },
        "tipo": {
            "name": "Tipo",
            "input": "selectbox",
            "relative_value": False,
            "options": tipos.values()
        },
        "desconto": {
            "name": "Desconto",
            "input": "float_input",
            "relative_value": True,
        },
        "frete_gratis": {
            "name": "Frete grátis",
            "input": "selectbox",
            "relative_value": False,
            "options": ["Sim", "Não"]
        },
        "category_id": {
            "name": "ID Categoria",
            "input": "text_input",
            "relative_value": False,
        },
        "cost": {
            "name": "Custo",
            "input": "float_input",
            "relative_value": True,
        },
        "price": {
            "name": "Preço",
            "input": "float_input",
            "relative_value": True,
        },
        "title": {
            "name": "Título",
            "input": "text_input",
            "relative_value": False,
        },
        "listing_type_id": {
            "name": "Tipo",
            "input": "selectbox",
            "relative_value": False,
            "options": tipos.values()
        },
        "free_shipping": {
            "name": "Frete grátis",
            "input": "selectbox",
            "relative_value": False,
            "options": ["Sim", "Não"]
        },
        "shipping_free_cost": {
            "name": "Custo de frete grátis",
            "input": "float_input",
            "relative_value": True,
        },
        "sale_fee": {
            "name": "Taxa de venda",
            "input": "float_input",
            "relative_value": True,
        },
        "sales": {
            "name": "Vendas",
            "input": "int_input",
            "relative_value": True,
        },
        "invoicing": {
            "name": "Faturamento",
            "input": "float_input",
            "relative_value": True,
        },
    }

    colunas = []
    operacoes = []

    if st.session_state.regra == "create":
        tipo_regra = "Customizada"
        ref_id = product_id
        coluna_obj = ""
        operador = ""
        valor_obj = ""
        coluna_new = ""
        valor_new = ""
        valor_max = 0.0
        valor_min = 0.0
        valor_dif = 0.0
    else:
        id_regra = st.session_state.regra
        regra = services.produtos.get_regra(id_regra)

        inverted_colunas = {v: k for k, v in colunas_dict.items()}
        inverted_colunas_anuncio = {v: k for k, v in colunas_dict_anuncio.items()}
        inverted_operacoes = {v: k for k, v in operacoes_dict.items()}

        if regra['funcao'] != "seguir_preco_anuncio":
            tipo_regra = "Customizada"

            ref_id = regra['ref_id_obj']
            coluna_obj = inverted_colunas[regra['coluna_obj']] if regra['tabela_obj'] == "produtos" else inverted_colunas_anuncio[regra['coluna_obj']]
            operador = inverted_operacoes[regra['operador']]
            valor_obj = regra['valor_obj']
            coluna_new = inverted_colunas[regra['coluna_new']]
            valor_new = regra['valor_new']
        
        else:
            ref_id = regra['ref_id_obj']
            tipo_regra = "Seguir preço de um anúncio"
            oper_dict = {
                ">": "Manter acima",
                "<": "Manter abaixo",
            }
            operador = regra['operador']
            valor_split = regra['valor_new'].split("/")
            valor_min = float(valor_split[0])
            valor_dif = float(valor_split[1])
            valor_max = float(valor_split[2])

    def controle_dados():
        #global valor_new
        #global valor_obj

        if tipo_regra == "Customizada":

            if ref_id != "" and coluna_obj != "" and operador != "" and valor_obj != "" and coluna_new != "" and valor_new != "":


                valor1_ver = False
                valor2_ver = False

                valor1_type = ""
                valor2_type = ""


                def ver_valor(texto, nome):

                    e_texto = False
                    
                    espc = 0
                    virg = False
                    for caractere in texto:
                        if caractere.isdigit():
                            pass
                            #return True
                        elif caractere == '.':
                            espc += 1
                            #return True
                        elif caractere == ',':
                            espc += 1
                            virg = True
                            #return True
                        else:
                            e_texto = True
                        
                    if not(e_texto):
                        if espc <= 1:
                            if texto[0].isdigit():
                                if virg:
                                    st.toast(f"{nome} precisa ser um '.' para separar as casas decimais, e não uma ','")
                                else:
                                    return True
                            else:
                                st.toast(f"{nome} contém um número inválido.")
                        else:
                            st.toast(f"{nome} só pode ter apenas um . ou , para números.")
                    else:
                        return True
                    
                valor1_ver = ver_valor(str(valor_obj), "Campo analisado")
                valor2_ver = ver_valor(str(valor_new), "Campo a ser alterado")

                #if valor1_type == "num":
                #    valor_obj.replace(",", ".")
                #if valor2_type == "num":
                #    valor_new.replace(",", ".")
                    
                if valor1_ver and valor2_ver:
                    return True
                    
                
                #return True
            else:
                st.toast("Nenhum campo pode estar vazio")
        else:
            if ref_id != "" and operador != "" and valor_min != "" and valor_dif != "" and valor_max != "":
                return True
            else:
                st.toast("Nenhum campo pode estar vazio")

    itens_a_excluir = ["Faturamento total", "ID Categoria", "Taxa de venda", "Custo de frete grátis", "Vendas"]
    list_colunas_new = [item for item in colunas_dict.keys() if item not in itens_a_excluir]

    col1, col2 = st.columns(2)

    tipo_regra = col1.selectbox("Tipo de regra", ["Customizada", "Seguir preço de um anúncio"], index=["Customizada", "Seguir preço de um anúncio"].index(tipo_regra))

    if tipo_regra == "Customizada":
        tipo = col1.selectbox("Analisar", ["O mesmo produto","Um anúncio seguido"], index=["produtos", "anuncio"].index(regra['tabela_obj']) if st.session_state.regra != "create" else 0)
    else:
        tipo = "Um anúncio seguido"
    
    #ref_id = col1.text_input("ID", value=ref_id, disabled=True if tipo == "O mesmo produto" else False)
    if tipo == "O mesmo produto":
        opcoes = [product_id]
        n_editar = True
    else:
        anuns = anuncio.ver_anuncios()
        anuns_bd = {}
        ops_dict = {}
        opcoes = []
        for anun in anuns:
            opcoes.append(anun['titulo'])
            ops_dict[anun['titulo']] = anun['id']
            anuns_bd[anun['id']] = anun
        n_editar = False
        colunas_dict_obj = {
            "Preço" : "preco",
            "Posição" : "posicao",
            "Logística" : "logistica",
            "Status" : "status",
            "Saúde" : "saude",
            "Tipo" : "tipo",
            "Desconto" : "desconto",
            "Frete grátis" : "frete_gratis",
        }

    ref_id = col1.selectbox("ID" if tipo == "O mesmo produto" else "Anúncio", opcoes, disabled=n_editar, index=0 if tipo == "O mesmo produto" else (opcoes.index(anuns_bd[ref_id]['titulo']) if ref_id in anuns_bd.keys() else 0))
    #st.text_input("Campo analisado", value=coluna_obj]),
    if tipo_regra == "Customizada":
        coluna_obj = col1.selectbox("Campo analisado", colunas_dict.keys() if tipo == "O mesmo produto" else colunas_dict_obj.keys(), index=list(colunas_dict.keys() if regra['tabela_obj'] == "produtos" else colunas_dict_anuncio.keys()).index(coluna_obj) if coluna_obj != "" else 0)
    #st.text_input("Analisador", value=operador]),
    operador = col1.selectbox("Analisador", operacoes_dict.keys() if tipo_regra == "Customizada" else ["Manter acima", "Manter abaixo"], index=(list(operacoes_dict.keys()).index(operador) if tipo_regra == "Customizada" else ["Manter acima", "Manter abaixo"].index(oper_dict[operador])) if operador != "" else 0)
    
    if tipo_regra == "Customizada":
        campo_v_obj = colunas_opcoes[colunas_dict[coluna_obj] if tipo == "O mesmo produto" else colunas_dict_obj[coluna_obj]]
    
        if campo_v_obj['relative_value']:
            vo_col1, vo_col2 = col1.columns(2)
        else:
            vo_col1 = col1
        
        match campo_v_obj['input']:
            case "int_input":
                valor_obj = vo_col1.number_input(campo_v_obj['name']+" analisado", value=int(0 if valor_obj == '' else float(valor_obj)), step=0, key="obj")
            case "float_input":
                valor_obj = vo_col1.number_input(campo_v_obj['name']+" analisado", value=float(0 if valor_obj == '' else valor_obj), key="obj")
            case "selectbox":
                valor_obj = vo_col1.selectbox(campo_v_obj['name']+" analisado", campo_v_obj['options'], key="obj")
            case "text_input":
                valor_obj = vo_col1.text_input(campo_v_obj['name']+" analisado", value=valor_obj, key="obj")
        
        if campo_v_obj['relative_value']:
            vo_col2.write("")
            vo_col2.write("")
            v_obj_ck = vo_col2.checkbox("Valor atual +", key="v_obj_ck")
        else:
            v_obj_ck = 0
        
        #st.text_input("Campo a ser alterado", value=coluna_new),
        coluna_new = col1.selectbox("Campo a ser alterado", list_colunas_new, index=list_colunas_new.index(coluna_new) if coluna_new != "" else 0)
        
        campo_v_new = colunas_opcoes[colunas_dict[coluna_new]]

        if campo_v_new['relative_value']:
            ve_col1, ve_col2 = col1.columns(2)
        else:
            ve_col1 = col1
        
        #valor_new = ve_col1.text_input("Valor a ser colocado", value=valor_new)

        match campo_v_new['input']:
            case "int_input":
                valor_new = ve_col1.number_input(campo_v_new['name']+" analisado", value=int(0 if valor_new == '' else valor_new), step=0, key="new")
            case "float_input":
                valor_new = ve_col1.number_input(campo_v_new['name']+" analisado", value=float(0 if valor_new == '' else valor_new), key="new")
            case "selectbox":
                valor_new = ve_col1.selectbox(campo_v_new['name']+" analisado", campo_v_new['options'], key="new")
            case "text_input":
                valor_new = ve_col1.text_input(campo_v_new['name']+" analisado", value=valor_new, key="new")

        if campo_v_new['relative_value']:
            ve_col2.write("")
            ve_col2.write("")
            v_new_ck = ve_col2.checkbox("Valor atual +", key="v_new_ck")
        else:
            v_new_ck = 0

    else:
        valor_max = col1.number_input("Valor máximo", value=valor_max, key="valormax", min_value=0.0)
        valor_min = col1.number_input("Valor mínimo", value=valor_min, key="valormin", min_value=0.0)
        valor_dif = col1.number_input("Valor de diferença", value=valor_dif, key="valordif", min_value=0.0)

    produto = st.session_state.produto
    
    cor = "red"
    #st.markdown(f"##### Regra {cont}")
    if tipo_regra == "Customizada":
        st.markdown(f"""<p>Se o valor do campo <span style="color: {cor}">{coluna_obj}</span> do {"produto" if tipo == "O mesmo produto" else "anúncio"} for <span style="color: {cor}">{operador}</span> a <span style="color: {cor}">{f"({produto[colunas_dict[coluna_obj]]}+{valor_obj})" if v_obj_ck else valor_obj}</span>, o campo <span style="color: {cor}">{coluna_new}</span> {"" if tipo == "O mesmo produto" else "do produto"} será alterado para <span style="color: {cor}">{f"({produto[colunas_dict[coluna_new]]}+{valor_new})" if v_new_ck else valor_new}</span></p>""", unsafe_allow_html=True)
    else:
        st.markdown(f"""<p>Se o <span style="color: {cor}">preço</span> do {"produto" if tipo == "O mesmo produto" else "anúncio"} for <span style="color: {cor}">{"Menor" if operador == "Manter abaixo" else "Maior"}</span> que o <span style="color: {cor}">preço</span> do produto, o <span style="color: {cor}">preço</span> {"" if tipo == "O mesmo produto" else "do produto"} será alterado para <span style="color: {cor}">R$ {str(valor_dif).replace(".", ",")} {"mais barato" if operador == "Manter abaixo" else "mais caro"}</span> do que o preço do anúncio</p>""", unsafe_allow_html=True)


    if st.button("Salvar", type='primary', use_container_width=True):
        if controle_dados():

            if tipo_regra == "Customizada":
                if v_obj_ck:
                    e_texto = False
                    for carac in str(valor_obj):
                        if carac.isdigit():
                            pass
                            #return True
                        elif carac == '.':
                            pass
                            #return True
                        elif carac == ',':
                            pass
                            #return True
                        else:
                            e_texto = True

                    if not(e_texto):
                        valor_obj = float(produto[colunas_dict[coluna_obj]])+float(valor_obj)
                    else:
                        valor_obj = produto[colunas_dict[coluna_obj]]+valor_obj


                if v_new_ck:
                    e_texto = False
                    for carac in str(valor_new):
                        if carac.isdigit():
                            pass
                            #return True
                        elif carac == '.':
                            pass
                            #return True
                        elif carac == ',':
                            pass
                            #return True
                        else:
                            e_texto = True

                    if not(e_texto):
                        valor_new = float(produto[colunas_dict[coluna_new]])+float(valor_new)
                    else:
                        valor_new = produto[colunas_dict[coluna_new]]+valor_new

                dict_regra = {
                    "ref_id_obj": product_id if tipo == "O mesmo produto" else ops_dict[ref_id],
                    "tabela_obj": "produtos" if tipo == "O mesmo produto" else "anuncio",
                    "coluna_obj": colunas_dict[coluna_obj] if tipo == "O mesmo produto" else colunas_dict_obj[coluna_obj],
                    "valor_obj": valor_obj,
                    "operador": operacoes_dict[operador],
                    "funcao": "alterar_produto",
                    "ref_id_new": product_id,
                    "tabela_new": "produtos",
                    "coluna_new": colunas_dict[coluna_new],
                    "valor_new": valor_new,
                }
            else:
                dict_regra = {
                    "ref_id_obj": product_id if tipo == "O mesmo produto" else ops_dict[ref_id],
                    "tabela_obj": "produtos" if tipo == "O mesmo produto" else "anuncio",
                    "coluna_obj": "preco",
                    "valor_obj": "comparar_precos",
                    "operador": "<" if operador == "Manter abaixo" else ">",
                    "funcao": "seguir_preco_anuncio",
                    "ref_id_new": product_id,
                    "tabela_new": "produtos",
                    "coluna_new": "price",
                    "valor_new": str(valor_min)+"/"+str(valor_dif)+"/"+str(valor_max),
                }

            if st.session_state.regra == "create":
                services.produtos.add_regra(dict_regra)
            else:
                services.produtos.update_regra(id_regra, dict_regra)

            #navigation.addit = product_id
            if st.session_state.page != "11":
                st.session_state.page = "11"
                st.rerun()

    if st.button("Cancelar", type='secondary', use_container_width=True):
        if st.session_state.page != "11":
            st.session_state.page = "11"
            st.rerun()


    free_shipping = produto['free_shipping']
    if int(free_shipping) == 1:
        free_shipping_text = "Sim"
    else: 
        free_shipping_text = "Não"

    liquido = round(float(produto['price']) - float(produto['shipping_free_cost']) - float(produto['sale_fee']) - float(produto['cost']), 2)

    if tipo == "O mesmo produto":
        info_tabs = col2.tabs(["Produto"])
    else:
        info_tabs = col2.tabs(["Produto", "Anúncio"])

        anun_s = anuns_bd[ops_dict[ref_id]]

        info_tabs[1].markdown("#### Informações do anúncio")
        info_tabs[1].write(f"ID: {anun_s['id'].split('$')[1]}")
        #info_tabs[1].write(f"Categoria: {produto['category_id']}")
        #info_tabs[1].write(f"Custo: {produto['cost']}")
        info_tabs[1].write(f"Título: {anun_s['titulo']}")
        info_tabs[1].write(f"Desconto: {round(anun_s['desconto'], 2)}")
        styled_text = f'<span>Status: </span><span style="color: {("green" if anun_s["status"] == "active" else "orange")};">{("Ativo" if anun_s["status"] == "active" else "Pausado")}</span>'
        info_tabs[1].markdown(styled_text, unsafe_allow_html=True)
        info_tabs[1].write(f"Preço de venda: {anun_s['preco']}")
        info_tabs[1].write(f"Tipo de anúncio: {tipos[anun_s['tipo']]}")
        info_tabs[1].write(f"Frete grátis: {'Sim' if anun_s['frete_gratis'] else 'Não'}")
        info_tabs[1].write(f'Posição do anúncio: {str(anun_s["posicao"])+"º" if anun_s["posicao"] > 0 else "Não encontrado"} em "{anun_s["termo"]}"'),
        info_tabs[1].write(f"Logística: {logistica[anun_s['logistica']]}")
        saude = anun_s["saude"] if str(anun_s["saude"]) != "None" else 0
        styled_text = f'<span>Saúde do anúncio: </span><span style="color: {("green" if saude > 0 else "red")};">{str(int(saude*100))+"%" if saude > 0 else "Indisponível"}</span>'
        info_tabs[1].markdown(styled_text, unsafe_allow_html=True)
        #info_tabs[1].write(f"Taxas de venda: {produto['sale_fee']}"),
        #info_tabs[1].write(f"Líquido: R$ {liquido}"),
        #info_tabs[1].write(f"Vendas: {produto['sales']}"),

    info_tabs[0].markdown("#### Informações do produto")
    info_tabs[0].write(f"MLB: {produto['id']}"),
    info_tabs[0].write(f"Categoria: {produto['category_id']}"),
    info_tabs[0].write(f"Custo: {produto['cost']}")
    #info_tabs[0].write(f"Custo: {produto['cost']}"),
    info_tabs[0].write(f"Preço de venda: {produto['price']}"),
    info_tabs[0].write(f"Título: {produto['title']}"),
    info_tabs[0].write(f"Tipo de anúncio: {tipos[produto['listing_type_id']]}"),
    info_tabs[0].write(f"Frete grátis: {free_shipping_text}"),
    info_tabs[0].write(f"Custo de frete: {produto['shipping_free_cost']}"),
    info_tabs[0].write(f"Taxas de venda: {produto['sale_fee']}"),
    info_tabs[0].write(f"Líquido: R$ {liquido}"),
    info_tabs[0].write(f"Vendas: {produto['sales']}"),