#include <iostream>
using namespace std;

class Person {
public:
    string name;

protected:
    int age;

private:
    int password;

public:
    void setData(string n, int a, int p) {
        name = n;
        age = a;
        password = p;
    }
};

class Student : public Person {
public:
    int rollNo;

    void displayInfo() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nRoll Number: " << rollNo << endl;
    }
};

int main() {
    Student s1;

    s1.setData("Ahmad", 19, 1234);
    s1.rollNo = 101;

    s1.displayInfo();

    return 0;
}
