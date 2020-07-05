# LIST COMPREHENSION

X = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];

Y = [];

for i in X:
    Y.append(i**2);

M = [i**2 for i in X];

Z = [i for i in X if(i % 2 == 1)];

print(Y);

print(M);

print(Z);