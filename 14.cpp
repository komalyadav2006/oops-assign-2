#include<iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "This is Base class show function\n";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "This is Derived class show function\n";
    }
};

int main() {
    Base* ptr;
    Derived obj;

    ptr = &obj;  // base pointer pointing to derived object
    ptr->show(); // runtime polymorphism

    return 0;
}