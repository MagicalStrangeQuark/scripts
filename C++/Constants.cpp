#include <iostream>
#include <stdio.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");

    int vector[] = {1, 2, 2, 3, 5, 8, 13, 21, 34, 55};

    /**
     * É permitir alterar o endereço para o qual os dois ponteiros abaixam apontam, mas não pode-se alterar
     * o conteúdo da variável que eles apontam.
     */ 
    const int* p1;
    int const* p2;

    int* const p3 = new int[3]; /* pode-se alterar o valor para o qual ele aponta, mas não o endereço*/

    p1 = &vector[0];
    p2 = &vector[1];

    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;

    /** p1 = 10; não é permitido realizar essa operação */

    /** p2 = 10; não é permitido realizar essa operação */

    *p3 = 10;

    std::cout << p3 << std::endl;

    /* p3++; não é permitido realizar essa operação */

    const std::string MENSAGEM_LOGIN_FRANCES = "Bonjour le Monde!";

    const char* const MENSAGEM_LOGIN_INGLES = "Hello, World!";

    std::cout << MENSAGEM_LOGIN_FRANCES << std::endl;

    std::cout << MENSAGEM_LOGIN_INGLES << std::endl;

    return 0;
}
