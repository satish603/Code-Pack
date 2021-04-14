#include<iostream>
using namespace std;
class num{
	int x,y,z;public:
		num(int n,int n1)
		{
			x=n;
			y=n1;
		}
		void operator <<()
		{
			x=<<x;
			y=<<y;
		}
		void show_data()
		{
			cout<<"\n x="<<x<<"\n";
			cout<<"\n y="<<y<<"\n";
			
		}
};
int main()
{
	num n(10,20);
	n.show_data();
	<<n;
	n.show_data();
}
