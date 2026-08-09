#include <array>
#include <iostream>

void printArray( std::array<int, 5>& arr)
{
    arr[0]=30;
    for (int x : arr)
        std::cout << x << ' ';
}

int main()
{
    std::array<int, 5> arr{10, 20, 30, 40, 50};
    std::array<int,5>&arr2=arr;

    printArray(arr);
    printArray(arr2);
}