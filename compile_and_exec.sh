#!/bin/bash

# Verifica se o nome do arquivo foi fornecido como argumento
if [ -z "$1" ]; then
    echo "Uso: $0 <nome_do_arquivo_sem_extensao>"
    exit 1
fi

# Define o nome do arquivo a partir do argumento
filename=$1

# Compila o arquivo .cpp usando g++
g++ -o $filename ./C++/codeforces/$filename.cpp

# Verifica se a compilação foi bem-sucedida
if [ $? -eq 0 ]; then
    echo "Compilação bem-sucedida! O executável é $filename"
    echo "Executando o arquivo..."
    ./$filename
else
    echo "Erro na compilação."
fi
