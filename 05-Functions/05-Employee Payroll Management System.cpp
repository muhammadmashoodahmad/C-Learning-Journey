#include <iostream>
using namespace std;

double calculateSalary(double basicSalary)
{
    return basicSalary;
}

double calculateSalary(double basicSalary, double bonus)
{
    return basicSalary + bonus;
}

double calculateOvertime(double hours, double rate)
{
    return hours * rate;
}

void displaySalary(double salary)
{
    cout << "\n===== SALARY DETAILS =====" << endl;
    cout << "Final Salary: Rs. " << salary << endl;
}

int main()
{
    double basicSalary, bonus, hours, rate;
    double salary, overtime, finalSalary;
    int choice;

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "1. Salary without Bonus" << endl;
    cout << "2. Salary with Bonus" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            salary = calculateSalary(basicSalary);
            break;

        case 2:
            cout << "Enter Bonus: ";
            cin >> bonus;

            salary = calculateSalary(basicSalary, bonus);
            break;

        default:
            cout << "Invalid Choice!" << endl;
            return 0;
    }

    cout << "Enter Overtime Hours: ";
    cin >> hours;

    cout << "Enter Overtime Rate: ";
    cin >> rate;

    overtime = calculateOvertime(hours, rate);

    finalSalary = salary + overtime;

    displaySalary(finalSalary);

    return 0;
}
