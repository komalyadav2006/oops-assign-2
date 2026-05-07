#include <iostream>
using namespace std;

// Function with default arguments
float simpleInterest(float principal = 1000, float rate = 5, float time = 2) {
    return (principal * rate * time) / 100;
}

int main() {
    cout << "Using default values: " << simpleInterest() << endl;

    cout << "Providing principal only: " << simpleInterest(2000) << endl;

    cout << "Providing principal and rate: " << simpleInterest(2000, 7) << endl;

    cout << "Providing all values: " << simpleInterest(2000, 7, 3) << endl;

    return 0;
}