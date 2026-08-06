#include <iostream>

void count()
{
     int x = 0;

    x++;

    std::cout << x << '\n';
}

int main()
{
    count();
    count();
    count();
}