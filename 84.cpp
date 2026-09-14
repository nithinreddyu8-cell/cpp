#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 1, 2};
    int n = 6;

    int hash[10] = {0};

    // Precompute
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    // Query
    int number;
    cout << "Enter number: ";
    cin >> number;

    cout << "Frequency = " << hash[number] << endl;

    return 0;
}