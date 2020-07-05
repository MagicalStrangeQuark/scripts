#!/usr/bin/zsh

# EXECUTE O LOOP ENQUANTO A CONDIÇÃO FOR VÁLIDA

CONTADOR=0

while [  $CONTADOR -lt 10 ]; do
      echo "$CONTADOR";

      let CONTADOR=CONTADOR+1; 
        mkdir "PASTA$CONTADOR";
done