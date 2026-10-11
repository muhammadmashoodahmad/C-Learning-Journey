#include<iostream>
using namespace std;
int main()
{
	int num1;
	int num2;
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter  second number:";
	cin>>num2;
	if(num1>num2)
	{
		cout<<"First number is greater then second number";
	}
	else if(num2>num1)
	{
		cout<<"Second number is greater then first number";
	}
	else
	{
		cout<<"Both numbers are equal";
	}
	return 0;
}
