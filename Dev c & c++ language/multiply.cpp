#include<iostream>
using namespace std;
int table(int n,int m)
{
	if(m<=10)
	cout<<n<<"x"<<m<<"="<<m*n<<endl;
	table(n,m+1);
}
int main()
{
	int a,b=1;
	cout<<"enter table";
	cin>>a;
	table(a,b);
	
}
