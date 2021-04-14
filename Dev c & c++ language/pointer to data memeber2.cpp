#include<iostream>
using namespace std;
class person
{
	public:
		string name;
		int age;
		void getdata(string n,int a)
		{name=n;
		age=a;
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
	//int person::*ptr=&person::age;
	//string person::*ptr1=&person::name;
	void(person::*ptr2)(string n, int a)=&person::getdata;
	void (person::*ptr3)()=&person::display;
	(p.*ptr2)("hello",25);
	(p.*ptr3)();
	p.display();
}
