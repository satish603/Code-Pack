#include<iostream>
using namespace std;
class box
{
	int x;
	int c;
	public:
		static int count;
		void f1(int a)
		{
			c=a;
			count=count*2;
			c=c*2;
		}
		void print()
		{
			cout<<"\n static variable count:"<<box::count;
			cout<<"\tnonstaic variable count: "<< c <<endl;
		}
};
int box::count =1;
int main()
{
	box b1,b2;
	b1.f1(1);
	b1.print();
	b2.f1(1);
	b2.print();
	return 0;
}
