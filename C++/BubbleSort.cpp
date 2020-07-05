#include <iostream>
#include <string.h>
#include <time.h>
#include <locale.h>

std::string Fruits[] = {"Cloudberry", "Banana", "Tamarillo", "Papaya", "Gooseberry", "Yuzu", "Tangerine", "Peach", "Açaí"};

int const MAX_NUMBER = 10;

void bubble_sort_integer(int *dados, int len = 0);
void bubble_sort_string(std::string  *dados, int len);

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");

    /* Store's fruits number */
    const int FRUITS_NUMBER = sizeof(Fruits) / sizeof(std::string);
    int Numbers[MAX_NUMBER] = {};

    srand(time(NULL));

    /* Make an random array of integers */
    for(int j = 0; j < MAX_NUMBER; j++) {
        Numbers[j] = rand() % 100;
    }

    /* Sort an array of integers*/ 
    bubble_sort_integer(Numbers, MAX_NUMBER);
    /* Sort an array of strings */
    bubble_sort_string(Fruits, MAX_NUMBER);

    for(int j = 0; j < MAX_NUMBER; j++) {
        std::cout << Numbers[j] << std::endl;
    }

    for(int j = 0; j < FRUITS_NUMBER; j++) {
        std::cout << Fruits[j] << std::endl;
    }

    return 0;
}

void bubble_sort_integer(int *dados, int len) {
    for (int k = 0; k < len; k++) {
        for (int j = 0; j < len; j++) {
            if (dados[k] < dados[j]) {
                dados[j] = dados[k] + dados[j];
                dados[k] = dados[j] - dados[k];
                dados[j] = dados[j] - dados[k];
            }
        }
    }
}

void bubble_sort_string(std::string *dados, int len = 0) {
    if(len > 0) {
        for (int k = 0; k < len; k++) {
            for (int j = 0; j < len; j++) {
                /* Try to remove those three lines below (apparently c_str() method changes it's value)*/
                std::string aux = dados[k];
                std::string StringBefore = dados[j];
                std::string StringAfter = dados[k];
                if (strcmp(StringBefore.c_str(), StringAfter.c_str()) > 0) {
                    aux=dados[k];
                    dados[k]=dados[j];
                    dados[j]=aux;
                }
            }
        }
    }
}