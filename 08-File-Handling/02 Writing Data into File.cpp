
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream file;

    string name;
    int rollNumber;
    int semester;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    cout << "Enter Semester: ";
    cin >> semester;

    file.open("Student.txt");

    if(file.is_open())
    {
        file << "Student Information\n";
        file << "Name: " << name << endl;
        file << "Roll Number: " << rollNumber << endl;
        file << "Semester: " << semester << endl;

        file.close();

        cout << "\nStudent Data Saved Successfully!";
    }
    else
    {
        cout << "File Could Not Be Opened!";
    }

    return 0;
}
