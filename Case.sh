#!/usr/bin/zsh

NUMERO=3;

case $NUMERO in
    1)
        echo "1";
        ;;
    2||3)
        echo "2|3";
        ;;
    4|5|6|7|8|9|10)
        echo "4|5|6|7|8|9|10";
        ;;
    *)
        echo "Não foi possível encontrar o valor presente";
        ;;
esac