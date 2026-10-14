#include<iostream>
using namespace std;
int main()
{
	int number;
	int i=1;
	int factorial=1;
	cout<<"Enter a positive number:";
	cin>>number;
	if(number<0)
	{
		cout<<"Factorial is not defined for a negative number";
	}
	else
	{
	  while(i<=number)
	{
		factorial=factorial*i;
		i++;
	}
	     cout<<"Factorial = "<<factorial<<endl;
    }
	return 0;
}
