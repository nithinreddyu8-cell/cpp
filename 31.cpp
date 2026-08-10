#include <iostream>

class Number
{
public:
    int value;

    Number& operator++()
    {
        ++value;
        return *this;
    }
};

int main()
{
    Number n;
    n.value = 5;

    ++n;

    std::cout << n.value;
}