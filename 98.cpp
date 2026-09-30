#include <bits/stdc++.h>
using namespace std;

pair<int, int> getFloorCeil(vector<int>& arr, int x) {
    int low = 0;
    int high = arr.size() - 1;

    int floor = -1;
    int ceil = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            floor = arr[mid];
            ceil = arr[mid];
            break;
        }
        else if (arr[mid] < x) {
            floor = arr[mid];   // possible floor
            low = mid + 1;
        }
        else {
            ceil = arr[mid];    // possible ceil
            high = mid - 1;
        }
    }

    return {floor, ceil};
}

int main() {
    vector<int> arr = {1, 2, 4, 6, 8, 10};
    int x = 5;

    pair<int, int> ans = getFloorCeil(arr, x);

    cout << "Floor = " << ans.first << endl;
    cout << "Ceil = " << ans.second << endl;

    return 0;
}