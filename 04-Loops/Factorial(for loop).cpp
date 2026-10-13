#include<iostream>
using namespace std;
int main()
{
	int number;
	int factorial=1;
	cout<<"Enter a positive number:";
	cin>>number;
	if(number<0)
	{
		cout<<"Factorial is not defined for negative numbers";
	}
	else 
	{
		for(int i=1;i<=number;i++)
		{
			factorial=factorial*i;
		}
		cout<<"Factorial="<<factorial<<endl;
	}
	return 0;
}
