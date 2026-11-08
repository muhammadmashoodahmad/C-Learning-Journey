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

int main() {
    Student s1;

    s1.name = "Ahmad";
    s1.age = 19;
    s1.rollNo = 101;
    s1.department = "Computer Science";

    s1.displayStudent();

    return 0;
}
