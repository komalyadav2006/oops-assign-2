#include<iostream>
using namespace std;

class Engine {
    int horsepower;
public:
    Engine(int hp) {
        horsepower = hp;
    }

    void showEngine() {
        cout << "Engine Horsepower: " << horsepower << endl;
    }
};

class Car {
    string model;
    Engine eng;

public:
    Car(string m, int hp) : eng(hp) {
        model = m;
    }

    void showCar() {
        cout << "Car Model: " << model << endl;
        eng.showEngine();
    }
};

int main() {
    Car c("BMW", 300);
    c.showCar();
    return 0;
}