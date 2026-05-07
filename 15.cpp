#include<iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
    float r;
public:
    Circle(float radius) {
        r = radius;
    }

    void area() {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape {
    float l, b;
public:
    Rectangle(float length, float breadth) {
        l = length;
        b = breadth;
    }

    void area() {
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

int main() {
    Shape* ptr;

    Circle c(5);
    Rectangle r(4, 6);

    ptr = &c;
    ptr->area();

    ptr = &r;
    ptr->area();

    return 0;
}