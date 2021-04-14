#include<iostream>
using namespace std;
class demo
{
	static int x;
	static int y;
	public:
		static void print()
		{
			cout<<"\nvalude of x"<<x;
			cout<<"\t \t value of y:"<<y<<endl;
		}
};
int demo:: x=10;
int demo:: y=20;
int main()
{
	demo o;
	cout<<"printing through boject name:"<<endl;
	o.print();
	cout<<"\nprinting through class name:"<<endl;
	demo::print();
	return 0;
}
