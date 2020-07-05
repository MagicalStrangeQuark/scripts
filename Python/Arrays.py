# -*- coding: utf-8 -*-

# CRIANDO UM ARRAY UNIDIMENSIONAL
Array = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

# EXIBE TODOS OS ELEMENTS DO ARRAY
for i in Array:
    print(Array[i])
    
# RETORNA O TAMANHO DO ARRAY
print(len(Array))

# ADICIONA UM ELEMENTO AO FINAL DO ARRAY
Array.append(10)

print(Array)

FindElement = 12

# VERIFICA SE O ELEMENT CONTIDO NA VARIÁVEL FINDELEMENT ESTÁ PRESENTE NO ARRAY
if FindElement in Array:
    print(str(FindElement) + " Está no Array")

# DELETA OS ELEMENTOS DE [INDICE 4 EM DIANTE]
del Array[4:]

print(Array)

# DELETA TODOS OS ELEMENTOS DO ARRAY
del Array[:]

print(Array)

# INICIALIZANDO UM ARRAY BIDIMENSIONAL
MyArray = [[0, 1, 2],[4, 5, 6],[7, 8, 9]]

print(MyArray)

# INICIALIZA UM ARRAY NÃO ORDENADO
MyNonSortedArrayYet = [8, 4, 2, 7, 8, 2, 1, 0, 9, 4, 3, 5, 6]

# A FUNÇÃO SORTED APENAS RETORNA O ARRAY ORDENADO, OU SEJA, NÃO ATUA SOBRE O MESMO
print(sorted(MyNonSortedArrayYet))

print(MyNonSortedArrayYet)

# O MÉTODO SORT ATUA SOBRE O ARRAY EM QUESTÃO
MyNonSortedArrayYet.sort()

# O MÉTODO SORT, QUANDO PASSADO UM PARÂMETRO REVERSE = TRUE, RETORNA O ARRAY ORDENADO REVERSAMENTE
MyNonSortedArrayYet.sort(reverse = True)

print(MyNonSortedArrayYet)

# O MÉTODO REVERSE TAMBÉM INVERTE O ARRAY EM QUESTÃO
MyNonSortedArrayYet.reverse()

print(MyNonSortedArrayYet)