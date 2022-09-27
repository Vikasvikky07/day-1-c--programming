#include<iostream>
using namespace std;
class bill
{
	int pr,cr,cno,units;
	float EB;
	char cname[100];
	public:
		void read_data();
		void compute();
		void display();	
};
void bill::read_data()
{
	cout<<"enter the consumer number:";
	cin>>cno;
	cout<<"\nenter the consumer name:";
	cin>>cname;
	cout<<"\n enter the type of connection:";
	cin>>connection;
	cout<<"\nenter the previous month reading:";
	cin>>pr;
	cout<<"\n enter the current month reading:";
	cin>>cr;
}
void bill::compute()
{
	units = cr-pr;
	if( connection = "domestic")
	{
		if(units<=100)
		{
			EB = 1*units;
		}
		else if(units>100 and units<=200)
		{
			EB = 2.5*units;
		}
		else if(units>200 and units<=500)
		{
			EB = 4*units;
		}
		else 
		{
			EB = 6*units;
		}
	}
	else if(connection = "commercial")
	{
		if(units<=100)
		{
			EB = 2*units;
		}
		else if(units>100 and units<=200)
		{
			EB = 4.5*units;
		}
		else if(units>200 and units<=500)
		{
			EB = 6*units;
		}
		else 
		{
			EB = 7*units;
		}
	}
}
void bill::display()
{
	cout<<"-------------details--------------";
	cout<<"\nconsumer no"<<" "<<"consumer name"<<" "<<"connection"<<" "<<"units"<<" "<<"electricity bill\n";
	cout<<cno<<" "<<cname<<" "<<connection<<" "<<units<<" "<<EB;
}
int main()
{
bill b;
b.read_data();
b.compute();
b.display();
return 0;
}

