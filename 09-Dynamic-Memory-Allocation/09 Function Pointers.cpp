#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*ptr)(int, int) = add;

    int result = ptr(10, 20);

    cout << "First Number: 10" << endl;
    cout << "Second Number: 20" << endl;
    cout << "Sum: " << result << endl;

    return 0;
}
