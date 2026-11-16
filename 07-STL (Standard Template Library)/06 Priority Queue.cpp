#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
    priority_queue<int> scores;

    scores.push(75);
    scores.push(92);
    scores.push(68);
    scores.push(85);
    scores.push(95);

    cout << "Highest Admission Score: "
         << scores.top() << endl;

    cout << "\nAdmission Processing Order:\n";

    while(!scores.empty())
    {
        cout << "Processing Score: "
             << scores.top() << endl;

        scores.pop();
    }

    cout << "\nAll Students Processed!" << endl;

    return 0;
}
