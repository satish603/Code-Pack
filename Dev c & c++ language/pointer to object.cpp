#include<iostream>
#include<string.h>
using namespace std;

class person
{
	string name;
	int age;
	public:
		void getdata(string n, int a)
		{
			name=n;
			age=a;
		}
		display()
		{
			cout<<" Name = "<<name;
			cout<<"\n age = "<<age;
		}
};
int main()
{
	person p, *ptr;
	ptr=&p;
	ptr->getdata("ram",20);
	ptr->display();
}
