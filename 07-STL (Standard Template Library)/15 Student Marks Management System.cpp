
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector<int> marks;
    int choice, mark, searchMark;

    while(true)
    {
        cout << "\n===== STUDENT MARKS MANAGEMENT =====\n";
        cout << "1. Add Student Marks\n";
        cout << "2. Display All Marks\n";
        cout << "3. Sort Marks\n";
        cout << "4. Search Marks\n";
        cout << "5. Count Marks\n";
        cout << "6. Highest and Lowest Marks\n";
        cout << "7. Calculate Average\n";
        cout << "8. Exit\n";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Marks (0-100): ";
                cin >> mark;

                if(mark >= 0 && mark <= 100)
                {
                    marks.push_back(mark);
                    cout << "Marks Added Successfully!\n";
                }
                else
                {
                    cout << "Invalid Marks!\n";
                }
                break;

            case 2:
                if(marks.empty())
                {
                    cout << "No Marks Available!\n";
                }
                else
                {
                    cout << "All Marks: ";

                    for(int i = 0; i < marks.size(); i++)
                    {
                        cout << marks[i] << " ";
                    }

                    cout << endl;
                }
                break;

            case 3:
                if(marks.empty())
                {
                    cout << "No Marks Available!\n";
                }
                else
                {
                    sort(marks.begin(), marks.end());

                    cout << "Marks Sorted Successfully!\n";
                }
                break;

            case 4:
                cout << "Enter Marks to Search: ";
                cin >> searchMark;

                if(find(marks.begin(), marks.end(), searchMark) != marks.end())
                {
                    cout << "Marks Found!\n";
                }
                else
                {
                    cout << "Marks Not Found!\n";
                }
                break;

            case 5:
                cout << "Enter Marks to Count: ";
                cin >> searchMark;

                cout << "Total Occurrences: "
                     << count(marks.begin(), marks.end(), searchMark) << endl;
                break;

            case 6:
                if(marks.empty())
                {
                    cout << "No Marks Available!\n";
                }
                else
                {
                    cout << "Highest Marks: "
                         << *max_element(marks.begin(), marks.end()) << endl;

                    cout << "Lowest Marks: "
                         << *min_element(marks.begin(), marks.end()) << endl;
                }
                break;

            case 7:
                if(marks.empty())
                {
                    cout << "No Marks Available!\n";
                }
                else
                {
                    double total = accumulate(marks.begin(), marks.end(), 0);

                    cout << "Average Marks: "
                         << total / marks.size() << endl;
                }
                break;

            case 8:
                cout << "Program Exited Successfully!\n";
                return 0;

            default:
                cout << "Invalid Choice!\n";
        }
    }

    return 0;
}
