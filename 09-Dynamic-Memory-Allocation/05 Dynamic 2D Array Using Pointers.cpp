#include <iostream>
using namespace std;

int main()
{
    int rows = 2;
    int columns = 3;

    int** arr = new int*[rows];

    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[columns];
    }

    int value = 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr[i][j] = value++;
        }
    }

    cout << "2D Array:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}
