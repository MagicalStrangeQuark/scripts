#include <iostream>
#include <string.h>
#include <locale.h>

const int SPACE = 32;

void string_reverse(std::string str, int size);

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");

    char name[] = {'W', 'e', 's', 'l', 'e', 'y', SPACE, 'T', 'e', 'r', 'r', 'e', 's'};

    /* Prints the complete name */
    std::cout << name << std::endl;

    /* Prints the complete name */
    for(int j = 0; j < sizeof(name); j++)
        std::cout << name[j];

    std::cout << std::endl;

    /* Prints the complete name */
    string_reverse(name, strlen(name));

    std::cout << std::endl;
    
    return 0;
}

void string_reverse(std::string str, int size) {
    for(int j = size; j >= 0; j--)
        std::cout << str[j];
}