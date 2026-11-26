#include <iostream>
using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    int* ptr[3];

    ptr[0] = &num1;
    ptr[1] = &num2;
    ptr[2] = &num3;

    cout << "Values Using Array of Pointers:" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << *ptr[i] << endl;
    }

    *ptr[1] = 100;

    cout << "\nAfter Updating Second Value:" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << *ptr[i] << endl;
    }

    return 0;
}