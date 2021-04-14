#include<iostream>
using namespace std;
void add(int &ref);
int main()
{
	int num=2;
	int &ref=num;
	cout<<"the value befour calling the function is "<<num;
	add(num);
	cout<<"\n th value of num after calling the function is "<<num;
}
void add(int &ref)
{
	ref=ref+10;
	cout<<"\n the value of num in called function is "<<ref;
}
