#include<iostream>
using namespace std;
void volume(int l=10,int w=10,int h=10)
{
	cout<<"volume ="<<l*w*h<<endl;
}
main()
{
	volume();
	volume(5);
	volume(8,6);
	volume(6,4,5);
}
