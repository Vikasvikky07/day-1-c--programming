#include<iostream>
using namespace std;
class student{
	int rno,m1,m2,m3;
	char n[100];
	float avg;
	public:
		void read_data();
		void calculate();
		void display();
};
 void student::read_data()
 {
 	cout<<"enter the roll no:\n";
 	cin>>rno;
 	cout<<"enter the name:\n";
 	cin>>n;
 	cout<<"enter the marks:\n";
 	cin>>m1>>m2>>m3;
 }
 void student::calculate()
 {
 	avg = (m1+m2+m3)/3;
 }
 void student::display()
 {
 	cout<<"name"<<""<<"roll no"<<" "<<"average"<<endl;
 	cout<<n<<" "<<rno<<" "<<avg<<endl;
 }
 int main(){
 	student s[10];
 	int i,n;
 	cout<<"enter the number of students:\n";
 	cin>>n;
 	for(i=1;i<=n;i++)
 	{
 		s[i].read_data();
	 }
	 for(i=1;i<=n;i++)
 	{
 		s[i].calculate();
	 }
	  for(i=1;i<n;i++)
	  {
 		s[i].display();
 	}
	 return 0;
 }
