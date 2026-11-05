#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    string name;
    int rollNo;

    void setMarks(int m) {
        if (m >= 0 && m <= 100) {
            marks = m;
        } else {
            cout << "Invalid Marks!\n";
        }
    }

    void displayInfo() {
        cout << "\nStudent Name: " << name;
        cout << "\nRoll Number: " << rollNo;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s1;

    s1.name = "Ali";
    s1.rollNo = 101;

    s1.setMarks(85);

    s1.displayInfo();

    return 0;
}
