#include <iostream>
using namespace std;

int main()
{
    int number = 50;

    int* ptr = &number;
    int** doublePtr = &ptr;

    cout << "Value: " << number << endl;
    cout << "Using Pointer: " << *ptr << endl;
    cout << "Using Double Pointer: " << **doublePtr << endl;

    **doublePtr = 100;

    cout << "\nAfter Updating:" << endl;
    cout << "Value: " << number << endl;

    return 0;
}
