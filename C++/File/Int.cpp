#include <iostream>
#include "File.h"

void bubble_sort(int array[], unsigned int length);

int main(int argc, char *argv[])
{
    int array[] = {49, 99, 39, 73, 99, 66, 67, 26, 79, 56};

    File file;
    
    file.file_put_contents("arquivo.txt", "bla", FILE_APPEND);

    return 0;

    /* Sort an array of integers */
    bubble_sort(array, sizeof(array) / sizeof(int));

    for (int j = 0; j < sizeof(array) / sizeof(int); j++)
    {
        std::cout << array[j] << std::endl;
    }

    return EXIT_SUCCESS;
}

void bubble_sort(int array[], unsigned int length)
{
    for (int i = 0; i < length * length; i++)
    {
        int k = i / length, j = i % length, SWAP = array[j];

        if (!(array[k] < array[j]))
        {
            continue;
        }

        array[j] = array[k];

        array[k] = SWAP;
    }
}