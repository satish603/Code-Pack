#include<iostream>
using namespace std;
class num{
	int x,y,z;public:
		num(int n,int n1,int n2)
		{
			x=n;
			y=n1;
			z=n2;
		}
		void operator--()
		{
			x=--x;
			y=--y;
			z=--z;
		}
		void show_data()
		{
			cout<<"\n x="<<x<<"\n";
			cout<<"\n y="<<y<<"\n";
			cout<<"\n z="<<z<<"\n";
		}
};
int main()
{
	num n(4,5,6);
	n.show_data();
	--n;
	n.show_data();
}
