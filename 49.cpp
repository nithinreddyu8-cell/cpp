#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0;

        for (int i = 0; i <= n; i++) {
            xor1 = xor1 ^ i;
        }

        for (int x : nums) {
            xor1 = xor1 ^ x;
        }

        return xor1;
    }
};

int main() {
    vector<int> nums = {3, 0, 1};

    Solution obj;

    cout << obj.missingNumber(nums);

    return 0;
}