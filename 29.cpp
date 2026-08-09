#include <iostream>
#include <vector>

void print(const std::vector<int> nums)
{
    for  (int n : nums)
        std::cout << n << ' ';
}

int main()
{
    std::vector<int> nums {10, 20, 30};

    print(nums);
}