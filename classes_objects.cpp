// Topic: Classes & Objects
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    void drive() {
        cout << brand << " is driving at " << speed << " km/h" << endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.speed = 120;
    myCar.drive();

    Car anotherCar;
    anotherCar.brand = "Honda";
    anotherCar.speed = 100;
    anotherCar.drive();

    return 0;
}
