#include <iostream>
#include <locale.h>

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "portuguese");

	int FirstValue = 10, SecondValue = 20;

	std::cout << (int)(FirstValue / SecondValue) << std::endl; /* Valor sem casas decimais*/

	std::cout << ((float)FirstValue / SecondValue) << std::endl; /* Valor com ponto flutuante*/

	std::cout << FirstValue++ << std::endl; /* Exibe o valor da variável e após isso incrementa a mesma em um */

	std::cout << ++FirstValue << std::endl; /* Exibe o valor da variável mais um e depois exibe esse resultado */

	std::cout << FirstValue % 10 << std::endl; /* Exibe o resto da divisão de 12 por 10, ou seja, 2 */
}
