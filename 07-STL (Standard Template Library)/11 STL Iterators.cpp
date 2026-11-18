#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> prices;

    prices.push_back(100);
    prices.push_back(200);
    prices.push_back(300);
    prices.push_back(400);

    cout << "Product Prices:\n";

    for(vector<int>::iterator it = prices.begin(); it != prices.end(); it++)
    {
        cout << *it << endl;
    }

    cout << "\nFirst Price: " << *prices.begin();

    cout << "\nLast Price: " << *(prices.end() - 1);

    return 0;
}
