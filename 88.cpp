#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            cout << "Not Sorted";
            return 0;
        }
    }

    cout << "Sorted";
}