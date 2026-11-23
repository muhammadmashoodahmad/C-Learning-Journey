
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    ifstream inFile("Student.txt");
    ofstream tempFile("Temp.txt");

    if (!inFile.is_open() || !tempFile.is_open())
    {
        cout << "File could not be opened!";
        return 1;
    }

    string name;
    int rollNumber, marks;
    int searchRoll;
    bool found = false;

    cout << "Enter Roll Number to Delete: ";
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

        cout << "\nRecord Deleted Successfully!";
    }
    else
    {
        remove("Temp.txt");
        cout << "\nStudent Record Not Found!";
    }

    return 0;
}
