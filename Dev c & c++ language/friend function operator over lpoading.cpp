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
		friend void operator-(num);
		
		void show_data()
		{
			cout<<"\n x="<<x<<"\n";
			cout<<"\n y="<<y<<"\n";
			cout<<"\n z="<<z<<"\n";
		}
};
void operator-(num n)
		{
			n.x=-n.x;
			n.y=-n.y;
			n.z=-n.z;
		}
int main()
{
	num n(4,5,6);
	n.show_data();
	-n;
	n.show_data();
}
