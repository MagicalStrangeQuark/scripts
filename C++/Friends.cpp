#include <iostream>
#include <locale.h>

class Cor {
protected:
    int id;

public:
    std::string show();

    void set_id(int id);

    int get_id();
};

class Color {
public:
    friend class Cor;

    std::string show(Cor *c)
    {
        return c->show();
    }

    std::string show()
    {
        return "Bonjour le Monde, Color";
    }
};

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");

    Cor gen_cor, *cor = &gen_cor;
    Color gen_color, *color = &gen_color;

    std::cout << cor->show() << std::endl;
    std::cout << color->show(cor) << std::endl;

    cor->set_id(15);

    std::cout << cor->get_id() << std::endl;

    return 0;
}

void Cor::set_id(int id)
{
    this->id = id;
}

int Cor::get_id()
{
    return this->id; 
}

std::string Cor::show()
{
    return "Bonjour le Monde, Cor";
}