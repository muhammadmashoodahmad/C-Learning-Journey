#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    Student(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
    }

    void displayInfo() {
        cout << "\nStudent Name: " << name;
        cout << "\nRoll Number: " << rollNo;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s1("Ali", 101, 85.5);
    Student s2("Ahmad", 102, 90.5);
    Student s3("Hamza", 103, 78.5);

    s1.displayInfo();
    s2.displayInfo();
    s3.displayInfo();

    return 0;
}
