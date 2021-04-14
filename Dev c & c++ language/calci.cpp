#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter 2 number";
	cin>>a>>b;
	cout<<"Choose option\n 1: SUM \n 2: diffrence \n 3: multiplication \n 4: division";
	cin>>c;
	switch(c)
	{
		case 1: cout<<"sum is "<<a+b;
		break;
		case 2:cout<<"diffrence is "<<a-b;
		break;
		case 3: cout<<"multi is "<<a*b;
		break;
		case 4:cout<<"div is "<<a/b;
		default:cout<<"error";
	}
}
