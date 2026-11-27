#include <iostream>
using namespace std;

int* getLargest(int* a, int* b)
{
    if (*a > *b)
    {
        return a;
    }

    return b;
}

int main()
{
    int num1 = 50;
    int num2 = 80;

    int* result = getLargest(&num1, &num2);

    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;
    cout << "Largest Number: " << *result << endl;

    return 0;
}
