#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	int age;
	cout<<" Enter your Name:";
	getline(cin,name);
	cout<<" Enter your Age:";
	cin>>age;
	cout<<" Your Name is:"<<name<<endl;
	cout<<" Your Age is:"<<age<<endl;
	return 0;
}
