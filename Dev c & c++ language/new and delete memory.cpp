#include<iostream>
using namespace std;
main()
{
	int *p= new int(10);
	p=new(nothrow)int;
	if(!p)
	cout<<"alloation of memory faild\n";
	else
	{
		cout<<"enter pointer into the memory \n";
		cin>>*p;
		cout<<"vaule is "<<*p<<"\n";
	}
	float *k= new float(22.33);
	k=new(nothrow)float;
	if(!k)
	{
		cout<<"No mem allocated";
	}
	else
	{
		for(int i=0;i<5;i++)
		{
			cin>>k[i];
		}
		for(int i=0;i<5;i++)
		{
			cout<<k[i]<<"\n";
		}
	}
	delete[] k;
	delete p;
	delete k;
	for(int i=0;i<5;i++)
		{
			cout<<k[i]<<"\n";
		}
}
