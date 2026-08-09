#include <iostream>

struct Fraction
{
    int numerator { 0 };
    int denominator { 1 }; // class invariant: should never be 0
};

void printFractionValue(const Fraction& f)
{
     std::cout << f.numerator / f.denominator << '\n';
}

int main()
{
    Fraction n { 5, 5};   // create a Fraction with a zero denominator
    printFractionValue(n); // cause divide by zero error

    return 0;
}