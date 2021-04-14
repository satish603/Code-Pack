#include<iostream>
using namespace std;
class demo
{
	int a,b;
	public:
		void f1()
		{cout<<"\n enter two number\n";
		cin>>a>>b;}
friend void sum(demo ob);
};
void sum(demo ob)
{
	cout<<"the sum is "<<ob.a+ob.b;
}
int main()
{
	demo d,d1,d2;
	d.f1();
	sum(d);
	d1.f1();
	sum(d1);
	
}

