#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& arr) {
    int count0 = 0, count1 = 0, count2 = 0;

    // Count 0s, 1s and 2s
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        else
            count2++;
    }

    // Put 0s
    for (int i = 0; i < count0; i++)
        arr[i] = 0;

    // Put 1s
    for (int i = count0; i < count0 + count1; i++)
        arr[i] = 1;

    // Put 2s
    for (int i = count0 + count1; i < arr.size(); i++)
        arr[i] = 2;
}

int main() {
    vector<int> arr = {2, 0, 2, 1, 1, 0};

    sortArray(arr);

    for (int x : arr)
        cout << x << " ";

    return 0;
}