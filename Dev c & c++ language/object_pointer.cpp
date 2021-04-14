#include<iostream>
using namespace std;
class demo
{
	public:
	int a,b;
	float c;
	char d;
	f1()
	{
		cout<<"\nenter data\n";
		cin>>a>>b>>c>>d;
	}
	f2()
	{
		cout<<a<<" "<<b<<" "<<" "<<c<<" "<<d;
	}
	
};
int main()
{
	demo d1,d2,*p,*q;
	p=&d1;
	p-> a=10;
	cout<<p->a;
//	d1.f1();
//	d1.f2();
	cout<<"  "<<(*p).a;
	q=&d2;
	q->f1();
	q->f2();
}
