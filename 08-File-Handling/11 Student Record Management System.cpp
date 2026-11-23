
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;

void addStudent()
{
    ofstream file("Student.txt", ios::app);

    string name;
    int rollNumber, marks;

    cout << "\nEnter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    cout << "Enter Marks: ";
    cin >> marks;

    file << name << " " << rollNumber << " " << marks << endl;

    file.close();

    cout << "\nStudent Added Successfully!\n";
}

void viewStudents()
{
    ifstream file("Student.txt");

    string name;
    int rollNumber, marks;

    if (!file.is_open())
    {
        cout << "\nNo Student Records Found!\n";
        return;
    }

    cout << "\n----- Student Records -----\n";

    while (file >> name >> rollNumber >> marks)
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "--------------------------\n";
    }

    file.close();
}

void searchStudent()
{
    ifstream file("Student.txt");

    string name;
    int rollNumber, marks, searchRoll;
    bool found = false;

    cout << "\nEnter Roll Number: ";
    cin >> searchRoll;

    while (file >> name >> rollNumber >> marks)
    {
        if (rollNumber == searchRoll)
        {
            cout << "\nStudent Found!\n";
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Marks: " << marks << endl;

            found = true;
            break;
        }
    }

    file.close();

    if (!found)
    {
        cout << "\nStudent Not Found!\n";
    }
}

void updateStudent()
{
    ifstream inFile("Student.txt");
    ofstream tempFile("Temp.txt");

    string name;
    int rollNumber, marks, searchRoll, newMarks;
    bool found = false;

    cout << "\nEnter Roll Number to Update: ";
    cin >> searchRoll;

    cout << "Enter New Marks: ";
    cin >> newMarks;

    while (inFile >> name >> rollNumber >> marks)
    {
        if (rollNumber == searchRoll)
        {
            marks = newMarks;
            found = true;
        }

        tempFile << name << " " << rollNumber << " " << marks << endl;
    }

    inFile.close();
    tempFile.close();

    if (found)
    {
        remove("Student.txt");
        rename("Temp.txt", "Student.txt");

        cout << "\nRecord Updated Successfully!\n";
    }
    else
    {
        remove("Temp.txt");
        cout << "\nStudent Not Found!\n";
    }
}

void deleteStudent()
{
    ifstream inFile("Student.txt");
    ofstream tempFile("Temp.txt");

    string name;
    int rollNumber, marks, searchRoll;
    bool found = false;

    cout << "\nEnter Roll Number to Delete: ";
    cin >> searchRoll;

    while (inFile >> name >> rollNumber >> marks)
    {
        if (rollNumber == searchRoll)
        {
            found = true;
            continue;
        }

        tempFile << name << " " << rollNumber << " " << marks << endl;
    }

    inFile.close();
    tempFile.close();

    if (found)
    {
        remove("Student.txt");
        rename("Temp.txt", "Student.txt");

        cout << "\nRecord Deleted Successfully!\n";
    }
    else
    {
        remove("Temp.txt");
        cout << "\nStudent Not Found!\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                viewStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}
