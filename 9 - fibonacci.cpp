#include<iostream>
using namespace std;
class series{
	int temp,n,i,a,b;
	public:
		void generate(int);	
};

void series::generate(int n)
{
	a=0;
	b=1;
	cout<<a<<" "<<b;
	for(i=1;i<=n;i++)
	{
	temp = a+b;
	a = b;
	b = temp;
	cout<<" "<<temp;
    }
}
int main()
{
	series s;
	int n;
	cout<<"enter the number of rows:";
	cin>>n;
	s.generate(n);
	return 0;
}

