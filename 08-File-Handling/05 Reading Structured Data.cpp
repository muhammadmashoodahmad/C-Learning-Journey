
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("Student.txt");

    string name;
    int rollNumber;
    int marks;

    if(!file.is_open())
    {
        cout << "File Not Found!";
        return 0;
    }

    cout << "===== STUDENT RECORDS =====\n";

    while(file >> name >> rollNumber >> marks)
    {
        cout << "\nStudent Name: " << name;
        cout << "\nRoll Number: " << rollNumber;
        cout << "\nMarks: " << marks << endl;
    }

    file.close();

    return 0;
}
