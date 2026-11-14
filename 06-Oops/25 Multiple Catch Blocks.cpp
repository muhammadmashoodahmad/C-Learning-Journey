#include<iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter Student Marks: ";
    cin >> marks;

    try
    {
        if(marks < 0)
        {
            throw -1;
        }
        else if(marks > 100)
        {
            throw 1.5;
        }
        else if(marks == 0)
        {
            throw 'Z';
        }

        cout << "Valid Marks: " << marks << endl;
    }
    catch(int x)
    {
        cout << "Error: Marks cannot be negative!" << endl;
    }
    catch(double x)
    {
        cout << "Error: Marks cannot be greater than 100!" << endl;
    }
    catch(char x)
    {
        cout << "Warning: Student has zero marks!" << endl;
    }

    cout << "Program continues normally." << endl;

    return 0;
}
