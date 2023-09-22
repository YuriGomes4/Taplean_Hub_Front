from flet import(
    Column,
    Row,
    ElevatedButton,
    icons,
    FilePicker,
    FilePickerResultEvent,
    Text,
    Page,
    Dropdown,
    dropdown,
)

import navigation
import services

page = Page

# Pick files dialog
def pick_files_result(e: FilePickerResultEvent):
    selected_files.value = (
        ", ".join(map(lambda f: f.name, e.files)) if e.files else "Cancelled!"
    )
    selected_files.update()

pick_files_dialog = FilePicker(on_result=pick_files_result)
selected_files = Text()

# Save file dialog
def save_file_result(e: FilePickerResultEvent):
    save_file_path.value = e.path if e.path else "Cancelled!"
    save_file_path.update()

save_file_dialog = FilePicker(on_result=save_file_result)
save_file_path = Text()

# Open directory dialog
def get_directory_result(e: FilePickerResultEvent):
    directory_path.value = e.path if e.path else "Cancelled!"
    directory_path.update()

get_directory_dialog = FilePicker(on_result=get_directory_result)
directory_path = Text()


def sync_prods(e):
    services.extrato.sync_prods()

# hide all dialogs in overlay
#page.overlay.extend([pick_files_dialog, save_file_dialog, get_directory_dialog])

def remove_prods(e):
    services.extrato.remove_prods()

opts = []

def list_orders(e):
    services.extrato.list_orders()

def remove_orders(e):
    services.extrato.remove_orders()

def sales_prods(e):
    services.extrato.sales_prods()


def seller_changed(e):
    print(drop.value)
    for seller in services.vendedor.get_all():
        if seller['nome'] == drop.value:
            services.config.set('vendedor', seller['id'])
            #services.config.set('prod_sort', "")

def teste(e):
    update = {
        "title": "Controle Dualshock Com Fio Para Ps4 Feir"
        #"price": 196
    }
    services.extrato.modify_Produtos_row('MLB2735399340', True, update)


drop = Dropdown(on_change=seller_changed)

tela = Column(
    [
        Row(
            [
                drop
            ]
        ),
        Row(
            [
                ElevatedButton(
                    "Listar produtos",
                    icon=icons.FOLDER_OPEN,
                    on_click=sync_prods,
                    disabled=page.web,
                ),
                directory_path,
            ]
        ),
        Row(
            [
                ElevatedButton(
                    "Limpar lista de produtos",
                    icon=icons.FOLDER_OPEN,
                    on_click=remove_prods,
                    disabled=page.web,
                ),
                directory_path,
            ]
        ),
        Row(
            [
                ElevatedButton(
                    "Listar vendas",
                    icon=icons.FOLDER_OPEN,
                    on_click=list_orders,
                    disabled=page.web,
                ),
                directory_path,
            ]
        ),
        Row(
            [
                ElevatedButton(
                    "Limpar lista de vendas",
                    icon=icons.FOLDER_OPEN,
                    on_click=remove_orders,
                    disabled=page.web,
                ),
                directory_path,
            ]
        ),
        Row(
            [
                ElevatedButton(
                    "Calcular vendas nos produtos",
                    icon=icons.FOLDER_OPEN,
                    on_click=sales_prods,
                    disabled=page.web,
                ),
                directory_path,
            ]
        ),
        Row(
            [
                ElevatedButton(
                    "Teste",
                    icon=icons.FOLDER_OPEN,
                    on_click=teste,
                    disabled=page.web,
                ),
            ]
        ),
    ],
    visible=False
)

def on_visible():
    global opts
    global drop
    opts = []

    for seller in services.vendedor.get_all():
        opts.append(dropdown.Option(seller['nome']))

    drop.options = opts
    drop.value = services.vendedor.get(services.config.get('vendedor'))['nome']

    navigation.refresh()

navigation.paginas.append(
    {
        'objeto': tela,
        'numero': '20',
        'vis_event': on_visible,
        'titulo': f"{services.config.get('versao')} - Configurações",
    }
)