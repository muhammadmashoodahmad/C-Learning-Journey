#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter your marks:";
	cin>>marks;
	if(marks>=50)
	{
		cout<<"You have passed"<<endl;
		if(marks>=80)
		{
			cout<<"You got a good grade";
			}
			else
			{
				cout<<"You got a normal grade";
			}
		}
	
	else
	{
		cout<<"You have failed";
	}
	return 0;
}
