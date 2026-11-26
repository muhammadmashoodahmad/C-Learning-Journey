#include <iostream>
using namespace std;

int main()
{
    int number = 100;
    float price = 25.5;
    char grade = 'A';

    void* ptr;

    ptr = &number;
    cout << "Integer Value: " << *(int*)ptr << endl;

    ptr = &price;
    cout << "Float Value: " << *(float*)ptr << endl;

    ptr = &grade;
    cout << "Character Value: " << *(char*)ptr << endl;

    return 0;
}