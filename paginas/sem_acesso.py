from datetime import datetime, timedelta
import streamlit as st
from services import usuarios, conta

def page():
    from .base import base

    base()

    st.title("Pagamento")

    st.write("Realize o pagamento do seu plano para continuar usando o EleveCom")

    usuario = usuarios.ver_usuario()

    #st.write(f"Seu plano atual é **{usuario['conta']['assinatura']['nome']}**")
    st.write(" ")

    st.write(f"O valor do plano é **R$ {str(usuario['conta']['assinatura']['valor']).replace('.', ',')}**")

    tam_colunas = (1.2, 2.3, 2.3, 1)
    fields = ["Valor", 'Status', 'Data de vencimento', "Ação"]

    ind = 0
    for col in st.columns(tam_colunas):
        col.write(fields[ind])
        ind += 1
    
    pagamentos = conta.get().pagamentos_conta()

    for pagamento in pagamentos:

        if pagamento['status'] != "RECEIVED":

            valor, status, data, acao = st.columns(tam_colunas)
            vencData = datetime.strptime(pagamento['dueDate'], "%Y-%m-%d")

            if pagamento['status'] == "PENDING":

                dataLimite = vencData - timedelta(days=pagamento['discount']['dueDateLimitDays'])
                #print(dataLimite)
                if dataLimite >= datetime.now():
                    pagValor = pagamento['value']-(pagamento['value']*(pagamento['discount']['value']/100))
                else:
                    pagValor = pagamento['value']

                status.markdown(f'<span style="color: orange;">Pendente</span>', unsafe_allow_html=True)
            elif pagamento['status'] == "OVERDUE":
                diasVencido = (datetime.now() - vencData).days
                juros = ((pagamento['value']*(pagamento['interest']['value']/100))/30)*diasVencido
                multa = pagamento['value']*(pagamento['fine']['value']/100)
                pagValor = round(pagamento['value'] + multa + juros, 2)
                status.markdown(f'<span style="color: red;">Vencido</span>', unsafe_allow_html=True)
            valor.write("R$ " + str(pagValor))
            data.write(vencData.strftime("%d/%m/%Y"))
            acao.link_button('Pagar', pagamento['invoiceUrl'])


    