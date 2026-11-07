#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    void setData(string name, int employeeID, double salary) {
        this->name = name;
        this->employeeID = employeeID;
        this->salary = salary;
    }

    void displayInfo() {
        cout << "\nEmployee Name: " << this->name;
        cout << "\nEmployee ID: " << this->employeeID;
        cout << "\nSalary: " << this->salary << endl;
    }
};

int main() {
    Employee e1, e2;

    e1.setData("Ali", 101, 50000);
    e2.setData("Ahmad", 102, 65000);

    cout << "\nEmployee 1:";
    e1.displayInfo();

    cout << "\nEmployee 2:";
    e2.displayInfo();

    return 0;
}
