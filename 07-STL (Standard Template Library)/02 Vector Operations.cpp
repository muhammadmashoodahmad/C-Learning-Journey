#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> marks;
    int n, value, searchValue;

    cout << "Enter Number of Students: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter Marks: ";
        cin >> value;
        marks.push_back(value);
    }

    cout << "\nOriginal Marks: ";

    for(int i = 0; i < marks.size(); i++)
    {
        cout << marks[i] << " ";
    }

    sort(marks.begin(), marks.end());

    cout << "\nSorted Marks: ";

    for(int i = 0; i < marks.size(); i++)
    {
        cout << marks[i] << " ";
    }

    cout << "\n\nEnter Marks to Search: ";
    cin >> searchValue;

    vector<int>::iterator it;

    it = find(marks.begin(), marks.end(), searchValue);

    if(it != marks.end())
    {
        cout << "Marks Found!" << endl;
    }
    else
    {
        cout << "Marks Not Found!" << endl;
    }

    return 0;
}
