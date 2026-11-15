#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> marks;
    int n, value, sum = 0;

    cout << "Enter Number of Students: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter Marks: ";
        cin >> value;

        marks.push_back(value);
    }

    cout << "\nStudent Marks:\n";

    for(int i = 0; i < marks.size(); i++)
    {
        cout << marks[i] << endl;
        sum += marks[i];
    }

    cout << "Total Marks: " << sum << endl;
    cout << "Average: " << (double)sum / marks.size() << endl;

    return 0;
}
