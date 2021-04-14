#include<iostream>
#include<fstream>
	using namespace std;
	main()
	{
		int a,b;
		cin>>a>>b;
		ofstream of;
		of.open("file",ios::app);
		of<<a<<b;
		int p=of.tellp();
		cout<<"\ncurrent postion of put pointrt = "<<p;
	}
