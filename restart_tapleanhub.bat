@echo off

REM Esta mensagem ajuda a depurar onde o script para.
echo Iniciando o script batch...

REM Esta mensagem ajuda a depurar o início do arquivo "stop_tapleanhub.bat".
echo Parando o Taplean Hub...
taskkill /f /im streamlit.exe

REM Esta mensagem ajuda a depurar o início do arquivo "start_tapleanhub.vbs".
echo Iniciando o Taplean Hub...
cscript .\start_tapleanhub.vbs

REM Esta mensagem ajuda a depurar onde o script termina.
echo Script concluído.
exit
