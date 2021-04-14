#include<iostream>
using namespace std;
class maths
{
	int a;
	int b;
	int c;
	public:
	void cal(int a, int b)
	{
	cout<<"enter any 1-4\n";
	cin>>c;
		switch(c)
		{
			case 1: cout<<"addtion "<<a+b;
			break;
			case 2:cout<<"subtraction "<<a-b;
            break;	
			case 3:cout<<"multiplication "<<a*b;
	        break;
			case 4:cout<<"division "<<a/b;
			break;
		default:cout<<"error";
		}
	}
};


main()
{ int a,b;
	maths m1;
	cout<<"enter two num";
	cin>>a>>b;
	m1.cal(a,b);
}
