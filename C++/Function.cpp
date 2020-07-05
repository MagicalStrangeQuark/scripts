#include <iostream>
#include <locale.h>

int fatorial(int var);
bool is_par(int var);
bool is_impar(int var);
void print_message(std::string var);
void print_n_message(std::string var, int n);

int main (int argc, char * argv[]) {
    setlocale(LC_ALL, "portuguese");

    print_message("Arquivo contendo funções");

    print_n_message("Exemplo", 7);
    
    std::cout << fatorial(6) << std::endl;

    std::cout << "is_par(6): " << is_par(6) << std::endl;
    std::cout << "is_par(7): " << is_par(7) << std::endl;

    std::cout << "is_impar(6): " << is_impar(6) << std::endl;
    std::cout << "is_impar(7): " << is_impar(7) << std::endl;

    return 0;
}

int fatorial(int numero) {
    if((numero > 1) == true)
        return numero * fatorial(numero - 1);
    return 1;
}

bool is_par(int numero) {
    if(numero % 2 == 0)
        return true;
    return false;
}

bool is_impar(int numero) {
    if(numero % 2 == 1)
        return true;
    return false;
}

void print_message(std::string message) {
    std::cout << message << std::endl;
}

void print_n_message(std::string message, int n) {
    for(int i = 0; i < n; i++)
        print_message(message);
}