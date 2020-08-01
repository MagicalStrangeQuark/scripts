#include <iostream>
#include <string.h>
#include <time.h>
#include <locale.h>

unsigned const int LIMIT = 10;

void bubble_sort(int array[], unsigned int length);

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");

    int *Numbers = new int[LIMIT];

    srand(time(NULL));

    /* Make an random array of integers */
    for (int j = 0; j < LIMIT; j++)
    {
        Numbers[j] = rand() % 100;
    }

    for (int j = 0; j < LIMIT; j++)
    {
        std::cout << Numbers[j] << std::endl;
    }

    std::cout << std::endl;

    /* Sort an array of integers */
    bubble_sort(Numbers, LIMIT);

    for (int j = 0; j < LIMIT; j++)
    {
        std::cout << Numbers[j] << std::endl;
    }

    return EXIT_SUCCESS;
}

void bubble_sort(int array[], unsigned int length)
{
    for (int i = 0; i < length * length; i++)
    {
        if (!(array[i / length] < array[i % length]))
        {
            continue;
        }

        int SWAP = array[i % length];

        array[i % length] = array[i / length];

        array[i / length] = SWAP;
    }
}