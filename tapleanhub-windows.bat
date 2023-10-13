@echo off

REM Executar o script Python em segundo plano (sem janela vis vel)
start /B %~dp0\wvenv\Scripts\python.exe %~dp0\run.py