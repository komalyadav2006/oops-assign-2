#include <iostream>
using namespace std;

class Student {
    int id;
    static int count;

public:
    Student() {
        count++;
        id = count;
    }

    void display() {
        cout << "Student ID: " << id << endl;
    }

    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student s1, s2, s3;

    s1.display();
    s2.display();
    s3.display();

    Student::showCount();

    return 0;
}