#include <iostream>
#include <memory>
using namespace std;

int main()
{
    shared_ptr<int> ptr1(new int(100));

    shared_ptr<int> ptr2 = ptr1;

    cout << "Value: " << *ptr1 << endl;
    cout << "Using Second Pointer: " << *ptr2 << endl;

    cout << "Owners: " << ptr1.use_count() << endl;

    ptr2.reset();

    cout << "After Reset: " << ptr1.use_count() << endl;

    return 0;
}
