from flet import(
    app,
    Page,
    AppBar,
    colors,
    NavigationBar,
    Text,
    icons,
    NavigationDestination,
    Column,
    Container,
    Row,
    ElevatedButton,
    FilePicker,
    FilePickerResultEvent,
    IconButton,
    ListView,
    alignment,
    MainAxisAlignment,
    Icon,
    TextAlign,
)

import pages

import navigation

import os
import subprocess


def main(page: Page):

    paginas = navigation.paginas

    page.title = "Produtos"

    pages.perfil.main.page = page
    pages.perfil.main.page.overlay.extend([pages.perfil.main.pick_files_dialog, pages.perfil.main.save_file_dialog, pages.perfil.main.get_directory_dialog])

    navigation.page = page

    page.appbar = AppBar(
        leading = None,
        title=Text("Produtos"),
        bgcolor=colors.INDIGO,
    )
    page.navigation_bar = NavigationBar(
        destinations=[
            NavigationDestination(icon=icons.PIE_CHART_OUTLINE_OUTLINED, selected_icon=icons.PIE_CHART, label="Gráficos"),
            NavigationDestination(icon=icons.RECEIPT_LONG_OUTLINED, selected_icon=icons.RECEIPT_LONG, label="Produtos"),
            #NavigationDestination(icon=icons.CATEGORY_OUTLINED, selected_icon=icons.CATEGORY, label="Categorias"),
            NavigationDestination(icon=icons.ACCOUNT_CIRCLE_OUTLINED, selected_icon=icons.ACCOUNT_CIRCLE, label="Configurações"),
        ],
        on_change = navigation.NavigationChange,
    )

    #page.add(navigation.extrato_page, navigation.categorias_page, navigation.perfil_page)

    page.navigation_bar.visible = False
    page.appbar.visible = False

    for pag in paginas:
        try:
            page.add(pag['objeto'])
        except:
            pass

    navigation.alterar_pagina()


app(target=main)