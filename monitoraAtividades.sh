#!/bin/bash

# RETORNA UMA TABELA DE PID, CPU E MEMÓRIA
CONTENT=$(ps -u $USER --sort=-pcpu -Ao pid,pcpu,%mem | head -n 5)

# HEADER
CONTENT1=$(echo $CONTENT | cut -d " " -f 1)
CONTENT2=$(echo $CONTENT | cut -d " " -f 2)
CONTENT3=$(echo $CONTENT | cut -d " " -f 3)

echo $CONTENT1" "$CONTENT2" "$CONTENT3

# FIRST LINE
CONTENT4=$(echo $CONTENT | cut -d " " -f 4)
CONTENT5=$(echo $CONTENT | cut -d " " -f 5)
CONTENT6=$(echo $CONTENT | cut -d " " -f 6)

echo $CONTENT4" "$CONTENT5" "$CONTENT6

# SECOND LINE
CONTENT7=$(echo $CONTENT | cut -d " " -f 7)
CONTENT8=$(echo $CONTENT | cut -d " " -f 8)
CONTENT9=$(echo $CONTENT | cut -d " " -f 9)

echo $CONTENT7" "$CONTENT8" "$CONTENT9

if [ $(echo "$CONTENT5 > 20" | bc) -ne 0 ]
then 
	echo "APLICAÇÃO COM VALOR DE MEMÓRIA SUPERIOR À CONSTANTE DEFINIDA --> "$CONTENT5 >> MY_LOG.txt
	kill -9 $CONTENT4
fi
