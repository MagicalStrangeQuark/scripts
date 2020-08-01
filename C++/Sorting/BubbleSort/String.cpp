#include <iostream>
#include <string.h>
#include <time.h>
#include <locale.h>

void bubble_sort(std::string *data, unsigned int length);

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");

    std::string Fruits[] = {"Cloudberry", "Banana", "Tamarillo", "Papaya", "Gooseberry", "Yuzu", "Tangerine", "Peach", "Açaí"};

    /* Store's fruits number */
    unsigned const int FRUITS_NUMBER = sizeof(Fruits) / sizeof(std::string);

    /* Sort an array of strings */
    bubble_sort(Fruits, FRUITS_NUMBER);

    for (int j = 0; j < FRUITS_NUMBER; j++)
    {
        std::cout << Fruits[j] << std::endl;
    }

    return 0;
}

void bubble_sort(std::string *data, unsigned int length)
{
    for (int i = 0; i < length * length; i++)
    {
        /* Try to remove those three lines below (apparently c_str() method changes it's value)*/
        std::string aux = data[i / length];
        std::string StringBefore = data[i % length];
        std::string StringAfter = data[i / length];

        if (strcmp(StringBefore.c_str(), StringAfter.c_str()) > 0)
        {
            aux = data[i / length];
            data[i / length] = data[i % length];
            data[i % length] = aux;
        }
    }
}