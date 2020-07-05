# -*- coding: UTF-8 -*-

# Função Reduce

from functools import reduce

def Soma(x, y):
    return x + y;

List = [1, 2, 3, 4, 5, 6, 7];

soma = reduce(Soma, List);

print(soma);