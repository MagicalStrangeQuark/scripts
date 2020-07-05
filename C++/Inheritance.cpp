#include <iostream>
#include <locale.h>

class Animal
{
protected:
    std::string name = "Not Specified";
    int age = 0;

public:
    void set_name(std::string name)
    {
        this->name = name;
    }

    void set_age(int age)
    {
        this->age = age;
    }

    std::string get_name()
    {
        return this->name;
    }

    int get_age()
    {
        return this->age;
    }
};

class Dog : public Animal
{
};

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");

    Dog dog;

    dog.set_age(12);
    dog.set_name("Louie");

    std::cout << dog.get_age() << std::endl;
    std::cout << dog.get_name() << std::endl;

    return 0;
}