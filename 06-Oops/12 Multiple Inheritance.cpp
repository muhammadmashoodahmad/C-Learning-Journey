#include <iostream>
using namespace std;

class PersonalInfo {
public:
    string name;
    int age;

    void displayPersonal() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age << endl;
    }
};

class AcademicInfo {
public:
    string department;
    float cgpa;

    void displayAcademic() {
        cout << "\nDepartment: " << department;
        cout << "\nCGPA: " << cgpa << endl;
    }
};

class Student : public PersonalInfo, public AcademicInfo {
public:
    int rollNo;

    void displayStudent() {
        displayPersonal();
        displayAcademic();

        cout << "\nRoll Number: " << rollNo << endl;
    }
};

int main() {
    Student s1;

    s1.name = "Ahmad";
    s1.age = 19;
    s1.department = "Computer Science";
    s1.cgpa = 3.5;
    s1.rollNo = 101;

    s1.displayStudent();

    return 0;
}
