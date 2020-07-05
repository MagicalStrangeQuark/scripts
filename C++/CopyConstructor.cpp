#include <iostream>
#include <locale.h>

class Point
{
private:
    int x = 0, y = 0;
    std::string str;

public:
    Point(int x1 = 0, int y1 = 0)
    {
        this->str = "Original Object";

        x = x1;
        y = y1;
    }

    // Copy constructor
    Point(const Point &p2)
    {
        this->str = "Creating copy constructor...";

        x = p2.x + 10;
        y = p2.y + 15;
    }

    const int getX()
    {
        return x;
    }

    const int getY()
    {
        return y;
    }

    const std::string getStr()
    {
        return str;
    }
};

int main(int argc, char *argv[])
{
    Point p1(10, 15); // Normal constructor is called here
    Point p2 = p1;    // Copy constructor is called here

    // Let us access values assigned by constructors
    std::cout << "p1::x = " << p1.getX() << " | "
              << "p1::y = " << p1.getY() << " | "
              << "p1::str = " << p1.getStr() << std::endl;

    std::cout << "p2::x = " << p2.getX() << " | "
              << "p2::y = " << p2.getY() << " | "
              << "p2::str = " << p2.getStr() << std::endl;

    return 0;
}
