#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
    stack<string> history;

    history.push("Google");
    history.push("YouTube");
    history.push("GitHub");
    history.push("Wikipedia");

    cout << "Current Page: " << history.top() << endl;

    cout << "\nGoing Back..." << endl;
    history.pop();

    cout << "Current Page: " << history.top() << endl;

    cout << "\nGoing Back..." << endl;
    history.pop();

    cout << "Current Page: " << history.top() << endl;

    cout << "\nTotal Pages Remaining: " << history.size() << endl;

    return 0;
}
