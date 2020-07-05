#include <iostream>

class Item
{
    private:
        int quantity;
        double price;

    protected:

    public:
        /* Parameterized Constructor */
        Item(int quantity, double price) 
        { 
            this->quantity = quantity; 

            this->price = price;
        }
        void set_quantity(int quantity)
        {
            this->quantity = quantity;
        }
        void set_price(double price)
        {
            this->price = price;
        }
        int get_quantity()
        {
            return quantity;
        }
        double get_price()
        {
            return price;
        }
};

void set_quantity(Item *item, int quantity)
{
    item->set_quantity(quantity);
}

void set_quantity_reference(Item& item, int quantity)
{
    item.set_quantity(quantity);
}

void set_quantity(Item item)
{
    item.set_quantity(600);
}

Item *create_item(Item *item, int quantity, double price);

int main()
{
    setlocale(LC_ALL, "portuguese");

    Item n_item(0, 0), r_item(150, 25.30), x_item(10, 25.75), *point_x_item = &x_item;
    Item k_item(0, 0), *y_item = create_item(&k_item, 8, 64);

    /* Seta-se o valor original para o atributo quantity para 100 */
    n_item.set_quantity(100);
    n_item.set_price(10.75);

    /* Passagem por referência modificará o valor do objeto */
    set_quantity(&n_item, 600);
    /* Passagem por referência modificará o valor do objeto, similar ao examplo da linha :63 */
    set_quantity_reference(n_item, 850);

    /* Passagem por valor não modificará o valor do objeto*/
    set_quantity(n_item); 

    std::cout << n_item.get_quantity() << std::endl;
    std::cout << n_item.get_price() << std::endl;

    std::cout << r_item.get_quantity() << std::endl;
    std::cout << r_item.get_price() << std::endl;

    std::cout << point_x_item->get_quantity() << std::endl;
    std::cout << point_x_item->get_price() << std::endl;

    std::cout << y_item->get_quantity() << std::endl;
    std::cout << y_item->get_price() << std::endl;

    return 0;
}

Item *create_item(Item *item, int quantity, double price)
{
    item->set_quantity(quantity);
    item->set_price(price);

    /* Returns a object of Item's class by reference*/
    return item;
}