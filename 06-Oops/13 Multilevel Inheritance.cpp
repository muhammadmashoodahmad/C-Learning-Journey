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

    void displayStudent() {
        cout << "Roll Number: " << rollNo << endl;
    }
};

class GraduateStudent : public Student {
public:
    string researchTopic;

    void displayGraduate() {
        displayPerson();
        displayStudent();

        cout << "Research Topic: " << researchTopic << endl;
    }
};

int main() {
    GraduateStudent g1;

    g1.name = "Ahmad";
    g1.rollNo = 101;
    g1.researchTopic = "Artificial Intelligence";

    g1.displayGraduate();

    return 0;
}
