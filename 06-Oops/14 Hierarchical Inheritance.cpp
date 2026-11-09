#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void displayPerson() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age << endl;
    }
};

class Student : public Person {
public:
    int rollNo;
    string department;

    void displayStudent() {
        displayPerson();

        cout << "Roll Number: " << rollNo;
        cout << "\nDepartment: " << department << endl;
    }
};

class Teacher : public Person {
public:
    int employeeID;
    string subject;

    void displayTeacher() {
        displayPerson();

        cout << "Employee ID: " << employeeID;
        cout << "\nSubject: " << subject << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Ahmad";
    s1.age = 19;
    s1.rollNo = 101;
    s1.department = "Computer Science";

    Teacher t1;
    t1.name = "Ali";
    t1.age = 35;
    t1.employeeID = 501;
    t1.subject = "Programming";

    cout << "\nStudent Information:";
    s1.displayStudent();

    cout << "\nTeacher Information:";
    t1.displayTeacher();

    return 0;
}
