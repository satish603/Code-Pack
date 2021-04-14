#include<iostream>
using namespace std;
class shapes
{public:
	int r,l,b;
	int area()
	{
		cout<<"enter radius";
		cin>>r;
		cout<<"Area of circle is "<<3.14*r*r;
	}
	int volume()
	{
		cout<<"enter side of cube";
		cin>>l;
		cout<<"volume is "<<l*l*l;
	}
	int cirfrnc()
	{
		cout<<"circumfrenece of circle is "<<2*3.14*r*r;
	}
};
main()
{
	shapes s;
	int (shapes::*ptr)()=&shapes::volume;
    int (shapes::*ptr1)()=&shapes::area;
    (s.*ptr)();
    (s.*ptr1)();
}
