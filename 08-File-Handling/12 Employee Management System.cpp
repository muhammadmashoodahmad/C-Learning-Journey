
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;

void addEmployee()
{
    ofstream file("Employee.txt", ios::app);

    if (!file.is_open())
    {
        cout << "\nFile could not be opened!\n";
        return;
    }

    string name;
    int id;
    double salary;

    cout << "\nEnter Employee Name: ";
    cin >> name;

    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Salary: ";
    cin >> salary;

    file << name << " " << id << " " << salary << endl;

    file.close();

    cout << "\nEmployee Added Successfully!\n";
}

void viewEmployees()
{
    ifstream file("Employee.txt");

    if (!file.is_open())
    {
        cout << "\nNo Employee Records Found!\n";
        return;
    }

    string name;
    int id;
    double salary;
    bool found = false;

    cout << "\n===== Employee Records =====\n";

    while (file >> name >> id >> salary)
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
        cout << "--------------------------\n";

        found = true;
    }

    file.close();

    if (!found)
    {
        cout << "No Employee Records Found!\n";
    }
}

void searchEmployee()
{
    ifstream file("Employee.txt");

    if (!file.is_open())
    {
        cout << "\nNo Employee Records Found!\n";
        return;
    }

    string name;
    int id, searchID;
    double salary;
    bool found = false;

    cout << "\nEnter Employee ID: ";
    cin >> searchID;

    while (file >> name >> id >> salary)
    {
        if (id == searchID)
        {
            cout << "\nEmployee Found!\n";
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Salary: " << salary << endl;

            found = true;
            break;
        }
    }

    file.close();

    if (!found)
    {
        cout << "\nEmployee Not Found!\n";
    }
}

void updateSalary()
{
    ifstream inFile("Employee.txt");

    if (!inFile.is_open())
    {
        cout << "\nEmployee File Not Found!\n";
        return;
    }

    ofstream tempFile("Temp.txt");

    if (!tempFile.is_open())
    {
        cout << "\nTemporary File Could Not Be Created!\n";
        inFile.close();
        return;
    }

    string name;
    int id, searchID;
    double salary, newSalary;
    bool found = false;

    cout << "\nEnter Employee ID: ";
    cin >> searchID;

    cout << "Enter New Salary: ";
    cin >> newSalary;

    while (inFile >> name >> id >> salary)
    {
        if (id == searchID)
        {
            salary = newSalary;
            found = true;
        }

        tempFile << name << " " << id << " " << salary << endl;
    }

    inFile.close();
    tempFile.close();

    if (found)
    {
        if (remove("Employee.txt") == 0 &&
            rename("Temp.txt", "Employee.txt") == 0)
        {
            cout << "\nSalary Updated Successfully!\n";
        }
        else
        {
            cout << "\nFile Replacement Failed!\n";
        }
    }
    else
    {
        remove("Temp.txt");
        cout << "\nEmployee Not Found!\n";
    }
}

void deleteEmployee()
{
    ifstream inFile("Employee.txt");

    if (!inFile.is_open())
    {
        cout << "\nEmployee File Not Found!\n";
        return;
    }

    ofstream tempFile("Temp.txt");

    if (!tempFile.is_open())
    {
        cout << "\nTemporary File Could Not Be Created!\n";
        inFile.close();
        return;
    }

    string name;
    int id, searchID;
    double salary;
    bool found = false;

    cout << "\nEnter Employee ID to Delete: ";
    cin >> searchID;

    while (inFile >> name >> id >> salary)
    {
        if (id == searchID)
        {
            found = true;
            continue;
        }

        tempFile << name << " " << id << " " << salary << endl;
    }

    inFile.close();
    tempFile.close();

    if (found)
    {
        if (remove("Employee.txt") == 0 &&
            rename("Temp.txt", "Employee.txt") == 0)
        {
            cout << "\nEmployee Deleted Successfully!\n";
        }
        else
        {
            cout << "\nFile Replacement Failed!\n";
        }
    }
    else
    {
        remove("Temp.txt");
        cout << "\nEmployee Not Found!\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. View Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Salary\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                viewEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                updateSalary();
                break;

            case 5:
                deleteEmployee();
                break;

            case 6:
                cout << "\nThank You for Using the System!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}
