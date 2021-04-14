#include<iostream>
using namespace std;
class student
{
	int roll;
	int cgpa;
	public:
		void gets();
		void puts();
		
};

main()
{
	student s1;
	float x;
	cout<<"enter radius"<<x;
	s1.gets(x);
	s1.puts(x);
}



void student::gets()
{
	cout<<"enter roll num ";
	cin>>roll;
	cout<<"enter cgpa ";
	cin>>cgpa;
}
void student::puts()
{
	cout<<"Roll Number: "<<roll;
	cout<<"\nCGPA :"<<cgpa;
}
