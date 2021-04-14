#include<iostream>
using namespace std;
int main()
{
	int a=10,b=20;
	void swap(int *x, int *y);
	cout<<"befour swapping "<<a<<"\t"<<b;
	swap(&a,&b);
	cout<<"after swapping "<<a<<"\t"<<b;
	
	
}

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	cout<<*x<<*y;
}
