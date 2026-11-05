#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    float marks;

    void displayInfo() {
        cout << "\nStudent Name: " << name;
        cout << "\nRoll Number: " << rollNo;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s1;
    Student s2;

    s1.name = "Ali";
    s1.rollNo = 101;
    s1.marks = 85.5;

    s2.name = "Ahmad";
    s2.rollNo = 102;
    s2.marks = 90.5;

    s1.displayInfo();
    s2.displayInfo();

    return 0;
}
