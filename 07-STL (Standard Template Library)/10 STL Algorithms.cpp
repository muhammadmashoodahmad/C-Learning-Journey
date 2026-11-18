#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> marks;

    marks.push_back(85);
    marks.push_back(60);
    marks.push_back(95);
    marks.push_back(70);
    marks.push_back(80);

    sort(marks.begin(), marks.end());

    cout << "Ascending Order: ";

    for(int i = 0; i < marks.size(); i++)
    {
        cout << marks[i] << " ";
    }

    sort(marks.begin(), marks.end(), greater<int>());

    cout << "\nDescending Order: ";

    for(int i = 0; i < marks.size(); i++)
    {
        cout << marks[i] << " ";
    }

    return 0;
}
