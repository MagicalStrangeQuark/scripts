#!/usr/bin/zsh

# EXECUTE O TESTE ENQUANTO O TESTE FOR VÁLIDO

CONTADOR=0

while [  $CONTADOR -lt 10 ]; do
      echo "$CONTADOR";

      let CONTADOR=CONTADOR+1; 
        mkdir "PASTA$CONTADOR";
done