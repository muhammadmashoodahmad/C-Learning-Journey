
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file("Student.txt", ios::in | ios::out | ios::app);

    if (!file.is_open())
    {
        cout << "File could not be opened!";
        return 1;
    }

    string name;
    int rollNumber, marks;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    cout << "Enter Marks: ";
    cin >> marks;

    file << name << " " << rollNumber << " " << marks << endl;

    file.clear();
    file.seekg(0, ios::beg);

    cout << "\nStudent Records:\n";

    while (file >> name >> rollNumber >> marks)
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "------------------" << endl;
    }

    file.close();

    return 0;
}
