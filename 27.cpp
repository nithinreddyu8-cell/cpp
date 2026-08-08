#include <iostream>
#include <optional>

std::optional<int> getNumber(bool giveNumber)
{
    if (giveNumber)
        return 10;

    return std::nullopt;  // no value
}

int main()
{
    auto result = getNumber(false);

    if (result)
        std::cout << *result;
    else
        std::cout << "No value";
}