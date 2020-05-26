#!/bin/bash

echo "NOME DO SCRIPT $0";

echo "NÚMERO DE PARÂMETROS PASSADOS PARA O SCRIPT $#";

echo "OS PARÂMETROS PASSADOS FORAM:"

# IT WON'T WORK

for i in $(seq 1 $#); do
  echo "PARÂMETRO $i: $i";
done

# IT WORK'S

for i in $*; do 
   echo $i 
done