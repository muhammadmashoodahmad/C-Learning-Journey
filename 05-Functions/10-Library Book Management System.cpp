#include <iostream>
using namespace std;

const int MAX_BOOKS = 50;

void displayMenu() {
    cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====";
    cout << "\n1. Add Book";
    cout << "\n2. View All Books";
    cout << "\n3. Search Book";
    cout << "\n4. Count Total Books";
    cout << "\n5. Exit";
    cout << "\nEnter Choice: ";
}

int findBook(int ids[], int count, int searchID) {
    for (int i = 0; i < count; i++) {
        if (ids[i] == searchID) {
            return i;
        }
    }

    return -1;
}

void addBook(int ids[], string titles[], int &count) {
    int id;

    cout << "Enter Book ID: ";
    cin >> id;

    if (findBook(ids, count, id) != -1) {
        cout << "Book ID Already Exists!\n";
        return;
    }

    ids[count] = id;

    cout << "Enter Book Title: ";
    cin >> titles[count];

    count++;

    cout << "Book Added Successfully!\n";
}

void viewBooks(int ids[], string titles[], int count) {
    if (count == 0) {
        cout << "No Books Available.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        cout << "\nBook ID: " << ids[i];
        cout << "\nBook Title: " << titles[i] << endl;
    }
}

void searchBook(int ids[], string titles[], int count) {
    int id;

    cout << "Enter Book ID: ";
    cin >> id;

    int index = findBook(ids, count, id);

    if (index != -1) {
        cout << "Book Found!";
        cout << "\nTitle: " << titles[index] << endl;
    } else {
        cout << "Book Not Found.\n";
    }
}

int countBooks(int count) {
    return count;
}

int countBooks(int ids[], int count) {
    if (count == 0) {
        return 0;
    }

    return 1 + countBooks(ids, count - 1);
}

int main() {
    int ids[MAX_BOOKS];
    string titles[MAX_BOOKS];

    int count = 0;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                if (count < MAX_BOOKS) {
                    addBook(ids, titles, count);
                } else {
                    cout << "Library Storage Full!\n";
                }
                break;

            case 2:
                viewBooks(ids, titles, count);
                break;

            case 3:
                searchBook(ids, titles, count);
                break;

            case 4:
                cout << "Total Books: "
                     << countBooks(ids, count) << endl;
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
