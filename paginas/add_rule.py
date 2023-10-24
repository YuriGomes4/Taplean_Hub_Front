import streamlit as st
import services

def page():
    from .base import base

    base()

    product_id = st.session_state.produto['id']
    id_regra = ""

    st.title("Adicionar regra" if st.session_state.regra == "create" else "Editar regra")

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

    colunas = []
    operacoes = []

    if st.session_state.regra == "create":
        ref_id = product_id
        coluna_obj = ""
        operador = ""
        valor_obj = ""
        coluna_new = ""
        valor_new = ""
    else:
        id_regra = st.session_state.regra
        regra = services.produtos.get_regra(id_regra)


        inverted_colunas = {v: k for k, v in colunas_dict.items()}
        inverted_operacoes = {v: k for k, v in operacoes_dict.items()}


        ref_id = regra['ref_id_obj']
        coluna_obj = inverted_colunas[regra['coluna_obj']]
        operador = inverted_operacoes[regra['operador']]
        valor_obj = regra['valor_obj']
        coluna_new = inverted_colunas[regra['coluna_new']]
        valor_new = regra['valor_new']

    def controle_dados():
        #global valor_new
        #global valor_obj

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
                
            valor1_ver = ver_valor(valor_obj, "Campo analisado")
            valor2_ver = ver_valor(valor_new, "Campo a ser alterado")

            #if valor1_type == "num":
            #    valor_obj.replace(",", ".")
            #if valor2_type == "num":
            #    valor_new.replace(",", ".")
                
            if valor1_ver and valor2_ver:
                return True
                
            
            #return True
        else:
            st.toast("Nenhum campo pode estar vazio")

    itens_a_excluir = ["Faturamento total", "ID Categoria", "Taxa de venda", "Custo de frete grátis", "Vendas"]
    list_colunas_new = [item for item in colunas_dict.keys() if item not in itens_a_excluir]

    col1, col2 = st.columns(2)

    ref_id = col1.text_input("ID", value=ref_id, disabled=True)
    #st.text_input("Campo analisado", value=coluna_obj]),
    coluna_obj = col1.selectbox("Campo analisado", colunas_dict.keys(), index=list(colunas_dict.keys()).index(coluna_obj) if coluna_obj != "" else 0)
    #st.text_input("Analisador", value=operador]),
    operador = col1.selectbox("Analisador", operacoes_dict.keys(), index=list(operacoes_dict.keys()).index(operador) if operador != "" else 0)
    vo_col1, vo_col2 = col1.columns(2)
    valor_obj = vo_col1.text_input("Valor esperado", value=valor_obj)
    v_obj_ck = vo_col2.checkbox("Valor atual +", key="v_obj_ck")
    #st.text_input("Campo a ser alterado", value=coluna_new),
    coluna_new = col1.selectbox("Campo a ser alterado", list_colunas_new, index=list_colunas_new.index(coluna_new) if coluna_new != "" else 0)
    ve_col1, ve_col2 = col1.columns(2)
    valor_new = ve_col1.text_input("Valor a ser colocado", value=valor_new)
    v_new_ck = ve_col2.checkbox("Valor atual +", key="v_new_ck")

    produto = st.session_state.produto
    
    cor = "red"
    #st.markdown(f"##### Regra {cont}")
    st.markdown(f"""<p>Se o valor do campo <span style="color: {cor}">{coluna_obj}</span> do produto for <span style="color: {cor}">{operador}</span> a <span style="color: {cor}">{f"({produto[colunas_dict[coluna_obj]]}+{valor_obj})" if v_obj_ck else valor_obj}</span>, o campo <span style="color: {cor}">{coluna_new}</span> será alterado para <span style="color: {cor}">{f"({produto[colunas_dict[coluna_new]]}+{valor_new})" if v_new_ck else valor_new}</span></p>""", unsafe_allow_html=True)
    

    if st.button("Salvar", type='primary', use_container_width=True):
        if controle_dados():

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
                "ref_id_obj": ref_id,
                "tabela_obj": "produtos",
                "coluna_obj": colunas_dict[coluna_obj],
                "valor_obj": valor_obj,
                "operador": operacoes_dict[operador],
                "funcao": "alterar_produto",
                "ref_id_new": ref_id,
                "tabela_new": "produtos",
                "coluna_new": colunas_dict[coluna_new],
                "valor_new": valor_new,
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

    col2.markdown("#### Informações do produto")
    col2.write(f"MLB: {produto['id']}"),
    col2.write(f"Categoria: {produto['category_id']}"),
    col2.write(f"Custo: {produto['cost']}")
    #col2.write(f"Custo: {produto['cost']}"),
    col2.write(f"Preço de venda: {produto['price']}"),
    col2.write(f"Título: {produto['title']}"),
    col2.write(f"Tipo de anúncio: {produto['listing_type_id']}"),
    col2.write(f"Frete grátis: {free_shipping_text}"),
    col2.write(f"Custo de frete: {produto['shipping_free_cost']}"),
    col2.write(f"Taxas de venda: {produto['sale_fee']}"),
    col2.write(f"Líquido: R$ {liquido}"),
    col2.write(f"Vendas: {produto['sales']}"),