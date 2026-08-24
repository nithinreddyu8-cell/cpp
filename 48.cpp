#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum = n * (n + 1) / 2;

    int actualSum = 0;
    for (int x : nums) {
        actualSum += x;
    }

    return sum - actualSum;
}

int main() {
    vector<int> nums = {3, 0, 1};

    cout << missingNumber(nums);

    return 0;
}