# -*- coding: UTF-8 -*-

# Função Enumerate

MyList = ["Peixe", "Bola", "Gato"];

print(MyList);

# Método normal
for i in range(len(MyList)):
    print(i, MyList[i]);

# Usando a função enumerate
for Index, Value in enumerate(MyList):
    print(Index, Value);