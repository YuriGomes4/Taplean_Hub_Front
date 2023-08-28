from flet import(
    Container,
    Row,
    Icon,
    icons,
    Column,
    Text,
    MainAxisAlignment,
    TextAlign,
    ListView,
    colors,
    TextField,
    FilledButton,
    Control,
)

from services import extrato as sv_extrato
from services import login as sv_login
from services import config as sv_config
import navigation

#extratos = []

#sv_extrato.parse_ofx_file_and_add_to_db("services/NU_3219096_01MAI2023_13MAI2023.ofx")

#transactions = sv_extrato.get_all()
#print(len(transactions))

def onclick_item(e):
    email = tela.controls[0].controls[1].controls[1].value
    senha = tela.controls[0].controls[1].controls[2].value

    sv_login.login(email, senha)
    #navigation.ChangeScreen("01", e)
    #pass

tela = Column(
    [
        Row(
            [
                Row(expand=True),
                Column(
                    [
                        Text(value="Login", size=50, width=250 ,text_align=TextAlign.CENTER),
                        TextField(hint_text="Email", width=250, value="yuri@example.com"),
                        TextField(hint_text="Password", width=250, password=True, can_reveal_password=True, value="123456"),
                        FilledButton(content=Row([Text(value="ENTRAR", size=40,text_align=TextAlign.CENTER, expand=True),]), width=250, on_click=onclick_item)
                    ],
                ),
                Row(expand=True),
            ]
        ),
    ],
    alignment=MainAxisAlignment.CENTER,
    horizontal_alignment=MainAxisAlignment.CENTER,
    expand=True,
    visible=True
)

def on_visible():
    sv_login.verify_access()
    pass

navigation.paginas.append(
    {
        'objeto': tela,
        'numero': '@@',
        'vis_event': on_visible,
        'titulo': f"{sv_config.get('versao')} - Login",
    }
)