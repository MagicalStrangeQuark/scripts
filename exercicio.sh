#!/usr/bin/zsh

VALID_PARAMS=0;

OPTION=0;

# --help OR -h

if [ $# -eq 1 ] && ( [ $1 = "--help" ] || [ $1 = "-h" ] )
then
    echo "1 - Fazer uma contagem regressiva começando do número informado como parâmetro";

    echo "2 - Verificar se o parâmetro informado é um arquivo presente no diretório /etc/";

    echo "3 - Analisar o /etc/passwd e exibir apenas o nome do usuário (campo 1) e  seu ID (campo 3), considerando linhas que possuam /bin/bash";

    VALID_PARAMS=1;
fi

if [ $# -eq 1 ]
then
    case $1 in
        1)
            VALID_PARAMS=1;
            OPTION=1;
            ;;
        2)
            VALID_PARAMS=1;
            OPTION=2;
            ;;
        3)
            VALID_PARAMS=1;
            OPTION=3;
            ;;
        *)
            ;;
    esac
fi

# A PARTIR DESSA VERIFICAÇÃO, TEMOS OS ARGUMENTOS INFORMADOS CORRETAMENTE, BASTA PROCESSAR A LÓGICA

if [ $VALID_PARAMS -eq 0 ]
then
    echo "Consulte a ajuda do comando, digitando -h ou --help";
    exit;
fi

# PROCESSAMENTO DA INSTRUÇÃO 1
if [ $OPTION -eq 1 ]
then
    echo -n "Por favor, informe um número inteiro: " && read NUM;

    if [[ "$NUM" =~ ^[0-9]+$ ]]
    then
            while [ $NUM -gt 0 ]
            do
                echo $NUM;
                let NUM=NUM-1;
            done
    else
        echo "NÃO FOI INFORMADO UM INTEIRO VÁLIDO";
    fi
fi

# PROCESSAMENTO DA INSTRUÇÃO 2

if [ $OPTION -eq 2 ]
then
    echo -n "Por favor, informe o nome do arquivo, seguido da extensão: " && read FILE;

    if [ -n "$FILE" ]
    then
        if [ -f /etc/$FILE ]
        then
            echo "O ARQUIVO /etc/$FILE EXISTE NO SISTEMA DE ARQUIVOS";
        else
            echo "O ARQUIVO /etc/$FILE NÃO FOI ENCONTRADO NO SISTEMA DE ARQUIVOS";
        fi
    else
        echo "NÃO FOI INFORMADO NENHUM ARQUIVO";
    fi
fi

# PROCESSAMENTO DA INSTRUÇÃO 3

if [ $OPTION -eq 3 ]
then
    if [ -f /etc/passwd ]
    then
        cat /etc/passwd | grep /bin/bash | cut -d":" -f1,3
    else
        echo "ARQUIVO /etc/passwd NÃO ENCONTRADO"
    fi
fi