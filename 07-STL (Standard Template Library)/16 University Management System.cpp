
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

struct Student
{
    int id;
    string name;
    float marks;
};

int main()
{
    vector<Student> students;
    map<int, string> studentNames;
    set<string> courses;
    multimap<int, string> registrations;

    int choice, id;
    string name, course;
    float marks;

    while(true)
    {
        cout << "\n===== UNIVERSITY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Register Course\n";
        cout << "5. Display All Courses\n";
        cout << "6. Add Student Marks\n";
        cout << "7. Display Student Result\n";
        cout << "8. Exit\n";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Student ID: ";
                cin >> id;

                if(studentNames.find(id) != studentNames.end())
                {
                    cout << "Student ID Already Exists!\n";
                    break;
                }

                cout << "Enter Student Name: ";
                getline(cin >> ws, name);

                {
                    Student s;
                    s.id = id;
                    s.name = name;
                    s.marks = 0;

                    students.push_back(s);
                    studentNames[id] = name;
                }

                cout << "Student Added Successfully!\n";
                break;

            case 2:
                if(students.empty())
                {
                    cout << "No Student Records Available!\n";
                }
                else
                {
                    for(int i = 0; i < students.size(); i++)
                    {
                        cout << "\nID: " << students[i].id;
                        cout << "\nName: " << students[i].name;
                        cout << "\nMarks: " << students[i].marks << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Student ID: ";
                cin >> id;

                if(studentNames.find(id) != studentNames.end())
                {
                    cout << "Student Found: "
                         << studentNames[id] << endl;
                }
                else
                {
                    cout << "Student Not Found!\n";
                }
                break;

            case 4:
                cout << "Enter Student ID: ";
                cin >> id;

                if(studentNames.find(id) == studentNames.end())
                {
                    cout << "Student Not Found!\n";
                    break;
                }

                cout << "Enter Course Name: ";
                getline(cin >> ws, course);

                registrations.insert(make_pair(id, course));
                courses.insert(course);

                cout << "Course Registered Successfully!\n";
                break;

            case 5:
                if(courses.empty())
                {
                    cout << "No Courses Available!\n";
                }
                else
                {
                    cout << "Available Courses:\n";

                    for(set<string>::iterator it = courses.begin();
                        it != courses.end(); it++)
                    {
                        cout << *it << endl;
                    }
                }
                break;

            case 6:
                cout << "Enter Student ID: ";
                cin >> id;

                if(studentNames.find(id) == studentNames.end())
                {
                    cout << "Student Not Found!\n";
                    break;
                }

                cout << "Enter Marks (0-100): ";
                cin >> marks;

                if(marks < 0 || marks > 100)
                {
                    cout << "Invalid Marks!\n";
                    break;
                }

                for(int i = 0; i < students.size(); i++)
                {
                    if(students[i].id == id)
                    {
                        students[i].marks = marks;
                        break;
                    }
                }

                cout << "Marks Updated Successfully!\n";
                break;

            case 7:
                cout << "Enter Student ID: ";
                cin >> id;

                if(studentNames.find(id) == studentNames.end())
                {
                    cout << "Student Not Found!\n";
                    break;
                }

                for(int i = 0; i < students.size(); i++)
                {
                    if(students[i].id == id)
                    {
                        cout << "\nStudent Name: " << students[i].name;
                        cout << "\nStudent Marks: " << students[i].marks;

                        if(students[i].marks >= 50)
                        {
                            cout << "\nStatus: Pass\n";
                        }
                        else
                        {
                            cout << "\nStatus: Not Passed\n";
                        }

                        break;
                    }
                }

                cout << "\nRegistered Courses:\n";

                {
                    pair<multimap<int, string>::iterator,
                         multimap<int, string>::iterator> range;

                    range = registrations.equal_range(id);

                    if(range.first == range.second)
                    {
                        cout << "No Courses Registered!\n";
                    }
                    else
                    {
                        for(multimap<int, string>::iterator it = range.first;
                            it != range.second; it++)
                        {
                            cout << it->second << endl;
                        }
                    }
                }
                break;

            case 8:
                cout << "University System Closed!\n";
                return 0;

            default:
                cout << "Invalid Choice!\n";
        }
    }

    return 0;
}
