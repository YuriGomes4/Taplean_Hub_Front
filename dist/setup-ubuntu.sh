#!/bin/bash

# Verifica se o Python já está instalado
if command -v python3 &>/dev/null; then
    echo "Python já está instalado."
else
    echo "Instalando o Python..."
    sudo apt-get update && sudo apt-get install -y python3
fi

# Verifica se o Git já está instalado
if command -v git &>/dev/null; then
    echo "Git já está instalado."
else
    echo "Instalando o Git..."
    sudo apt-get install -y git
fi
