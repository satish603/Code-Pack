#include<iostream>
using namespace std;
int main()
{
	int n,i,r,sum=0,temp;
	cout<<"enter number";
	cin>>n;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	cout<<"number is pallindrom"<<sum;
	else
	cout<<"number is not pallindrom"<<sum;
	
	
	
}
