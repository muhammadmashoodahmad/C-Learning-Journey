
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream outFile("Student.txt", ios::app);

    if (!outFile.is_open())
    {
        cout << "File could not be opened!";
        return 1;
    }

    string name;
    int rollNumber;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    outFile << name << " " << rollNumber << endl;

    outFile.close();

    ifstream inFile("Student.txt");

    if (!inFile.is_open())
    {
        cout << "File could not be read!";
        return 1;
    }

    cout << "\nAll Student Records:\n";

    while (inFile >> name >> rollNumber)
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "------------------" << endl;
    }

    inFile.close();

    return 0;
}
