#include<iostream>
using namespace std;

int main()
{
    double num1, num2;

    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter Second Number: ";
    cin >> num2;

    try
    {
        if(num2 == 0)
        {
            throw num2;
        }

        cout << "Result: " << num1 / num2 << endl;
    }
    catch(double x)
    {
        cout << "Error: Division by zero is not allowed!" << endl;
    }

    cout << "Program continues normally." << endl;

    return 0;
}
