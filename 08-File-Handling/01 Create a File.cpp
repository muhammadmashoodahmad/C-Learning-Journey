#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;

    file.open("Student.txt");

    if(file.is_open())
    {
        cout << "File Created Successfully!";
        file.close();
    }
    else
    {
        cout << "File Could Not Be Created!";
    }

    return 0;
}
