#include <iostream>
using namespace std;

double deposit(double balance, double amount)
{
    if (amount > 0)
    {
        balance += amount;
        cout << "Amount deposited successfully!" << endl;
    }
    else
    {
        cout << "Invalid deposit amount!" << endl;
    }

    return balance;
}

double withdraw(double balance, double amount)
{
    if (amount <= 0)
    {
        cout << "Invalid withdrawal amount!" << endl;
    }
    else if (amount > balance)
    {
        cout << "Insufficient balance!" << endl;
    }
    else
    {
        balance -= amount;
        cout << "Amount withdrawn successfully!" << endl;
    }

    return balance;
}

void checkBalance(double balance)
{
    cout << "Current Balance: Rs. " << balance << endl;
}

int main()
{
    double balance = 10000;
    double amount;
    int choice;

    do
    {
        cout << "\n===== BANK MENU =====" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;

                balance = deposit(balance, amount);
                break;

            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;

                balance = withdraw(balance, amount);
                break;

            case 3:
                checkBalance(balance);
                break;

            case 4:
                cout << "Thank you for using our banking system!" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
