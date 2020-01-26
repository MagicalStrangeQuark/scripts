#!/usr/bin/zsh

# EXECUTA O LAÇO ATÉ QUE O TESTE SEJA VÁLIDO

CONTADOR=0

until [  $CONTADOR -gt 10 ]; do
      echo "$CONTADOR";
      CONTADOR=`expr $CONTADOR + 1;`
done