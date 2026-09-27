#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& arr) {
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    // Count 0, 1 and 2
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        else
            count2++;
    }

    // Put 0s
    int i = 0;
    while (count0--) {
        arr[i++] = 0;
    }

    // Put 1s
    while (count1--) {
        arr[i++] = 1;
    }

    // Put 2s
    while (count2--) {
        arr[i++] = 2;
    }
}

int main() {
    vector<int> arr = {2, 0, 2, 1, 1, 0};

    sortArray(arr);

    for (int x : arr)
        cout << x << " ";

    return 0;
}