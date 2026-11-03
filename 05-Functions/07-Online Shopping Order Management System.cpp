#include <iostream>
using namespace std;

const int MAX_ORDERS = 50;

void displayMenu() {
    cout << "\n===== SHOPPING ORDER SYSTEM =====";
    cout << "\n1. Add Order";
    cout << "\n2. View Orders";
    cout << "\n3. Search Order";
    cout << "\n4. Calculate Total Sales";
    cout << "\n5. Exit";
    cout << "\nEnter Choice: ";
}

bool orderExists(int ids[], int count, int id) {
    for (int i = 0; i < count; i++) {
        if (ids[i] == id) {
            return true;
        }
    }

    return false;
}

void addOrder(int ids[], string products[], double prices[],
              int quantities[], int &count) {

    int id;

    cout << "Enter Order ID: ";
    cin >> id;

    if (orderExists(ids, count, id)) {
        cout << "Order ID Already Exists!\n";
        return;
    }

    ids[count] = id;

    cout << "Enter Product Name: ";
    cin >> products[count];

    cout << "Enter Product Price: ";
    cin >> prices[count];

    cout << "Enter Quantity: ";
    cin >> quantities[count];

    count++;

    cout << "Order Added Successfully!\n";
}

void viewOrders(int ids[], string products[], double prices[],
                int quantities[], int count) {

    if (count == 0) {
        cout << "No Orders Available.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        cout << "\nOrder ID: " << ids[i];
        cout << "\nProduct: " << products[i];
        cout << "\nPrice: " << prices[i];
        cout << "\nQuantity: " << quantities[i];
        cout << "\nTotal: " << prices[i] * quantities[i] << endl;
    }
}

void searchOrder(int ids[], string products[], int count) {
    int id;

    cout << "Enter Order ID: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (ids[i] == id) {
            cout << "Order Found!";
            cout << "\nProduct: " << products[i] << endl;
            return;
        }
    }

    cout << "Order Not Found.\n";
}

double calculateTotalSales(double prices[], int quantities[], int count) {
    double total = 0;

    for (int i = 0; i < count; i++) {
        total += prices[i] * quantities[i];
    }

    return total;
}

int main() {
    int ids[MAX_ORDERS];
    string products[MAX_ORDERS];
    double prices[MAX_ORDERS];
    int quantities[MAX_ORDERS];

    int count = 0;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                if (count < MAX_ORDERS) {
                    addOrder(ids, products, prices, quantities, count);
                } else {
                    cout << "Order Storage Full!\n";
                }
                break;

            case 2:
                viewOrders(ids, products, prices, quantities, count);
                break;

            case 3:
                searchOrder(ids, products, count);
                break;

            case 4:
                cout << "Total Sales: "
                     << calculateTotalSales(prices, quantities, count);
                cout << endl;
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
