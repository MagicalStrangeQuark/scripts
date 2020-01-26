#!/bin/bash

# SOLICITA AO USUÁRIO INFORMAR UMA STRING, SENDO ARMAZENADA EM $name

echo -n "🌞🐆🌞 INFORME SEU NOME: ";

read name;

if [ 1 -eq 1 ]
then
    echo "IGUAL"
else
    echo "NÃO IGUAL"
fi

# VERIFICA SE O CONTEÚDO PRESENTE NA VARIÁVEL NAME NÃO ESTÁ VAZIO

if [ -z $name ]
then
    echo "NÃO FOI INFORMADO UM NOME";
else
    echo "O NOME INFORMADO FOI ${name}";
fi

# AMBAS AS COMPARAÇÃO SAO EQUIVALENTES, PODENDO-SE OPTAR POR QUALQUER UMA DAS DUAS, OU SEJA

# test -f /etc/profile

# [ -f /etc/profile ]

VAR1=12;

VAR2=10;

if test $VAR1 -gt $VAR2
then
    echo "$VAR1 É MAIOR QUE $VAR2";
else
    echo "$VAR1 NÃO É MAIOR QUE $VAR2";
fi

if [ $VAR1 -gt $VAR2 ]
then
    echo "$VAR1 É MAIOR QUE $VAR2";
else
    echo "$VAR1 NÃO É MAIOR QUE $VAR2";
fi

# OUTRAS OPÇÕES PODEM SER ENCONTRADAS EM MAN TEST