#include<iostream>
#include<string>
using namespace std;
int main()
{
	string studentname;
	int age;
	float marks;
	bool passed;
	cout<<"Enter your Name:";
	getline(cin,studentname);
	cout<<"Enter your Age:";
	cin>>age;
	cout<<"Enter your Marks:";
	cin>>marks;
	passed=marks>=50;
	cout<<"\n-----Student Information-----"<<endl;
	cout<<"Name:"<<studentname<<endl;
	cout<<"Age:"<<age<<endl;
	cout<<"Marks:"<<marks<<endl;
	cout<<boolalpha;
	cout<<"Passed:"<<passed<<endl;
	return 0;
}
