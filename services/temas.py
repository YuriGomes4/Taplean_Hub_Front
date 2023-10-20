import streamlit as st
from . import personal_prefs

import os

config_file = ".streamlit/config.toml"

def get_all():
    config_dict = {}

    try:
        with open(config_file, 'r') as file:
            for line in file:
                line = line.strip().replace('"', '').replace("[theme]", "")
                if not line or line.startswith('#'):
                    continue

                name, value = line.split(' = ', 1)
                name = name.strip()
                value = value.strip()
                config_dict[name] = value
            file.close()
    except:
        with open(config_file, 'w') as file:
            file.close()

    return config_dict

def get(name):
    data = get_all()

    try:
        return data[name]
    except:
        from . import default_prefs

        set(name, default_prefs.get(name))

def write_config_file(config_data):
    with open(config_file, 'w') as file:
        file.write("[theme]\n")
        for key, value in config_data.items():
            file.write(f'{key} = "{value}"\n')
        file.close()

def set(name, value):
    config_data = get_all()
    config_data[name] = value
    write_config_file(config_data)
    return get(name)


vermelho = {
    "pc": "#ff4b4b", 
    "sc": "#999999",
}

#############################################

escuro = {
    "bc": "#0E1117",
    "sbc": "#262730",
    "tc": "#FAFAFA"
}

claro = {
    "bc": "#ffffff",
    "sbc": "#f0f2f6",
    "tc": "#31333f"
}

def getTema():
    match personal_prefs.get('cor'):
        case "Vermelho":
            cor = vermelho

    match personal_prefs.get('tema'):
        case "Escuro":
            tema = escuro
        case "Claro":
            tema = claro

    temaAtual = {}

    for key, value in cor.items():
        temaAtual[key] = value

    for key, value in tema.items():
        temaAtual[key] = value

    return temaAtual

def attTema():

    tema = getTema()

    set('primaryColor', tema['pc'])
    set('backgroundColor', tema['bc'])
    set('secondaryBackgroundColor', tema['sbc'])
    set('textColor', tema['tc'])


def setTema(nomeTema=None, nomeCor=None):

    tema = getTema(nomeTema, nomeCor)

    set('primaryColor', tema['pc'])
    set('backgroundColor', tema['bc'])
    set('secondaryBackgroundColor', tema['sbc'])
    set('textColor', tema['tc'])

def getTema(nomeTema=None, nomeCor=None):
    if nomeTema:
        temaNome = nomeTema
    else:
        temaNome = personal_prefs.get('tema')

    if nomeCor:
        corNome = nomeCor
    else:
        corNome = personal_prefs.get('cor')

    match corNome:
        case "Vermelho":
            cor = vermelho

    match temaNome:
        case "Escuro":
            tema = escuro
        case "Claro":
            tema = claro

    temaAtual = {}

    for key, value in cor.items():
        temaAtual[key] = value

    for key, value in tema.items():
        temaAtual[key] = value

    return temaAtual
