#include<iostream>
using namespace std;
class counter
{
	int id;
	public:
		counter(int i)
		{
			id=i;
			cout<<"\ncontructor of object with id="<<id;
		}
		~counter()
		{
			cout<<"\n Destructor with id="<<id;
		}
};
main()
{
	counter c1(1);
	counter c2(2);
	counter c3(3);
	cout<<"\n End of main";
}
