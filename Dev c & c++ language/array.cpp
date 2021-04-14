#include<iostream>
using namespace std;
main()
{
	int a[10],i,*p,sum=0;
	p=a;
	cout<<"Enter array";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
		sum=sum+*(p+i);
		cout<<*(p+i)<<" ";
	}
	cout<<"\n summof element is"<<sum;
}
