#include <iostream>
using namespace std;

class Interest {
    float p, r, t, si;

public:
    Interest(float principal, float rate, float time) {
        p = principal;
        r = rate;
        t = time;
        si = (p * r * t) / 100;
    }

    void display() {
        cout << "Simple Interest: " << si << endl;
    }
};

int main() {
    float p, r, t;

    cout << "Enter Principal, Rate and Time: ";
    cin >> p >> r >> t;

    Interest obj(p, r, t);

    obj.display();

    return 0;
}