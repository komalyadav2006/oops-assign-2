#include <iostream>
using namespace std;

class Number {
    int x;

public:
    Number() {
        x = 0;
        cout << "Default Constructor: " << x << endl;
    }

    Number(int a) {
        x = a;
        cout << "Parameterized Constructor: " << x << endl;
    }

    Number(Number &n) {
        x = n.x;
        cout << "Copy Constructor: " << x << endl;
    }

    Number(int a, int b) {
        x = a + b;
        cout << "Overloaded Constructor (sum): " << x << endl;
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    Number n1;
    Number n2(10);
    Number n3(n2);
    Number n4(5, 7);

    int val;
    cout << "Enter value for dynamic initialization: ";
    cin >> val;
    Number n5(val);

    n5.display();

    return 0;
}