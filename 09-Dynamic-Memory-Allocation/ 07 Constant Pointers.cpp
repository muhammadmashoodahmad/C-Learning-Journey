#include <iostream>
using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;

    // Pointer to Constant
    const int* ptr1 = &num1;

    cout << "Pointer to Constant:" << endl;
    cout << *ptr1 << endl;

    ptr1 = &num2;

    cout << "After Changing Address: " << *ptr1 << endl;

    // Constant Pointer
    int* const ptr2 = &num1;

    cout << "\nConstant Pointer:" << endl;
    cout << *ptr2 << endl;

    *ptr2 = 50;

    cout << "After Changing Value: " << *ptr2 << endl;

    return 0;
}