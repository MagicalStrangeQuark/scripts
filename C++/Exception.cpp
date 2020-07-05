#include <iostream>
#include <locale.h>
#include <cstdio>

double division(double x, double y)
{
    if (y == 0)
    {
        throw "Division by Zero.";
    }

    return x / y;
}

int factorial(int n)
{
    if (n < 0)
    {
        throw "Negative Number.";
    }

    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");

    try
    {
        std::cout << factorial(-1) << std::endl;

        std::cout << division(10.0, 0) << std::endl;
    }
    catch (const char *e)
    {
        std::cerr << "Error: " << e << std::endl;
    }
    catch (...)
    {
        std::cerr << "An Unexpected Error Has Occurred.";
    }

    return 0;
}