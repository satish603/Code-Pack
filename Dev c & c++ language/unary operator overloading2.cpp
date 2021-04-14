#include<iostream>
using namespace std;
class num{
	int x,y,z;public:
		num(int n)
		{
			x=n;
	
		}
		
		void show_data()
		{
			cout<<"\n x="<<x<<"\n";

		}
		friend void operator++(num,int);
		friend void operator--(num,int);
};
void operator++(num n,int)
		{
			cout<<n.x++;
			
		}
		void operator--(num n,int)
		{
			cout<<n.x--;
	
		}
int main()
{
	num n(4);
	n--;
	n.show_data();
	n++;
	n.show_data();
}
