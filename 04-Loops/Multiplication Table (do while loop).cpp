#include<iostream>
using namespace std;
int main()
{
	int number;
	int i=1;
	cout<<"Enter a number =";
	cin>>number;
	do
	{
	    cout<<number<<"x"<<i<<"="<<number*i<<endl;
		i++;	
	}
	while(i<=10);
	return 0;
}
