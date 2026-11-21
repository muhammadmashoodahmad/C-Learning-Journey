
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream file("Students.txt", ios::app);

    string name;
    int rollNumber;
    int semester;

    if(!file.is_open())
    {
        cout << "File Could Not Be Opened!";
        return 0;
    }

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    cout << "Enter Semester: ";
    cin >> semester;

    file << "\nStudent Record\n";
    file << "Name: " << name << endl;
    file << "Roll Number: " << rollNumber << endl;
    file << "Semester: " << semester << endl;

    file.close();

    cout << "\nStudent Record Added Successfully!";

    return 0;
}
