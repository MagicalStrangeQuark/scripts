#include <iostream>
#include <locale.h>

const std::string NOME = "John Doe";
const int IDADE = 35;

class Person
{
private:
	std::string name;
	int age;

public:
	Person(std::string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	~Person()
	{
		std::cout << "destructor of this class" << std::endl;
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

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "portuguese");

	Person person(NOME, IDADE);

	std::cout << person.get_name() << std::endl;
	std::cout << person.get_age() << std::endl;

	return 0;
}
