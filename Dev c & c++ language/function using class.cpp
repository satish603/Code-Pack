#include<iostream>
using namespace std;
class first
{
	int a;
	float b;
	public:
		void f1(int d)
		{
			cout<<"NUMBER "<<d;
		}
	float f2()
	{
		cout<<"\nenter num";
		cin>>b;
		return b;
	}
	
};

main()
{
	first o1,o2;
	float x;
	o1.f1(12);
	x=o2.f2();
	cout<<"you entered\n"<< x;
}
