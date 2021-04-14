#include<iostream>
using namespace std;
class demo
{
	int x;
	public:
		demo(int a)
		{
			x=a;
		}
		void show()
		{
			cout<<x<<endl;
		}
};
int main()
{
	demo d(10),d1(20),d2(30),d3(30),d4(40);
	d.show();
	d1.show();
	d2.show();
	d3.show();
	d4.show();
} 
