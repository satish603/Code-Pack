#include<iostream>
using namespace std;
class a
{
	int x;
	public:
		void show(int x)
		{
			this->x=x;
			cout<<"\n "<<x;
			cout<<"\n address of object"<<this;"
		}
};
int main()
{
	a ob2,ob1,*ptr;
	ptr=&ob1;
	cout<<"address by pointer "<<ptr;
	ob2.show(50);
}
