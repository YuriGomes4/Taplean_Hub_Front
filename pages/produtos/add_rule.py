from flet import(
    Column,
    Text,
    TextField,
    KeyboardType,
    Row,
    Divider,
    Icon,
    icons,
    Container,
    ListView,
    margin,
    IconButton,
    FilledTonalButton,
)

import navigation
import services

addit = ""
product_id = ""
id_regra = ""

ref_id = Text()
coluna_obj = TextField()
operador = TextField()
valor_obj = TextField()
coluna_new = TextField()
valor_new = TextField()

def salvar_regra(e):
    global addit
    global id_regra
    global product_id

    global ref_id
    global coluna_obj
    global operador
    global valor_obj
    global coluna_new
    global valor_new

    if ref_id != "" and coluna_obj != "" and operador != "" and valor_obj != "" and coluna_new != "" and valor_new != "":
            
        dict_regra = {
            "ref_id_obj": ref_id.value,
            "tabela_obj": "produtos",
            "coluna_obj": coluna_obj.value,
            "valor_obj": valor_obj.value,
            "operador": operador.value,
            "funcao": "alterar_produto",
            "ref_id_new": ref_id.value,
            "tabela_new": "produtos",
            "coluna_new": coluna_new.value,
            "valor_new": valor_new.value,
        }

        if addit == "create":
            services.produtos.add_regra(dict_regra)
        else:
            services.produtos.update_regra(id_regra, dict_regra)

        navigation.addit = product_id
        navigation.BackScreen(e)

    else:
        navigation.notify("Nenhum campo pode estar vazio")

def cancelar(e):
    global product_id
    navigation.addit = product_id
    navigation.BackScreen(e)


tela = Column(
    [
        Row([Text(f"ID:"), ref_id]),
        Row([Text(f"Campo analisado:"), coluna_obj]),
        Row([Text(f"Analisador:"), operador]),
        Row([Text(f"Valor esperado:"), valor_obj]),
        Row([Text(f"Campo a ser alterado:"), coluna_new]),
        Row([Text(f"Valor a ser colocado:"), valor_new]),
        Row([
            FilledTonalButton("Salvar", on_click=salvar_regra),
            FilledTonalButton("Cancelar", on_click=cancelar),
        ]),
    ],
    expand=True,
    visible=False
)


def on_visible():
    global tela
    global addit
    global id_regra
    global product_id

    global ref_id
    global coluna_obj
    global operador
    global valor_obj
    global coluna_new
    global valor_new

    product_id = str(navigation.addit).split('@@')[0]
    addit = str(navigation.addit).split('@@')[1]

    if addit == "create":
        ref_id.value = product_id
    else:
        id_regra = addit
        regra = services.produtos.get_regra(id_regra)

        ref_id.value = regra['ref_id_obj']
        coluna_obj.value = regra['coluna_obj']
        operador.value = regra['operador']
        valor_obj.value = regra['valor_obj']
        coluna_new.value = regra['coluna_new']
        valor_new.value = regra['valor_new']

    navigation.refresh()

navigation.paginas.append(
    {
        'objeto': tela,
        'numero': '12',
        'vis_event': on_visible,
        'titulo': "Adicionar/editar regra",
    }
)