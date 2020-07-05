#include <iostream>
#include <locale.h>

/* an enum type can be used to #define multiple constants */
enum
{
    MAXITEM = 8,
    MAXTITLE = 20,
    MAXEMP = 128,
    FIRSTITEM = 0
};

typedef struct tb_item
{
private:
    int id;
    std::string ds_type;
    std::string ds_brand;
    std::string ds_color;

public:
    void set_id(int id);
    void set_type(std::string type);
    void set_brand(std::string brand);
    void set_color(std::string color);

    int get_id();
    std::string get_type();
    std::string get_brand();
    std::string get_color();
} Item;

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");

    Item n_item, *z_item = new Item[MAXITEM];

    /* First possibility */
    n_item.set_id(1);
    n_item.set_type("parafuso");
    n_item.set_brand("fixit");
    n_item.set_color("prata");

    std::cout << n_item.get_id() << std::endl;
    std::cout << n_item.get_type() << std::endl;
    std::cout << n_item.get_brand() << std::endl;
    std::cout << n_item.get_color() << std::endl;

    /* Second possibility */
    z_item[FIRSTITEM].set_id(2);
    z_item[FIRSTITEM].set_type("parafuso");
    z_item[FIRSTITEM].set_brand("fixit");
    z_item[FIRSTITEM].set_color("prata");

    std::cout << z_item[FIRSTITEM].get_id() << std::endl;
    std::cout << z_item[FIRSTITEM].get_type() << std::endl;
    std::cout << z_item[FIRSTITEM].get_brand() << std::endl;
    std::cout << z_item[FIRSTITEM].get_color() << std::endl;

    /* Third possibility */
    (z_item + 1)->set_id(2);
    (z_item + 1)->set_type("parafuso");
    (z_item + 1)->set_brand("fixit");
    (z_item + 1)->set_color("prata");

    std::cout << (z_item + 1)->get_id() << std::endl;
    std::cout << (z_item + 1)->get_type() << std::endl;
    std::cout << (z_item + 1)->get_brand() << std::endl;
    std::cout << (z_item + 1)->get_color() << std::endl;

    return 0;
}

void Item::set_id(int id)
{
    this->id = id;
}

void Item::set_type(std::string type)
{
    this->ds_type = type;
}

void Item::set_brand(std::string brand)
{
    this->ds_brand = brand;
}

void Item::set_color(std::string color)
{
    this->ds_color = color;
}

int Item::get_id()
{
    return id;
}

std::string Item::get_type()
{
    return ds_type;
}

std::string Item::get_brand()
{
    return ds_brand;
}

std::string Item::get_color()
{
    return ds_color;
}