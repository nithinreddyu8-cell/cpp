#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {

        // First element
        if (i == 0) {
            if (nums[i] > nums[i + 1])
                return i;
        }

        // Last element
        else if (i == n - 1) {
            if (nums[i] > nums[i - 1])
                return i;
        }

        // Middle elements
        else {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
                return i;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};

    int index = findPeakElement(nums);

    cout << "Peak element index: " << index << endl;
    cout << "Peak element: " << nums[index] << endl;

    return 0;
}