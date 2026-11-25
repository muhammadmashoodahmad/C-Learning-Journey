#include <iostream>
using namespace std;

void swapNumbers(int* ptr1, int* ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int num1 = 10;
    int num2 = 20;

    cout << "Before Swapping:" << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;

    swapNumbers(&num1, &num2);

    cout << "\nAfter Swapping:" << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;

    return 0;
}
