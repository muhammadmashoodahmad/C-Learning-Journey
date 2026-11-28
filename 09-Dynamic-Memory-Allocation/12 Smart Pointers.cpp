#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int> ptr(new int(100));

    cout << "Value: " << *ptr << endl;

    *ptr = 250;

    cout << "Updated Value: " << *ptr << endl;

    cout << "Smart Pointer Manages Memory Automatically." << endl;

    return 0;
}
