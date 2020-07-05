#include <iostream>
#include <locale.h>

const int LIMIT = 100;
const int INIT = -1;

class Stack
{
private:
    int *vect = new int[100];

    int top = INIT;

public:
    Stack()
    {
        std::cout << "Started..." << std::endl;
    }

    ~Stack()
    {
        delete[] vect;

        std::cout << "Done..." << std::endl;
    }

    int getSize()
    {
        return this->top + 1;
    }

    void add(int element)
    {
        if (top < LIMIT)
        {
            std::cout << "ADDING ELEMENT ==> " << element << std::endl;

            this->vect[++top] = element;
        }
    }

    void remove()
    {
        if (top > INIT && top <= LIMIT)
        {
            std::cout << "REMOVING ELEMENT" << std::endl;
            top--;
        }
    }

    int getTop()
    {
        return this->vect[top];
    }

    bool isEmpty()
    {
        return (bool)(top == INIT);
    }
};

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");

    Stack *pointerStack = new Stack();

    pointerStack->add(10);

    std::cout << "SIZE ==> " << pointerStack->getSize() << std::endl;

    std::cout << "TOP  ==> " << pointerStack->getTop() << std::endl;

    pointerStack->add(15);

    std::cout << "TOP  ==> " << pointerStack->getTop() << std::endl;

    pointerStack->remove();

    std::cout << "TOP  ==> " << pointerStack->getTop() << std::endl;

    std::cout << "IS EMPTY?  ==> " << (bool)pointerStack->isEmpty() << std::endl;

    pointerStack->remove();

    std::cout << "IS EMPTY?  ==> " << (bool)pointerStack->isEmpty() << std::endl;

    std::cout << "TOP  ==> " << pointerStack->getTop() << std::endl;

    pointerStack->remove();

    return 0;
}