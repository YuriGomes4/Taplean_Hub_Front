@echo off
setlocal

rem Caminho para a pasta de requisitos
set "requisitos_dir=%~dp0requisitos"

rem Verifica se o Python já está instalado
python --version > nul 2>&1
if %errorlevel% equ 0 (
    echo Python já está instalado.
) else (
    echo Instalando o Python...
    REM Coloque aqui os comandos de instalação do Python
    REM Exemplo: Execute o instalador do Python da pasta de requisitos
    start /wait %requisitos_dir%\python-3.11.5-amd64.exe /quiet
)

rem Verifica se o Git já está instalado
git --version > nul 2>&1
if %errorlevel% equ 0 (
    echo Git já está instalado.
) else (
    echo Instalando o Git...
    REM Coloque aqui os comandos de instalação do Git
    REM Exemplo: Execute o instalador do Git da pasta de requisitos
    start /wait %requisitos_dir%\Git-2.42.0-32-bit.exe /SILENT
)

endlocal
