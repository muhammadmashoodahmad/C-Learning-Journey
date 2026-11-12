#include<iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

template <typename T>
T multiply(T a, T b)
{
    return a * b;
}

int main()
{
    int a = 10, b = 20;
    double x = 5.5, y = 2.5;

    cout << "Integer Addition: " << add(a, b) << endl;
    cout << "Double Addition: " << add(x, y) << endl;

    cout << "Integer Multiplication: " << multiply(a, b) << endl;
    cout << "Double Multiplication: " << multiply(x, y) << endl;

    return 0;
}
