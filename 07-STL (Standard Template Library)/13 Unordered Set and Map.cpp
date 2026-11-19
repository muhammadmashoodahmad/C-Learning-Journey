#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    unordered_map<int, string> students;

    students[101] = "Ali";
    students[102] = "Ahmed";
    students[103] = "Usman";

    cout << "Student Records:\n";

    for(unordered_map<int, string>::iterator it = students.begin(); it != students.end(); it++)
    {
        cout << "ID: " << it->first;
        cout << " Name: " << it->second << endl;
    }

    cout << "\nSearching Student ID 102:\n";

    if(students.find(102) != students.end())
    {
        cout << "Student Found: " << students[102];
    }
    else
    {
        cout << "Student Not Found";
    }

    return 0;
}
