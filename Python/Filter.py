# -*- coding: UTF-8 -*-

def Pares(Num):
    if(Num % 2 == 0):
        return Num;


List = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

numerosPar = filter(Pares, List);

print(numerosPar);