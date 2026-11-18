#include <iostream>
#include <utility>
#include <tuple>
#include <string>
using namespace std;

int main()
{
    pair<int, string> student;

    student = make_pair(101, "Ali");

    tuple<int, string, float> result;

    result = make_tuple(101, "Ali", 87.5);

    cout << "Student Information\n";

    cout << "ID: " << student.first << endl;
    cout << "Name: " << student.second << endl;

    cout << "\nStudent Result\n";

    cout << "ID: " << get<0>(result) << endl;
    cout << "Name: " << get<1>(result) << endl;
    cout << "Percentage: " << get<2>(result) << "%";

    return 0;
}
