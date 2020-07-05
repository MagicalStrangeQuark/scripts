import Constants
import Functions
import os

# RETORNA O DIRETÓRIO ATUAL
print(Constants.__DIR__())

# RETORNA UMA ARRAY DE TAMANHO 10 COM ELEMENTOS VARIANDO ENTRE [0 - 100]
print(Functions.GenerateRandomList(0, 100, 10))

Array = Functions.GenerateRandomList(0, 20, 15)

print(Array)

# RETORNA A MODA DO ARRAY EM QUESTÃO, SE HOUVER OCORRÊNCIAS IGUAIS, RETORNA O PRIMEIRO ÍNDICE
print(Functions.Mode(Array))

# OCULTA A PASTA __pyache__ AUTOMATICAMENTE
os.system('Attrib +H "C:\\Users\\Wesley Flôres\\Desktop\\Python\\Module\\__pycache__"')