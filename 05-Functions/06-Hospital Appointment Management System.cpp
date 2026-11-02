#include <iostream>
using namespace std;

void displayMenu() {
    cout << "\n1. Add Appointment";
    cout << "\n2. View All Appointments";
    cout << "\n3. Search Appointment";
    cout << "\n4. Exit";
    cout << "\nEnter choice: ";
}

void addAppointment(string names[], int ids[], int &count) {
    cout << "Enter Patient ID: ";
    cin >> ids[count];

    cout << "Enter Patient Name: ";
    cin >> names[count];

    count++;

    cout << "Appointment Added Successfully!\n";
}

void viewAppointments(string names[], int ids[], int count) {
    if (count == 0) {
        cout << "No appointments available.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        cout << "\nPatient ID: " << ids[i];
        cout << "\nPatient Name: " << names[i] << endl;
    }
}

void searchAppointment(string names[], int ids[], int count) {
    int searchID;
    bool found = false;

    cout << "Enter Patient ID to search: ";
    cin >> searchID;

    for (int i = 0; i < count; i++) {
        if (ids[i] == searchID) {
            cout << "Patient Found!";
            cout << "\nName: " << names[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Appointment Not Found.\n";
    }
}

int main() {
    string names[50];
    int ids[50];
    int count = 0;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                if (count < 50) {
                    addAppointment(names, ids, count);
                } else {
                    cout << "Appointment List is Full.\n";
                }
                break;

            case 2:
                viewAppointments(names, ids, count);
                break;

            case 3:
                searchAppointment(names, ids, count);
                break;

            case 4:
                cout << "Program Closed.\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}
