#include <iostream>
#include <locale.h>

void increment()
{
    static int number = 10;

    std::cout << number++ << std::endl;
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");

    increment();

    increment();

    increment();

    return 0;
}