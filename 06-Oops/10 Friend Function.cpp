#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int number, double amount) {
        accountHolder = name;
        accountNumber = number;
        balance = amount;
    }

    friend void displayAccount(BankAccount obj);
};

void displayAccount(BankAccount obj) {
    cout << "\nAccount Holder: " << obj.accountHolder;
    cout << "\nAccount Number: " << obj.accountNumber;
    cout << "\nBalance: " << obj.balance << endl;
}

int main() {
    BankAccount b1("Ali", 1001, 75000);

    BankAccount b2("Ahmad", 1002, 95000);

    displayAccount(b1);
    displayAccount(b2);

    return 0;
}
