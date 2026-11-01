#include <iostream>
using namespace std;

double calculateBill(int units, double rate)
{
    double bill = units * rate;

    return bill;
}

int main()
{
    int units;
    double rate, totalBill;

    cout << "Enter electricity units: ";
    cin >> units;

    cout << "Enter price per unit: ";
    cin >> rate;

    totalBill = calculateBill(units, rate);

    cout << "Total Electricity Bill: " << totalBill << endl;

    return 0;
}
