#include <iostream>
#include <time.h>
#include <locale.h>

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "portuguese");

    srand(time(NULL));

    /* generate secret number between 1 and 5 */
    switch(rand() % 5 + 1) {
        case 1:
            std::cout << "NÚMERO UM" << std::endl;
            break;
        case 2:
            std::cout << "NÚMERO DOIS" << std::endl;
            break;
        case 3:
            std::cout << "NÚMERO TRÊS" << std::endl;
            break;
        case 4:
            std::cout << "NÚMERO QUATRO" << std::endl;
            break;
        case 5:
            std::cout << "NÚMERO CINCO" << std::endl;
            break;
    }
	
	return 0;
}