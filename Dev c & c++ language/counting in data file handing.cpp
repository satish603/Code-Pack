#include<stdlib.h>
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	fstream s;
	int line=1,nospace=0,notabs=0,nochars=0;
	s.open("line.txt",ios::in);
	char ch;
	if(!s)
	{
		cout<<"\n file could not found";
		exit(1);
	}
	s.get(ch);
	while(s.eof()==0)
	{
		if(ch=='\n')
		line++;
		else if(ch==' ')
		nospace++;
		else if (ch=='\t')
		notabs++;
		nochars++;
		s.get(ch);
		
	}
	cout<<"\n Line :"<<line<<"  "<<"space: ";
	cout<<nospace<<" "<<notabs<<" "<<"charas:"<<nochars;
	cout<<nospace<<" "<<"Tabs:"<<notabs<<" "<<"charas:"<<nochars;
	return 0;
}
