#include <iostream>
#include <locale.h>

int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");

    for (unsigned short int j = 0; j < 10; j++)
    {
        std::cout << j << std::endl;
    }

    return 0;
}