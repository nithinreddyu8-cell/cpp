#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {

        // Check left side
        if (i > 0 && nums[i] <= nums[i - 1])
            continue;

        // Check right side
        if (i < n - 1 && nums[i] <= nums[i + 1])
            continue;

        return i;  // Peak found
    }

    return -1;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};

    cout << findPeakElement(nums);

    return 0;
}