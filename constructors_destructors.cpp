// Topic: Constructors & Destructors
#include <iostream>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
        cout << name << " has been created (constructor called)" << endl;
    }

    ~Student() {
        cout << name << " is being destroyed (destructor called)" << endl;
    }
};

int main() {
    Student s1("Alex");
    Student s2("Sam");

    cout << "End of main" << endl;
    return 0;
}
