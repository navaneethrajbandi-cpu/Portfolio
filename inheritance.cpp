// Topic: Inheritance
#include <iostream>
using namespace std;

class Animal {
public:
    string name;

    Animal(string n) : name(n) {}

    void eat() {
        cout << name << " is eating" << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {}

    void bark() {
        cout << name << " says Woof!" << endl;
    }
};

int main() {
    Dog myDog("Rex");
    myDog.eat();
    myDog.bark();

    return 0;
}
