#include <iostream>
#include <memory>
using namespace std;

int main()
{
    shared_ptr<int> ptr1(new int(500));

    weak_ptr<int> ptr2 = ptr1;

    cout << "Value: " << *ptr1 << endl;
    cout << "Shared Owners: " << ptr1.use_count() << endl;

    if (!ptr2.expired())
    {
        shared_ptr<int> ptr3 = ptr2.lock();

        cout << "Value Using Weak Pointer: " << *ptr3 << endl;
        cout << "Owners After Lock: " << ptr1.use_count() << endl;
    }

    cout << "Weak Pointer Does Not Own Memory." << endl;

    return 0;
}
