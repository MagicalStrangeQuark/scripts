#include <iostream>
#include "File.h"

const std::string FILENAME = "File.TXT";

void bubble_sort(int array[], unsigned int length);

int main(int argc, char *argv[])
{
    int Array[] = {49, 99, 39, 73, 99, 66, 67, 26, 79, 56};

    /* Sort an array of integers */
    bubble_sort(Array, sizeof(Array) / sizeof(int));

    for (int j = 0; j < sizeof(Array) / sizeof(int); j++)
    {
        std::cout << Array[j] << std::endl;
    }

    return EXIT_SUCCESS;
}

void bubble_sort(int array[], unsigned int length)
{
    for (int i = 0; i < length * length; i++)
    {
        int k = i / length, j = i % length, SWAP = array[j];

        std::string __DATA = File::json_encode(array, length);

        File::file_put_contents(FILENAME, __DATA, WRITE_MODE::FILE_APPEND);

        if (!(array[k] < array[j]))
        {
            continue;
        }

        array[j] = array[k];

        array[k] = SWAP;
    }
}