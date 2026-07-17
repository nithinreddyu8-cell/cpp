//basics of encapsulatio in c++
#include <iostream>
using namespace std;

class Student {
private:
    string name;   // private data

public:
    void setName(string n) {   // setter
        name = n;
    }

    string getName() {         // getter
        return name;
    }
};

int main() {
    Student s;

    s.setName("Nithin");
    cout << "Student name: " << s.getName();

    return 0;
}