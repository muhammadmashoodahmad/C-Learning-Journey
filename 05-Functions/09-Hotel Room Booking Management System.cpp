#include <iostream>
using namespace std;

const int TOTAL_ROOMS = 10;

void displayMenu() {
    cout << "\n===== HOTEL BOOKING SYSTEM =====";
    cout << "\n1. View Rooms";
    cout << "\n2. Book Room";
    cout << "\n3. Cancel Booking";
    cout << "\n4. Show Available Rooms";
    cout << "\n5. Calculate Bill";
    cout << "\n6. Exit";
    cout << "\nEnter Choice: ";
}

void viewRooms(bool booked[]) {
    for (int i = 0; i < TOTAL_ROOMS; i++) {
        cout << "\nRoom " << i + 1 << ": ";

        if (booked[i]) {
            cout << "Booked";
        } else {
            cout << "Available";
        }
    }
    cout << endl;
}

void bookRoom(bool booked[], string guests[]) {
    int room;

    cout << "Enter Room Number (1-10): ";
    cin >> room;

    if (room < 1 || room > TOTAL_ROOMS) {
        cout << "Invalid Room Number!\n";
        return;
    }

    if (booked[room - 1]) {
        cout << "Room Already Booked!\n";
        return;
    }

    cout << "Enter Guest Name: ";
    cin >> guests[room - 1];

    booked[room - 1] = true;

    cout << "Room Booked Successfully!\n";
}

void cancelBooking(bool booked[], string guests[]) {
    int room;

    cout << "Enter Room Number: ";
    cin >> room;

    if (room < 1 || room > TOTAL_ROOMS) {
        cout << "Invalid Room Number!\n";
        return;
    }

    if (!booked[room - 1]) {
        cout << "Room Is Not Booked!\n";
        return;
    }

    booked[room - 1] = false;
    guests[room - 1] = "";

    cout << "Booking Cancelled Successfully!\n";
}

int countAvailableRooms(bool booked[]) {
    int available = 0;

    for (int i = 0; i < TOTAL_ROOMS; i++) {
        if (!booked[i]) {
            available++;
        }
    }

    return available;
}

double calculateBill(int days, double rate) {
    return days * rate;
}

double calculateBill(int days, double rate, double discount) {
    double total = days * rate;
    return total - (total * discount / 100);
}

int main() {
    bool booked[TOTAL_ROOMS] = {};
    string guests[TOTAL_ROOMS];

    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                viewRooms(booked);
                break;

            case 2:
                bookRoom(booked, guests);
                break;

            case 3:
                cancelBooking(booked, guests);
                break;

            case 4:
                cout << "Available Rooms: "
                     << countAvailableRooms(booked) << endl;
                break;

            case 5: {
                int days;
                double rate;
                double discount;

                cout << "Enter Number of Days: ";
                cin >> days;

                cout << "Enter Daily Room Rate: ";
                cin >> rate;

                cout << "Enter Discount Percentage (0 for none): ";
                cin >> discount;

                if (days <= 0 || rate < 0 || discount < 0 || discount > 100) {
                    cout << "Invalid Input!\n";
                    break;
                }

                if (discount == 0) {
                    cout << "Total Bill: "
                         << calculateBill(days, rate) << endl;
                } else {
                    cout << "Total Bill: "
                         << calculateBill(days, rate, discount) << endl;
                }
                break;
            }

            case 6:
                cout << "Program Closed.\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}
