#include<iostream>
using namespace std;
class student
{
		int roll;
		float cgpa;
		public:
			getc()
			{
				cin>>roll>>cgpa;
			}
			putc()
			{
				cout<<"roll num is "<<roll<<" and cgpa is "<<cgpa;
			}
	
}s1;
int main()
{
	cout<<"enter roll num and cgpa";
	s1.getc();
	s1.putc();
}
