import sys
from cx_Freeze import setup, Executable

# Lista de módulos que você deseja incluir no executável.
# Certifique-se de incluir todos os módulos necessários para seu aplicativo.
includes = []

# Lista de arquivos ou outros recursos que você deseja incluir no executável.
# Inclua aqui o seu arquivo de configuração (config.cfg).
files = ["config.cnf", "default_prefs.cnf"]  # Substitua pelo caminho correto para o seu arquivo config.cfg

# Opções do executável.
options = {
    'build_exe': {
        'includes': includes,
        'include_files': files,
        # Nome da pasta de saída personalizada
        'build_exe': 'dist/Windows',
    },
}

# Defina os parâmetros do executável.
executables = [
    Executable('run.py',  # Substitua pelo nome do seu script principal
               base="Win32GUI",  # Deixe como None para aplicativos GUI
               target_name='tapleanhub.exe',  # Nome do executável de saída
               icon=None)  # Ícone do executável (opcional)
]

setup(
    name="TapleanHub",
    version="1.2.1",
    description="Taplean Hub",
    options=options,
    executables=executables,
)
