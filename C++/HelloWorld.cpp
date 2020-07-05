#include <iostream>
#include <locale.h>

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "portuguese");

	std::cout << "⚙ Hello, Ŵorld! ⚙" << std::endl;

	return 0;
}
