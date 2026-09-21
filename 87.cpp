#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {

            if (arr[i] + arr[j] == target) {
                cout << arr[i] << " " << arr[j];
                return 0;
            }
        }
    }

    cout << "No pair found";

    return 0;
}N