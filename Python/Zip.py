# -*- coding: UTF-8 -*-

# Função Zip

ListNumber = [1, 2, 3, 4, 5];
ListAnimal = ["Avestruz", "Boi", "Cobra", "Dragão", "Elefante"];
ListObject = ["Adress Bok", "Book", "Chair", "Dress", "Eraser"];

for numero, animal, objeto in zip(ListNumber, ListAnimal, ListObject):
    print(numero, animal, objeto);