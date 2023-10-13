@echo off

REM Defina o nome do ambiente virtual (venv)
set VENV=wvenv

REM Crie o ambiente virtual
python -m venv %VENV%

REM Ativar o ambiente virtual
call %VENV%\Scripts\activate

REM Instale os pacotes do arquivo requirements.txt
pip install -r requirements.txt

REM Executar o script Python a partir do ambiente virtual
python run.py

REM Desativar o ambiente virtual
deactivate

REM Opcionalmente, voc  pode adicionar um atraso para visualizar mensagens (opcional)
ping 127.0.0.1 -n 5 > nul

REM Fechar o terminal (opcional)
exit
