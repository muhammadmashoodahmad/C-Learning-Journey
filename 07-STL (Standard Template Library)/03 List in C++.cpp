#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> marks;
    int n, value;

    cout << "Enter Number of Students: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter Marks: ";
        cin >> value;

        marks.push_back(value);
    }

    cout << "\nOriginal Marks: ";

    for(int x : marks)
    {
        cout << x << " ";
    }

    marks.push_front(95);

    cout << "\nAfter Adding at Start: ";

    for(int x : marks)
    {
        cout << x << " ";
    }

    marks.sort();

    cout << "\nSorted Marks: ";

    for(int x : marks)
    {
        cout << x << " ";
    }

    marks.pop_front();

    cout << "\nAfter Removing First Element: ";

    for(int x : marks)
    {
        cout << x << " ";
    }

    cout << "\nTotal Students: " << marks.size() << endl;

    return 0;
}
