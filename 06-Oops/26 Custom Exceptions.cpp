#include<iostream>
#include<string>
using namespace std;

class InsufficientBalance
{
	public:
		string message;

		InsufficientBalance(string msg)
		{
			message = msg;
		}
};

class BankAccount
{
	private:
		double balance;

	public:
		BankAccount(double b)
		{
			balance = b;
		}

		void withdraw(double amount)
		{
			if(amount > balance)
			{
				throw InsufficientBalance("Insufficient Account Balance!");
			}

			if(amount <= 0)
			{
				throw InsufficientBalance("Invalid Withdrawal Amount!");
			}

			balance -= amount;

			cout << "Withdrawal Successful!" << endl;
			cout << "Remaining Balance: " << balance << endl;
		}
};

int main()
{
	BankAccount account(50000);

	double amount;

	cout << "Enter Withdrawal Amount: ";
	cin >> amount;

	try
	{
		account.withdraw(amount);
	}
	catch(InsufficientBalance e)
	{
		cout << "Error: " << e.message << endl;
	}

	cout << "Program Ended." << endl;

	return 0;
}
