  #include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 1};

    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            count++;
            maxCount = max(maxCount, count);
        }
        else {
            count = 0;
        }
    }

    cout << maxCount;

    return 0;
}