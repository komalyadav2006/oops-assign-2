#include <iostream>
using namespace std;

class Demo {
    int x;

public:
    Demo(int val = 0) {
        x = val;
    }

    Demo operator+(Demo d) {
        return Demo(x + d.x);
    }

    Demo operator-(Demo d) {
        return Demo(x - d.x);
    }

    Demo operator++() {
        return Demo(++x);
    }

    bool operator==(Demo d) {
        return x == d.x;
    }

    friend ostream& operator<<(ostream &out, Demo d) {
        out << d.x;
        return out;
    }
};

int main() {
    Demo d1(10), d2(5), d3;

    d3 = d1 + d2;
    cout << "Addition: " << d3 << endl;

    d3 = d1 - d2;
    cout << "Subtraction: " << d3 << endl;

    d3 = ++d1;
    cout << "Increment: " << d3 << endl;

    if (d1 == d2)
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;

    cout << "Output using << operator: " << d1 << endl;

    return 0;
}