#include<iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A\n";
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B\n";
    }
};

class C : public A {
public:
    void showC() {
        cout << "Class C\n";
    }
};

int main() {
    B obj1;
    C obj2;

    obj1.showA();
    obj1.showB();

    obj2.showA();
    obj2.showC();

    return 0;
}