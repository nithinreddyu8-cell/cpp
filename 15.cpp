#include <iostream>
using namespace std;

int main() {
    int numbers[5];

    cout << "Enter 5 numbers:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    cout << "\nThe numbers are: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    cout << "\nSum = " << sum << endl;
    cout << "Average = " << sum / 5.0 << endl;

    return 0;
}