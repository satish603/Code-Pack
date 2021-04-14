#include<iostream>
using namespace std;
class B;
class A
{
	int a;
	public:
	 void f1()
	{
		cout<<"enter the value of a";
		cin>>a;
	}
	friend int add (A ob1,B ob2);
};
class B
{
	int b;
	public:
	f2()
	{
		cout<<"enter value of b";
		cin>>b;
	}
	friend int add(A ob1,B ob2);
};
void add(A ob1,B ob2)
{
	cout<<"sum is"<<ob1.a+ob2.b;
}
int main()
{
	A ob1;
	B ob2;
	ob1.f1();
	ob2.f2();
	add(ob1,ob2);
}
