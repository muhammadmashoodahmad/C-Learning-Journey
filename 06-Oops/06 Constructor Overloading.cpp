#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    string department;

public:
    Student() {
        name = "Not Assigned";
        rollNo = 0;
        department = "Not Assigned";
    }

    Student(string n) {
        name = n;
        rollNo = 0;
        department = "Not Assigned";
    }

    Student(string n, int r, string d) {
        name = n;
        rollNo = r;
        department = d;
    }

    void displayInfo() {
        cout << "\nStudent Name: " << name;
        cout << "\nRoll Number: " << rollNo;
        cout << "\nDepartment: " << department << endl;
    }
};

int main() {
    Student s1;

    Student s2("Ali");

    Student s3("Ahmad", 103, "Computer Science");

    cout << "\nStudent 1:";
    s1.displayInfo();

    cout << "\nStudent 2:";
    s2.displayInfo();

    cout << "\nStudent 3:";
    s3.displayInfo();

    return 0;
}
