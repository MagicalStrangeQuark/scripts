#!/bin/bash

######################################################################################
#                                      NÚMEROS                                       #
######################################################################################
#         ==         #         -eq         #            (equal) Igual à              #
######################################################################################
#         !=         #         -ne         #         (not equal) Diferente de        #
######################################################################################
#         <          #         -lt         #        (less than) Menor que            #
######################################################################################
#         >          #         -gt         #        (greater than) Maior que         #
######################################################################################
#         <=         #         -le         #    (less or egual) Menor ou igual à     #
######################################################################################
#         >=         #         -ge         #   (greater or equal) Maior ou igual à   #
######################################################################################

######################################################################################
#                                      STRINGS                                       #
######################################################################################
#           =        #         Igual à (isso mesmo apenas um sinal de igual)         #
######################################################################################
#          !=        #                          Diferente de                         #
######################################################################################
#          -n        #       String existe e não é vazia (apenas um operador)        #
######################################################################################
#          -z        #          String existe e é vazia (apenas um operador)         #
######################################################################################

# viacep.com.br/ws/01001000/json/ 

# DEFINIÇÃO

CONTADOR=0;                                 # 0000.0000
LIMITE=1000;                                # 0000.1000
FILENAME="LISTA.JSON";                      # NOME DO ARQUIVO
FILE_EXISTS=$(ls -lh | grep 'LISTA.JSON');  # VERIFICA SE JÁ EXISTE UMA BUSCA EM ANDAMENTO

echo "🌞🐆🌞 Buscando pelo Arquivo 'Lista.JSON'... 🌞🐆🌞";

# VERIFICA SE O ARQUIVO ESÁ VAZIO
if [ -z "$FILE_EXISTS" ]
then
    echo "Não existe nenhuma listagem prévia. Criando novo relatório...";
    echo "{}" > $FILENAME;
else
    echo "Arquivo Encontrado. Resumindo busca";
    # ARMAZENA O CEP ATUAL, INICIANDO EM 0 E IND O ATÉ 1000
    CONTADOR=$(php -r ' $data = json_decode( file_get_contents("LISTA.JSON") );
                        echo count( (array) $data );
                    ');
    echo "Existem $CONTADOR registros até o momento.";
fi


# read LIMITE;

php -r '
            /** show errors */
            ini_set("display_errors", 1);
            ini_set("display_startup_errors", 1);

            error_reporting(E_ALL);

            $INICIO = 0;
            $FIM = 99999999;
            $MOSTRAR_MULTIPLO = 2;

            $data = (array) json_decode( file_get_contents("LISTA.JSON") );

            if(!is_array($data) || empty($data)) {
                $data = [];
            }

            for($i = $INICIO; $i <= $FIM; $i++) {
                $cep_atual = str_pad($i, 8, 0, STR_PAD_LEFT);

                if(!isset($data[$cep_atual])) {
                    $data_find = json_decode(file_get_contents("https://viacep.com.br/ws/{$cep_atual}/json/"));

                    if(isset($data_find->erro)) {
                        echo "ERROR: Cep {$cep_atual} não existe";
                    } else {
                        echo "SUCCESS: Cep {$cep_atual} Encontrado";
                    }

                    $data[$cep_atual]=(array) $data_find;
                } else {
                    echo "WARNING: Cep {$cep_atual} já listado";
                }

                echo "\n";

                if($i % $MOSTRAR_MULTIPLO == 0) {
                    file_put_contents("LISTA.JSON", json_encode($data, JSON_PRETTY_PRINT | JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES));
                }
            }

      
        ';

echo "FIM";
date;