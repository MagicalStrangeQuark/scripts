import random

# @params INTEGER maxValue
# @params INTEGER length
def GenerateRandomList(initialValue, maxValue, length):
    RandList = []
    
    for i in range(length):
        RandList.append(random.randint(initialValue, maxValue))
        
    return RandList

# FUNÇÃO DE RETORNO DA MODA DE UM ARRAY @TODO CORRIGIR O ALGORITMO
def Mode(array):
    # CRIA UM ARRAY ORDENADO OS ELEMENTOS DO ARRAY PASSADO NA CHAMADA DA FUNÇÃO
    Array = sorted(array)
     
    # CRIA UM ARRAY PARA ARMAZENAR SEU VALOR E O NÚMEROS DE OCORRÊNCIAS DO MESMO
    DistinctElements = {}
    
    # CRIA UMA VARIÁVEL PARA RECUPERAR O VALOR QUE MAIS SE REPETE E O NÚMERO DE OCORRÊNCIAS
    StoreMoreRepeatedValue = [Array[0], 1]
    
    # PERCORRE O ARRAY EM QUESTÃO, ARMAZENANDO O VALOR E A QUANTIDADE DE OCORRÊNCIAS DO MESMO
    for i in Array:
        if i not in DistinctElements:
            DistinctElements[i] = 1
        else:
            DistinctElements[i] +=1
            
    # PERCORRE O ARRAY RETORNANDO O MAIOR VALOR DE REPETIÇÃO
    for l in DistinctElements:
        if DistinctElements[l] > StoreMoreRepeatedValue[0]:
            StoreMoreRepeatedValue = [l, DistinctElements[l]]
            
    return StoreMoreRepeatedValue[0]