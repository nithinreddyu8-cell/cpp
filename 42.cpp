#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> students;

    // Adding elements
    students[1] = "Nithin";
    students[2] = "Rahul";
    students[3] = "Arjun";

    // Accessing an element
    cout << students[1] << endl;

    // Printing all elements
    for (auto x : students) {
        cout << x.first << " : " << x.second << endl;
    }

    return 0;
}