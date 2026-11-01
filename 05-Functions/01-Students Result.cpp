#include<iostream>
using namespace std;
void claculate_result(int marks)
{
	double percentage=marks/5.0;                   // marks out of 500 
	cout<<"Percentage:"<<percentage<<"%"<<endl;
	      if(percentage>=50)
	      {
	      	cout<<"Result Pass"<<endl;
		  }
		  else
		  {
		  	cout<<"Result Fail"<<endl;
          }
}
int main()
{
	int marks;
	for(int i=1;i<=3;i++)
	{
		cout<<"\nEnter Student "<<i<<" Marks:";
		cin>>marks;
		claculate_result(marks);
	}
	return 0;
}
