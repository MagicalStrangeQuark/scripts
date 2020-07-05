#include <iostream>
#include <locale.h>

const int COMPARATOR = 10;

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "portuguese");

	unsigned int num = 10;

	if ( num >= COMPARATOR ) {
		std::cout << "Equal or greater than " << COMPARATOR << std::endl;
	} else {
		std::cout << "Less than " << COMPARATOR << std::endl;
	}

	std::cout << "Filename: " << __FILE__ << std::endl;

	std::cout << "Line: " << __LINE__ << std::endl;
	
	return 0;
}