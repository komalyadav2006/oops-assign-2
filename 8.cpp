#include<iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A function\n";
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B function\n";
    }
};

int main() {
    B obj;
    obj.showA();
    obj.showB();
    return 0;
}