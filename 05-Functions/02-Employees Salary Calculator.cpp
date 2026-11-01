#include<iostream>
using namespace std;
double calculate_salary(double basic_salary,double bonus)
{
	double total_salary=basic_salary+bonus;
	return total_salary;
}
int main()
{
	double basic_salary,bonus,final_salary;
	cout<<"Enter Basic Salary:";
	cin>>basic_salary;
	cout<<"Enter Bonus:";
	cin>>bonus;
	final_salary=calculate_salary(basic_salary,bonus);
	cout<<"Total Salary:"<<final_salary<<endl;
	return 0;
}
