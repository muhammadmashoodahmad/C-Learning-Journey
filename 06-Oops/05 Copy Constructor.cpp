#include <iostream>
using namespace std;

class Product {
private:
    string name;
    double price;
    int stock;

public:
    Product(string n, double p, int s) {
        name = n;
        price = p;
        stock = s;
    }

    Product(const Product &p) {
        name = p.name;
        price = p.price;
        stock = p.stock;
    }

    void displayInfo() {
        cout << "\nProduct Name: " << name;
        cout << "\nPrice: " << price;
        cout << "\nStock: " << stock << endl;
    }
};

int main() {
    Product p1("Keyboard", 2500, 10);

    Product p2 = p1;

    Product p3(p1);

    cout << "\nOriginal Product:";
    p1.displayInfo();

    cout << "\nCopied Product:";
    p2.displayInfo();

    cout << "\nAnother Copied Product:";
    p3.displayInfo();

    return 0;
}
