#include <iostream>
#include <cmath>
#include <locale.h>

class Math
{
public:
	static int fibonacci(unsigned int n);
};

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "portuguese");

	for (int i = 1; i < 32; i++)
	{
		std::cout << Math::fibonacci(i) << std::endl;
	}

	return 0;
}

int Math::fibonacci(unsigned int n)
{
	return (1 / sqrt(5)) * (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n));
}