#include <iostream>
#include <locale.h>
#include "module.h"

// to compile this code g++ main_module.cpp -o main_module module.h module.cpp && ./main_module
int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "portuguese");

    std::cout << sum(3,4) << std::endl; 
    
    print("testing...");

    return 0;
}