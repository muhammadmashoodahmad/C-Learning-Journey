#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector<int> marks;

    marks.push_back(85);
    marks.push_back(70);
    marks.push_back(90);
    marks.push_back(85);
    marks.push_back(60);
    marks.push_back(95);

    cout << "Student Marks: ";

    for(int i = 0; i < marks.size(); i++)
    {
        cout << marks[i] << " ";
    }

    int maximum = *max_element(marks.begin(), marks.end());
    int minimum = *min_element(marks.begin(), marks.end());

    int total = accumulate(marks.begin(), marks.end(), 0);

    double average = total / (double)marks.size();

    cout << "\n\nHighest Marks: " << maximum;
    cout << "\nLowest Marks: " << minimum;
    cout << "\nTotal Marks: " << total;
    cout << "\nAverage Marks: " << average;

    sort(marks.begin(), marks.end());

    marks.erase(unique(marks.begin(), marks.end()), marks.end());

    cout << "\n\nUnique Sorted Marks: ";

    for(int i = 0; i < marks.size(); i++)
    {
        cout << marks[i] << " ";
    }

    return 0;
}
