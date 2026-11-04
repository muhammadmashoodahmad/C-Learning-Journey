#include <iostream>
using namespace std;

const int MAX_STUDENTS = 50;
const int SUBJECTS = 3;

void displayMenu() {
    cout << "\n===== EXAM MANAGEMENT SYSTEM =====";
    cout << "\n1. Add Student";
    cout << "\n2. View Results";
    cout << "\n3. Search Student";
    cout << "\n4. Calculate Class Average";
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

int calculateTotal(int marks[]) {
    int total = 0;

    for (int i = 0; i < SUBJECTS; i++) {
        total += marks[i];
    }

    return total;
}

double calculatePercentage(int total) {
    return total / 3.0;
}

double calculatePercentage(int marks[]) {
    return calculateTotal(marks) / 3.0;
}

void addStudent(int rollNumbers[], string names[],
                int marks[][SUBJECTS], int &count) {

    int rollNo;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    if (rollNo <= 0 || findStudent(rollNumbers, count, rollNo) != -1) {
        cout << "Invalid or Duplicate Roll Number!\n";
        return;
    }

    rollNumbers[count] = rollNo;

    cout << "Enter Student Name: ";
    cin >> names[count];

    for (int i = 0; i < SUBJECTS; i++) {
        cout << "Enter Marks for Subject " << i + 1 << ": ";
        cin >> marks[count][i];

        if (marks[count][i] < 0 || marks[count][i] > 100) {
            cout << "Invalid Marks! Enter Again.\n";
            i--;
        }
    }

    count++;

    cout << "Student Result Added Successfully!\n";
}

void viewResults(int rollNumbers[], string names[],
                 int marks[][SUBJECTS], int count) {

    for (int i = 0; i < count; i++) {
        int total = calculateTotal(marks[i]);

        cout << "\nRoll Number: " << rollNumbers[i];
        cout << "\nName: " << names[i];
        cout << "\nTotal Marks: " << total << "/300";
        cout << "\nPercentage: " << calculatePercentage(total) << "%";
        cout << "\n";
    }
}

void searchStudent(int rollNumbers[], string names[],
                   int marks[][SUBJECTS], int count) {

    int rollNo;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    int index = findStudent(rollNumbers, count, rollNo);

    if (index == -1) {
        cout << "Student Not Found.\n";
        return;
    }

    cout << "\nStudent: " << names[index];
    cout << "\nTotal Marks: " << calculateTotal(marks[index]);
    cout << "\nPercentage: " << calculatePercentage(marks[index]) << "%\n";
}

int recursiveSum(int values[], int count) {
    if (count == 0) {
        return 0;
    }

    return values[count - 1] + recursiveSum(values, count - 1);
}

void calculateClassAverage(int marks[][SUBJECTS], int count) {
    if (count == 0) {
        cout << "No Results Available.\n";
        return;
    }

    int totals[MAX_STUDENTS];

    for (int i = 0; i < count; i++) {
        totals[i] = calculateTotal(marks[i]);
    }

    int grandTotal = recursiveSum(totals, count);

    cout << "Class Average: "
         << (double) grandTotal / (count * SUBJECTS) << "%\n";
}

int main() {
    int rollNumbers[MAX_STUDENTS];
    string names[MAX_STUDENTS];
    int marks[MAX_STUDENTS][SUBJECTS];

    int count = 0;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                if (count < MAX_STUDENTS) {
                    addStudent(rollNumbers, names, marks, count);
                } else {
                    cout << "Student Limit Reached!\n";
                }
                break;

            case 2:
                viewResults(rollNumbers, names, marks, count);
                break;

            case 3:
                searchStudent(rollNumbers, names, marks, count);
                break;

            case 4:
                calculateClassAverage(marks, count);
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
