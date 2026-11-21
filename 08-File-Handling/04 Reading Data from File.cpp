
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("Employee.txt");

    string line;

    if(!file.is_open())
    {
        cout << "Employee File Not Found!";
        return 0;
    }

    cout << "===== EMPLOYEE RECORDS =====\n";

    while(getline(file, line))
    {
        cout << line << endl;
    }

    file.close();

    return 0;
}
