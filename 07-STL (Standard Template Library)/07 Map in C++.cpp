#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<int, string> students;

    students[101] = "Ali";
    students[102] = "Ahmed";
    students[103] = "Usman";
    students[104] = "Bilal";

    cout << "Student Records:\n";

    for(map<int, string>::iterator it = students.begin();
        it != students.end(); it++)
    {
        cout << "Roll No: " << it->first;
        cout << " | Name: " << it->second << endl;
    }

    int rollNo;

    cout << "\nEnter Roll Number to Search: ";
    cin >> rollNo;

    map<int, string>::iterator it;

    it = students.find(rollNo);

    if(it != students.end())
    {
        cout << "Student Found: " << it->second << endl;
    }
    else
    {
        cout << "Student Not Found!" << endl;
    }

    return 0;
}
