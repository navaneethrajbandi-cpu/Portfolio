// Topic: Abstraction (abstract classes / interfaces)
#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void startEngine() = 0;
};

class Car : public Vehicle {
public:
    void startEngine() override {
        cout << "Car engine started with a key" << endl;
    }
};

class Motorcycle : public Vehicle {
public:
    void startEngine() override {
        cout << "Motorcycle engine started with a kick" << endl;
    }
};

int main() {
    Vehicle* v1 = new Car();
    Vehicle* v2 = new Motorcycle();

    v1->startEngine();
    v2->startEngine();

    delete v1;
    delete v2;
    return 0;
}
