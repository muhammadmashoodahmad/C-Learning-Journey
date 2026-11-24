
#include <iostream>
using namespace std;

int main()
{
    int totalStudents;

    cout << "Enter Number of Students: ";
    cin >> totalStudents;

    if (totalStudents <= 0)
    {
        cout << "Invalid Number of Students!";
        return 0;
    }

    int* marks = new int[totalStudents];

    for (int i = 0; i < totalStudents; i++)
    {
        cout << "Enter Marks of Student " << i + 1 << ": ";
        cin >> marks[i];
    }

    cout << "\n===== Student Marks =====\n";

    for (int i = 0; i < totalStudents; i++)
    {
        cout << "Student " << i + 1
             << ": " << marks[i] << endl;
    }

    delete[] marks;
    marks = 0;

    cout << "\nMemory Released Successfully!";

    return 0;
}
