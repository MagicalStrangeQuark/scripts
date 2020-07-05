import random

# ATRIBUI UM NÚMERO VARIANDO ENTRE 0 E 100 À VARIÁVEL NUMBER
Number = random.randint(0, 100)

print(Number)

MyList = [0, 12, 67, 82, 45, 23, 100, 78]

# RETORNA UM NÚMERO ALEATÓRIO DENTRE OS VALORES PRESENTES NO ARRAY
print(random.choice(MyList))