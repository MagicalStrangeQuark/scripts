#include <iostream>
#include <locale.h>
#include <time.h>

const int RAND_LIMIT = 100;

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "portuguese");

    srand(time(NULL));

    int vector[100] = {};

    /* number of integer members */
    for(int j = 0; j < sizeof(vector) / sizeof(int); j++) {
        vector[j] = rand() % RAND_LIMIT;
    }

    for(int j = 0; j < sizeof(vector) / sizeof(int); j++) {
        std::cout << vector[j] << std::endl;
    }

    return 0;
}