#!/bin/bash

echo "NOME DO SCRIPT $0";

echo "NÚMERO DE PARÂMETROS PASSADOS PARA O SCRIPT $#";

echo "OS PARÂMETROS PASSADOS FORAM:"

# ISSO NÃO FUNCIONA

for i in $(seq 1 $#); do
  echo "PARÂMETRO $i: $i";
done

# O CORRETO É ASSIM

for i in $*; do 
   echo $i 
done