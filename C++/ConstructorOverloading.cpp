#include <iostream>
#include <locale.h>

const std::string COUNTRY = "Brazil";

class Country {
    protected:
        int id;
        std::string country;
    public:
        Country(int id, std::string country) {
            this->id = id;
            this->country = country;
        }

        Country(std::string country) {
            this->country = country;
        }

        std::string get_country() {
            return this->country;
        }
};

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "portuguese");

    Country country(COUNTRY);

	std::cout << country.get_country() << std::endl;

    return 0;
}