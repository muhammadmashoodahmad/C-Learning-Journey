#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;

    static int totalStudents;

public:
    Student(string n, int r) {
        name = n;
        rollNo = r;

        totalStudents++;
    }

    void displayInfo() {
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << rollNo << endl;
    }

    static void showTotal() {
        cout << "\nTotal Students: " << totalStudents << endl;
    }
};

int Student::totalStudents = 0;

int main() {
    Student s1("Ali", 101);
    Student s2("Ahmad", 102);
    Student s3("Hamza", 103);

    s1.displayInfo();
    s2.displayInfo();
    s3.displayInfo();

    Student::showTotal();

    return 0;
}
