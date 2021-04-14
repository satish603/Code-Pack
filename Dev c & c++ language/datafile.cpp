#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[20],sec[10];
	int rno;
	double phno;
	cout<<"enter roll number name section phone number ";
	cin>>rno>>name>>sec>>phno;
	ofstream ob("file.txt");
	ob<<rno<<"\n"<<name<<"\n"<<sec<<"\n"<<phno;
	ob.close();
	ifstream ob1("file.txt");
	ob1>>rno>>name>>sec>>phno;
	cout<<"\n Roll Number : "<<rno;
	cout<<"\n Name : "<<name;
	cout<<"\n section : "<<sec;
	cout<<"\n phone number : "<<phno;
}

