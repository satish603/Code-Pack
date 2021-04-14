#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream fout;
	fout.open("country");
	fout<<"usa\n";
	fout<<"uk\n";
	fout<<"india\n";
	fout.close();
	fout.open("capital");
	
	fout<<"washinton\n";
	fout<<"london\n";
	fout<<"delhi\n";
	fout.close();
	
	const int n=80;
	char line[n];
	ifstream fin;
	fin.open("country");
	cout<<"\n contents of country file\n";
	while(fin)
	{
		fin.getline(line,n);
		cout<<"\n"<<line<<"\t";
		
	}
	fin.close();
	fin.open("capital");
	cout<<"\n contents of country file\n";
	while(fin)
	{
	fin.getline(line,n);j
		cout<<"\n"<<line<<"\t";
		
	}
	fin.close();
}                                              

