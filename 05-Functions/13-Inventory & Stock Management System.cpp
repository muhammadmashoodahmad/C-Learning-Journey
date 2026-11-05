#include <iostream>
using namespace std;

const int MAX_PRODUCTS = 50;

void displayMenu() {
    cout << "\n===== INVENTORY MANAGEMENT =====";
    cout << "\n1. Add Product";
    cout << "\n2. View Products";
    cout << "\n3. Search Product";
    cout << "\n4. Update Stock";
    cout << "\n5. Calculate Inventory Value";
    cout << "\n6. Exit";
    cout << "\nEnter Choice: ";
}

int searchProduct(int ids[], int count, int id) {
    for (int i = 0; i < count; i++) {
        if (ids[i] == id) {
            return i;
        }
    }

    return -1;
}

void addProduct(int ids[], string names[], int quantities[],
                double prices[], int &count) {

    int id;

    cout << "Enter Product ID: ";
    cin >> id;

    if (id <= 0 || searchProduct(ids, count, id) != -1) {
        cout << "Invalid or Duplicate Product ID!\n";
        return;
    }

    int quantity;
    double price;

    cout << "Enter Product Name: ";
    cin >> names[count];

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Price: ";
    cin >> price;

    if (quantity < 0 || price <= 0) {
        cout << "Invalid Product Information!\n";
        return;
    }

    ids[count] = id;
    quantities[count] = quantity;
    prices[count] = price;

    count++;

    cout << "Product Added Successfully!\n";
}

void viewProducts(int ids[], string names[], int quantities[],
                  double prices[], int count) {

    if (count == 0) {
        cout << "No Products Available.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        cout << "\nProduct ID: " << ids[i];
        cout << "\nName: " << names[i];
        cout << "\nQuantity: " << quantities[i];
        cout << "\nPrice: " << prices[i];
        cout << "\nStock Value: " << quantities[i] * prices[i] << endl;
    }
}

void updateStock(int ids[], int quantities[], int count) {
    int id, newQuantity;

    cout << "Enter Product ID: ";
    cin >> id;

    int index = searchProduct(ids, count, id);

    if (index == -1) {
        cout << "Product Not Found!\n";
        return;
    }

    cout << "Enter New Quantity: ";
    cin >> newQuantity;

    if (newQuantity < 0) {
        cout << "Invalid Quantity!\n";
        return;
    }

    quantities[index] = newQuantity;

    cout << "Stock Updated Successfully!\n";
}

double calculateValue(double prices[], int quantities[], int count) {
    double total = 0;

    for (int i = 0; i < count; i++) {
        total += prices[i] * quantities[i];
    }

    return total;
}

double calculateValue(double prices[], int quantities[],
                      int count, int index) {
    if (index == count) {
        return 0;
    }

    return prices[index] * quantities[index]
           + calculateValue(prices, quantities, count, index + 1);
}

int main() {
    int ids[MAX_PRODUCTS];
    string names[MAX_PRODUCTS];
    int quantities[MAX_PRODUCTS];
    double prices[MAX_PRODUCTS];

    int count = 0;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                if (count < MAX_PRODUCTS) {
                    addProduct(ids, names, quantities, prices, count);
                } else {
                    cout << "Inventory Is Full!\n";
                }
                break;

            case 2:
                viewProducts(ids, names, quantities, prices, count);
                break;

            case 3: {
                int id;

                cout << "Enter Product ID: ";
                cin >> id;

                int index = searchProduct(ids, count, id);

                if (index != -1) {
                    cout << "Product Found: " << names[index] << endl;
                } else {
                    cout << "Product Not Found!\n";
                }
                break;
            }

            case 4:
                updateStock(ids, quantities, count);
                break;

            case 5:
                cout << "\nInventory Value (Loop): "
                     << calculateValue(prices, quantities, count);

                cout << "\nInventory Value (Recursion): "
                     << calculateValue(prices, quantities, count, 0)
                     << endl;
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
