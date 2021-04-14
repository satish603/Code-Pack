#include<iostream>
using namespace std;
void display(int);
void display(int,float);
void display(int ,float,int);
int main()
{
	int a=5,b=6;
	float c=12.6;
	display(a);
	display(a,b);
	display(a,b,c);
	
}
void display(int var)
{
	cout<<"integer number:"<<var<<endl;
}
void display(int var1,float var2)
{
	cout<<"interger number:"<<var1;
	cout<<"\nfloat number"<<var2;
}
void display(int var1,float var2,int var3)
{
	cout<<" \nsum is "<<var1+var2+var3;
}
