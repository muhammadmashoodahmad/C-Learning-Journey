#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() {
        cout << "General Employee Salary: 30000" << endl;
    }
};

class Manager : public Employee {
public:
    void calculateSalary() override {
        cout << "Manager Salary: 80000" << endl;
    }
};

class Developer : public Employee {
public:
    void calculateSalary() override {
        cout << "Developer Salary: 60000" << endl;
    }
};

int main() {
    Employee* ptr;

    Manager m1;
    Developer d1;

    ptr = &m1;
    ptr->calculateSalary();

    ptr = &d1;
    ptr->calculateSalary();

    return 0;
}
