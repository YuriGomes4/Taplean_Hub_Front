import streamlit as st

#from services import produtos as sv_extrato
from services import login as sv_login
#from services import personal_prefs as sv_preferences
#from services import config as sv_config
import navigation
#from main import NavigationChange

#extratos = []

numero = "@@"

tela = st.empty()

#sv_extrato.parse_ofx_file_and_add_to_db("services/NU_3219096_01MAI2023_13MAI2023.ofx")

#transactions = sv_extrato.get_all()
#print(len(transactions))

def onclick_item(email, senha):
    #email = tela.controls[0].controls[1].controls[1].value
    #senha = tela.controls[0].controls[1].controls[2].value

    sv_login.login(email, senha)
    #navigation.ChangeScreen("01", e)
    #pass

def load():

    cont = tela.container()

    cont.write("# Login")
    
    email = cont.text_input("Email", value="yuri@example.com")
    senha = cont.text_input("Senha", value="123456", type="password")
    if cont.button("Entrar", type="primary", use_container_width=True, key="entrar"):
        sv_login.login(email, senha)

    sv_login.verify_access()

    return cont
