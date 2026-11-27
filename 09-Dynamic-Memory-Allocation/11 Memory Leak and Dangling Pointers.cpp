#include <iostream>
using namespace std;

int main()
{
    int* ptr = new int(100);

    cout << "Allocated Value: " << *ptr << endl;

    delete ptr;
    ptr = nullptr;

    if (ptr == nullptr)
    {
        cout << "Memory Released Successfully." << endl;
    }

    return 0;
}
