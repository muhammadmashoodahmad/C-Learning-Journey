#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> marks;

    marks.insert(85);
    marks.insert(90);
    marks.insert(75);
    marks.insert(85);
    marks.insert(70);
    marks.insert(90);

    cout << "Unique Student Marks:\n";

    for(set<int>::iterator it = marks.begin();
        it != marks.end(); it++)
    {
        cout << *it << " ";
    }

    cout << "\n\nTotal Unique Marks: " << marks.size();

    int searchMarks;

    cout << "\n\nEnter Marks to Search: ";
    cin >> searchMarks;

    if(marks.find(searchMarks) != marks.end())
    {
        cout << "Marks Found!" << endl;
    }
    else
    {
        cout << "Marks Not Found!" << endl;
    }

    marks.erase(85);

    cout << "\nAfter Removing 85:\n";

    for(int x : marks)
    {
        cout << x << " ";
    }

    return 0;
}
