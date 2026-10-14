#include<iostream>
using namespace std;
int main()
{
    int number;
    int i=1;
    int factorial=1;
    cout<<"Enter a Positive number = ";
    cin>>number;
    if(number<0)
    {
    	cout<<"Factorital is not defined for negative number";
	}
	else
	{
		do
		{
			factorial=factorial*i;
			i++;
		}
		while(i<=number);
		cout<<"Factorial = "<<factorial<<endl;
	}
	return 0;
}
