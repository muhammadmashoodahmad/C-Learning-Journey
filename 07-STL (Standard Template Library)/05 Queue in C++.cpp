#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
    queue<string> customers;

    customers.push("Ali");
    customers.push("Ahmed");
    customers.push("Usman");
    customers.push("Bilal");

    cout << "First Customer: " << customers.front() << endl;
    cout << "Last Customer: " << customers.back() << endl;

    cout << "\nServing Customers:\n";

    while(!customers.empty())
    {
        cout << "Serving: " << customers.front() << endl;
        customers.pop();
    }

    cout << "\nRemaining Customers: " << customers.size() << endl;

    return 0;
}
