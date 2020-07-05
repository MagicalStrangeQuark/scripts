#include <iostream>
#include <locale.h>
#include <cstdlib>
#include "BD.cpp"

std::string FIELDS[] = {"NOME", "CPF", "TELEFONE"};

int main(void)
{
	setlocale(LC_ALL, "PORTUGUESE");

	for (int i = 0; i < 3; i++)
	{
		std::cout << BD::write("BD.CSV", FIELDS[i] + ";") << std::endl;
	}

	return 0;
}
