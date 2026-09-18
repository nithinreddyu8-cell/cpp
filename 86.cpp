#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = 5;

    int ans = 0;

    for (int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }

    cout << "Number appearing once: " << ans;

    return 0;
}