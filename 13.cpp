#include<iostream>
using namespace std;

class Demo {
public:
    // Function with 1 parameter
    void add(int a) {
        cout << "Single value: " << a << endl;
    }

    // Function with 2 parameters
    void add(int a, int b) {
        cout << "Sum (int): " << a + b << endl;
    }

    // Function with 3 parameters
    void add(int a, int b, int c) {
        cout << "Sum (3 int): " << a + b + c << endl;
    }

    // Function with float parameters
    void add(float a, float b) {
        cout << "Sum (float): " << a + b << endl;
    }
};

int main() {
    Demo obj;

    obj.add(5);
    obj.add(3, 4);
    obj.add(1, 2, 3);
    obj.add(2.5f, 3.5f);

    return 0;
}