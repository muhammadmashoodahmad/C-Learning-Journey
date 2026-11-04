#include <iostream>
using namespace std;

const int MAX_CUSTOMERS = 50;

void displayMenu() {
    cout << "\n===== LOAN MANAGEMENT SYSTEM =====";
    cout << "\n1. Add Customer";
    cout << "\n2. View Customers";
    cout << "\n3. Search Customer";
    cout << "\n4. Calculate Loan";
    cout << "\n5. Calculate Total Loans";
    cout << "\n6. Exit";
    cout << "\nEnter Choice: ";
}

int findCustomer(int ids[], int count, int id) {
    for (int i = 0; i < count; i++) {
        if (ids[i] == id) {
            return i;
        }
    }

    return -1;
}

void addCustomer(int ids[], string names[],
                 double loans[], int &count) {
    int id;

    cout << "Enter Customer ID: ";
    cin >> id;

    if (id <= 0 || findCustomer(ids, count, id) != -1) {
        cout << "Invalid or Duplicate ID!\n";
        return;
    }

    ids[count] = id;

    cout << "Enter Customer Name: ";
    cin >> names[count];

    cout << "Enter Loan Amount: ";
    cin >> loans[count];

    if (loans[count] <= 0) {
        cout << "Invalid Loan Amount!\n";
        return;
    }

    count++;

    cout << "Customer Added Successfully!\n";
}

void viewCustomers(int ids[], string names[],
                   double loans[], int count) {
    if (count == 0) {
        cout << "No Customers Available.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        cout << "\nCustomer ID: " << ids[i];
        cout << "\nName: " << names[i];
        cout << "\nLoan Amount: " << loans[i] << endl;
    }
}

void searchCustomer(int ids[], string names[],
                    double loans[], int count) {
    int id;

    cout << "Enter Customer ID: ";
    cin >> id;

    int index = findCustomer(ids, count, id);

    if (index == -1) {
        cout << "Customer Not Found.\n";
        return;
    }

    cout << "\nCustomer Found!";
    cout << "\nName: " << names[index];
    cout << "\nLoan Amount: " << loans[index] << endl;
}

double calculateLoan(double amount, double rate, int years) {
    return amount + (amount * rate * years / 100);
}

double calculateLoan(double amount, double rate, int years,
                     double extraCharges) {
    return calculateLoan(amount, rate, years) + extraCharges;
}

double recursiveSum(double loans[], int count) {
    if (count == 0) {
        return 0;
    }

    return loans[count - 1] + recursiveSum(loans, count - 1);
}

void calculateTotalLoans(double loans[], int count) {
    cout << "Total Customer Loans: "
         << recursiveSum(loans, count) << endl;
}

int main() {
    int ids[MAX_CUSTOMERS];
    string names[MAX_CUSTOMERS];
    double loans[MAX_CUSTOMERS];

    int count = 0;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                if (count < MAX_CUSTOMERS) {
                    addCustomer(ids, names, loans, count);
                } else {
                    cout << "Customer Limit Reached!\n";
                }
                break;

            case 2:
                viewCustomers(ids, names, loans, count);
                break;

            case 3:
                searchCustomer(ids, names, loans, count);
                break;

            case 4: {
                double amount, rate, charges;
                int years;

                cout << "Enter Loan Amount: ";
                cin >> amount;

                cout << "Enter Interest Rate: ";
                cin >> rate;

                cout << "Enter Years: ";
                cin >> years;

                cout << "Enter Extra Charges (0 if none): ";
                cin >> charges;

                if (amount <= 0 || rate < 0 || years <= 0 || charges < 0) {
                    cout << "Invalid Input!\n";
                    break;
                }

                if (charges == 0) {
                    cout << "Total Loan: "
                         << calculateLoan(amount, rate, years) << endl;
                } else {
                    cout << "Total Loan: "
                         << calculateLoan(amount, rate, years, charges)
                         << endl;
                }
                break;
            }

            case 5:
                calculateTotalLoans(loans, count);
                break;

            case 6:
                cout << "Program Closed.\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}
