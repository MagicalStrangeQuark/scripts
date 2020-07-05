#include <iostream>
#include <locale.h>

const std::string CARNE = "CARNE";
const std::string PLANTAS = "PLANTAS";

class Animal
{
protected:
    std::string food;

public:
    explicit Animal(std::string food)
    {
        this->food = food;
    }

    virtual std::string getFood()
    {
        return this->food;
    }
};

class Lion : public Animal
{
public:
    using Animal::Animal;
};

class Zebra : public Animal
{
public:
    using Animal::Animal;
};

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");

    Lion Lion(CARNE);
    Zebra Zebra(PLANTAS);

    std::cout << Lion.getFood() << std::endl;
    std::cout << Zebra.getFood() << std::endl;

    return 0;
}
