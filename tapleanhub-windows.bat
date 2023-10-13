@echo off

REM Executar a instala  o dos pacotes em segundo plano (sem janela vis vel)
start /B %~dp0\wvenv\Scripts\python.exe -m pip install -r %~dp0\requirements.txt

REM Executar o script Python em segundo plano (sem janela vis vel)
start /B %~dp0\wvenv\Scripts\python.exe %~dp0\run.py

REM Mantenha o prompt de comando aberto para visualiza  o (opcional)
cmd /k
