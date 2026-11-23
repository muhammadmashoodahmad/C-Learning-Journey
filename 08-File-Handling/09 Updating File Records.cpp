
#include <iostream>
#include <fstream>
#include <string>
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
    int searchRoll, newMarks;
    bool found = false;

    cout << "Enter Roll Number to Update: ";
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

        cout << "\nRecord Updated Successfully!";
    }
    else
    {
        remove("Temp.txt");
        cout << "\nStudent Record Not Found!";
    }

    return 0;
}
