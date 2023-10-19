@echo off

REM Defina o nome do ambiente virtual (venv)
cd %1

REM Defina o nome do ambiente virtual (venv)
set VENV=wvenv

REM Crie o ambiente virtual
python -m venv %VENV%

REM Ativar o ambiente virtual
call %VENV%\Scripts\activate

REM Instale os pacotes do arquivo requirements.txt
pip install -r requirements.txt

REM Executar o script Python a partir do ambiente virtual
streamlit run main.py --server.fileWatcherType none --server.headless true