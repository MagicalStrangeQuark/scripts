#include <iostream>
#include <time.h>
#include <locale.h>

const int SIZE_OF_VECTOR = 10;

void change(int* var);

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");

    srand(time(NULL));

    int var = 7;
    int *pvar;

    int *vector = new int[SIZE_OF_VECTOR];

    int vect[] = {1, 1, 2, 3, 5, 8, 13};

    int *pvect = &vect[0];

    pvar = &var;  /* Stores var's memory adress */

    std::cout << pvar << std::endl;
    std::cout << &var << std::endl;
    std::cout << *pvar << std::endl;

    change(&var);

    std::cout << var << std::endl;

    for(int j = 0; j < SIZE_OF_VECTOR; j++)
        *(vector + j) = rand() % SIZE_OF_VECTOR;

    for(int j = 0; j < SIZE_OF_VECTOR; j++)
        std::cout << *(vector + j) << std::endl;

    delete[] vector; /* delete[] / delete */
    vector = NULL;

    std::cout << pvect << std::endl;
    std::cout << *pvect << std::endl;

    for(int i = 0; i < 7; i++)
        std::cout << pvect[i] << std::endl;

    for(int i = 0; i < 7; i++)
        std::cout << *(pvect + i) << std::endl;

    for(int i = 0; i < 7; i++)
        std::cout << pvect++ << std::endl;

    pvect = &vect[0];

    for(int i = 0; i < 7; i++) {
        std::cout << *pvect << std::endl;
        pvect++;
    }

    return 0;
}

void change(int* var) {
    *var = 20;
}