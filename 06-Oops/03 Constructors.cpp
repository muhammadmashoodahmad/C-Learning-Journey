#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    Student() {
        name = "Unknown";
        rollNo = 0;
        marks = 0;
    }

    void setData(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
    }

    void displayInfo() {
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << rollNo;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s1;
    Student s2;

    s1.setData("Ali", 101, 85.5);
    s2.setData("Ahmad", 102, 90.5);

    s1.displayInfo();
    s2.displayInfo();

    return 0;
}
