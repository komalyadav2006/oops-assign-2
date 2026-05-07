#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

float area(float radius) {
    return 3.14 * radius * radius;
}

int area(int length, int breadth) {
    return length * breadth;
}

int volume(int side) {
    return side * side * side;
}

float volume(float radius, float height) {
    return 3.14 * radius * radius * height;
}

int main() {
    cout << "Sum of 2 numbers: " << sum(5, 10) << endl;
    cout << "Sum of 3 numbers: " << sum(5, 10, 15) << endl;

    cout << "Area of Circle: " << area(3.5f) << endl;
    cout << "Area of Rectangle: " << area(4, 6) << endl;

    cout << "Volume of Cube: " << volume(3) << endl;
    cout << "Volume of Cylinder: " << volume(3.0f, 5.0f) << endl;

    return 0;
}