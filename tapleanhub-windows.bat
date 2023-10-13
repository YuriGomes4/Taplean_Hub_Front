@echo off
REM Ativar o ambiente virtual
call .\wvenv\Scripts\activate

REM Executar o script Python em segundo plano (sem janela vis vel)
start /B python run.py