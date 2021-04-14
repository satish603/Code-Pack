#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==1)
	return(1);
	else
	return (n*fact(n-1));
}
int main()
{
	int a,f;
	cout<<"enter no fact ";
	cin>>a;
	fact(a);
	f=fact(a);
	cout<<"the fact is "<<f;
	
}
