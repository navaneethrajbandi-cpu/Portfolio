// Topic: Polymorphism (virtual functions)
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square" << endl;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Circle();
    shapes[1] = new Square();

    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
    }

    delete shapes[0];
    delete shapes[1];

    return 0;
}
