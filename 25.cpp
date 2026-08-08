#include <iostream>

template <typename T>
T max(T x, T y)
{
    return (x > y) ? y : x;
}

int main()
{
    // we've explicitly specified type double, so the compiler won't use template argument deduction
    std::cout << max<double>(2, 3.5) << '\n';

    return 0;
}