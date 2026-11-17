#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> marks;

    marks.insert(80);
    marks.insert(90);
    marks.insert(70);
    marks.insert(80);
    marks.insert(90);
    marks.insert(80);

    cout << "All Marks: ";

    for(multiset<int>::iterator it = marks.begin(); it != marks.end(); it++)
    {
        cout << *it << " ";
    }

    cout << "\nNumber of students with 80 marks: ";
    cout << marks.count(80);

    multiset<int>::iterator it = marks.find(80);

    if(it != marks.end())
    {
        marks.erase(it);
    }

    cout << "\nAfter removing one 80: ";

    for(multiset<int>::iterator it = marks.begin(); it != marks.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
