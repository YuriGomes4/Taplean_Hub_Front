import streamlit as st

#import pages

paginas = {}
#page = Page

addit = ""

tela = st.session_state.page

cont = st.empty()


def base():
    st.sidebar.button("Teste", key="opa")

def alterar_pagina():
    global cont

    #for key in paginas:
    #    if len(key) == 6:
    #        #print(key)
    #        paginas[key].empty()

    cont = paginas[st.session_state["page"]]()

    st.rerun()


def NavigationChange(screen=None):

    st.session_state.page = screen

    alterar_pagina()

def BackScreen(e):
    global tela
    newScreen = int(tela[1])-1

    #if newScreen == 0:
        #page.appbar.leading = None
        #page.navigation_bar.visible = True

    tela = f"{tela[0]}{newScreen}"

    alterar_pagina()

def ChangeScreen(screen, e):
    global addit
    global tela
    tela = screen
    #page.appbar.leading = IconButton(
    #    icon = icons.ARROW_BACK,
    #    on_click = BackScreen,
    #)
    #page.navigation_bar.visible = False

    #addit = e.control.key

    alterar_pagina()

#def notify(texto):
    #page.snack_bar = SnackBar(Text(texto))
    #page.snack_bar.open = True
    #page.update()

#def refresh():
    #page.update()
