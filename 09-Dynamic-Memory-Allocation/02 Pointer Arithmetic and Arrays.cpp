
#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    int total = 0;

    int* ptr = marks;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Marks of Student " << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    for (int i = 0; i < 5; i++)
    {
        total += *(ptr + i);
    }

    double average = total / 5.0;

    cout << "\nTotal Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}
