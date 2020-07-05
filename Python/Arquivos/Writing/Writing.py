##################################################################################################################
#        MODO        #                                          FUNÇÃO                                           #
##################################################################################################################
#         w          #  ESCRITA(CASO O ARQUIVO JÁ EXISTA, ELE SERÁ APAGADO E UM NOVO ARQUIVO VAZIO SERÁ CRIADO)  #
#         w+         #     ESCRITA (O MODO W+, ASSIM COMO O W, TAMBÉM APAGA O CONTEÚDO ANTERIOR DO GRÁFICO)      #
##################################################################################################################

import hashlib, os, datetime

# INSTANCIA UM OBJETO DA LIBRARY HASHLIB, PARA A HASH SHA512
hash = hashlib.md5()

# PASSA O DATA E HORA PARA SER CRIPTOGRAFADA
hash.update(str(datetime.datetime.utcnow()).encode('utf-8'))

# OBTÉM UM NOME DE PASTA SHA512 PARA A DATA E HORA ATUAL
FileName = hash.hexdigest()

# CREATE A NEW FILE OR SOBRESCREVE O ARQUIVO EXISTENTE
ArquivoCriado = open(str("") + str(FileName) + ".txt", "w")

# ESCREVE A DATA E HORA ATUAL NO ARQUIVO
ArquivoCriado.write(str(datetime.datetime.utcnow()) + "\n")

# FECHA O ARQUIVO
ArquivoCriado.close()