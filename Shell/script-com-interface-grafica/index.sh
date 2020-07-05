#!/bin/bash
# uso do yad com --calendar

# mostra um calendário iniciando com o dia de hoje
# guarda o valor selecionar na variável $DATA

DATA=$(
        yad --calendar                \
                --day=$(date "+%d")   \
                --month=$(date "+%m") \
                --year=$(date "+%Y")  \
            --date-format=%d\/%m\/%Y  \
            --title=Primeiro Programa \
            --center                  \ # disposição do diálogo na tela
        )

# mostra um diálogo informando a $DATA selecionada
yad --title="AVISO" --text="$USER, você selecionou a data $DATA"
#.EOF
