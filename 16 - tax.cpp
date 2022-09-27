#include<iostream>
using namespace std;
int main()
{
	int sal,net;
	float tax;
	cout<<"enter the income:\n";
	cin>>sal;
	if(sal<=60000)
	{
		tax = 0;
		net =sal-tax;
	}
	else if(sal>60000 and sal<=150000)
	{
		tax = sal*0.05;
		net = sal-tax;
	}
	else if(sal>150000 and sal<=500000)
	{
		tax = sal*0.1;
		net = sal-tax;
	}
	else
	{
		tax = sal*0.15;
		net = sal-tax;
	}
	cout<<"tax = "<<tax;
	cout<<"\nnet income = "<<net;
	return 0;
}
