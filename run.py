import os
import subprocess

def check_for_updates():
    # Obter o diretório onde o script está localizado
    script_directory = os.path.dirname(os.path.abspath(__file__))

    # Mudar para o diretório do projeto (mesmo diretório do script neste exemplo)
    project_directory = script_directory

    subprocess.call(["git", "pull"], cwd=project_directory)

def start():
    # Obter o diretório onde o script está localizado
    script_directory = os.path.dirname(os.path.abspath(__file__))

    # Mudar para o diretório do projeto (mesmo diretório do script neste exemplo)
    project_directory = script_directory

    subprocess.call(["streamlit", "run", "main.py", "--server.fileWatcherType", "none", "--server.headless", "true"], cwd=project_directory)

if __name__ == "__main__":
    check_for_updates()

    #os.system("python3 main.py")
    start()