#include <iostream>
using namespace std;

const int MAX_STUDENTS = 50;

void displayMenu() {
    cout << "\n===== COURSE REGISTRATION =====";
    cout << "\n1. Register Student";
    cout << "\n2. View Registrations";
    cout << "\n3. Search Student";
    cout << "\n4. Count Registrations";
    cout << "\n5. Exit";
    cout << "\nEnter Choice: ";
}

int findStudent(int rollNumbers[], int count, int rollNo) {
    for (int i = 0; i < count; i++) {
        if (rollNumbers[i] == rollNo) {
            return i;
        }
    }

    return -1;
}

void registerStudent(int rollNumbers[], string names[],
                     string courses[], int &count) {
    int rollNo;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    if (findStudent(rollNumbers, count, rollNo) != -1) {
        cout << "Student Already Registered!\n";
        return;
    }

    rollNumbers[count] = rollNo;

    cout << "Enter Student Name: ";
    cin >> names[count];

    cout << "Enter Course Name: ";
    cin >> courses[count];

    count++;

    cout << "Registration Successful!\n";
}

void viewRegistrations(int rollNumbers[], string names[],
                       string courses[], int count) {
    if (count == 0) {
        cout << "No Registrations Found.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        cout << "\nRoll Number: " << rollNumbers[i];
        cout << "\nStudent Name: " << names[i];
        cout << "\nCourse: " << courses[i] << endl;
    }
}

void searchStudent(int rollNumbers[], string names[],
                   string courses[], int count) {
    int rollNo;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    int index = findStudent(rollNumbers, count, rollNo);

    if (index != -1) {
        cout << "\nStudent Found!";
        cout << "\nName: " << names[index];
        cout << "\nCourse: " << courses[index] << endl;
    } else {
        cout << "Student Not Found.\n";
    }
}

int countRegistrations(int count) {
    return count;
}

int main() {
    int rollNumbers[MAX_STUDENTS];
    string names[MAX_STUDENTS];
    string courses[MAX_STUDENTS];

    int count = 0;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                if (count < MAX_STUDENTS) {
                    registerStudent(rollNumbers, names, courses, count);
                } else {
                    cout << "Registration Limit Reached!\n";
                }
                break;

            case 2:
                viewRegistrations(rollNumbers, names, courses, count);
                break;

            case 3:
                searchStudent(rollNumbers, names, courses, count);
                break;

            case 4:
                cout << "Total Registrations: "
                     << countRegistrations(count) << endl;
                break;

            case 5:
                cout << "Program Closed.\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}
