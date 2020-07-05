#include <iostream>
#include <locale.h>

int main (int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");
    
    int CONTROLE = 0;

    while (CONTROLE < 25) {
        if (CONTROLE++ % 2 == 0) {
            continue;
        }

        std::cout << CONTROLE << std::endl;
    }

    do {
        std::cout << CONTROLE-- << std::endl;
    } while (CONTROLE > 0);

    return 0;
}