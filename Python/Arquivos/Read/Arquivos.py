##################################################################################################################
#        MODO        #                                          FUNÇÃO                                           #
##################################################################################################################
#         r          #                                     SOMENTE LEITURA                                       #
#         a          #               LEITURA E ESCRITA (ADICIONA O NOVO CONTEÚDO AO FIM DO ARQUIVO)              #
#         r+         #                                   LEITURA E ESCRITA                                       #
#         a+         #                   LEITURA E ESCRITA (ABRE O ARQUIVO PARA ATUALIZAÇÃO)                     #
##################################################################################################################

import os, json

# OPEN O ARQUIVO CHAMADO OLAMUNDO
Archive = open("OLAMUNDO.txt")

# READ ALL FILE
ReturnAllFile = Archive.read()

# READ ONE LINE
ReturnOneLine = Archive.readline()

# LÊ O ARQUIVO E O ARMAZENA NUMA LISTA
ReturnAllLines = Archive.readlines()

# CONVERTE O CONTEÚDO DO ARQUIVO PRESENTE EM FORMATO JSON
ReturnAllFileInJsonFormat = json.dumps(ReturnAllFile)

print(ReturnAllFileInJsonFormat["glossary"])

Archive.close()