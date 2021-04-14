#include<iostream>
using namespace std;
class person
{
	public:
		string name;
		int age;
		void getdata()
		{
			cout<<"\nEnter name and age\n";
			cin>>name>>age;
		}
		void display()
		{
			cout<<"\n Name "<<name<<"\n age "<<age;
		}
};
int main()
{
	person p;
	int person::*ptr=&person::age;
	string person::*ptr1=&person::name;
	p.*ptr1="satish";
	p.*ptr=19;
	p.display();
	p.getdata();
	p.display();
}
