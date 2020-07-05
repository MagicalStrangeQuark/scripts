#include <iostream>
#include <string.h>
#include <locale.h>

const int SPACE = 32;

void string_reverse(std::string str, int size);

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");

    char name[] = {'J', 'o', 'h', 'n', SPACE, 'D', 'o', 'e'};

    std::string HELLO = "Hello, World!";

    /* Prints the complete name */
    std::cout << name << std::endl;

    /* Prints the complete name */
    for (int j = 0; j < sizeof(name); j++)
        std::cout << name[j];

    std::cout << std::endl;

    /* Prints the complete name */
    string_reverse(name, strlen(name));

    std::cout << HELLO.size() << strlen(HELLO.c_str()) << HELLO.length() << std::endl;

    std::cout << HELLO.at(0) << HELLO.front() << std::endl;

    std::cout << HELLO.at(HELLO.size() - 1) << HELLO.back() << std::endl;

    return 0;
}

void string_reverse(std::string str, int size)
{
    for (int j = size; j >= 0; j--)
        std::cout << str[j];

    std::cout << std::endl;
}