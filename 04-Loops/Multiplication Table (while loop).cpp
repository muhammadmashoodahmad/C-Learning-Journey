#include<iostream>
using namespace std;
int main()
{
	int number;
	int i=1;
	cout<<"Enter a numer:";
	cin>>number;
	while(i<=10)
	{
		cout<<number<<"x"<<i<<"="<<number*i<<endl;
		i++;
	}
	return 0;
}
