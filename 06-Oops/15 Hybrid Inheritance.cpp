#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void displayPerson() {
        cout << "\nName: " << name << endl;
    }
};

class Student : public Person {
public:
    int rollNo;
};

class Employee : public Person {
public:
    int employeeID;
};

class TeachingAssistant : public Student, public Employee {
public:
    string department;

    void displayInfo() {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nEmployee ID: " << employeeID;
        cout << "\nDepartment: " << department << endl;
    }
};

int main() {
    TeachingAssistant t1;

    t1.Student::name = "Ahmad";
    t1.rollNo = 101;
    t1.employeeID = 501;
    t1.department = "Computer Science";

    t1.Student::displayPerson();
    t1.displayInfo();

    return 0;
}
