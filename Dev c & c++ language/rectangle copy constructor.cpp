#include<iostream>
using namespace std;
class rectangle
{
	public:
		int l,b;
		rectangle(int a, int c):l(a),b(c){
		}
		rectangle(rectangle &ob)
		{
			l=ob.l;
			b=ob.b;
		}
		area()
		{
			cout<<l*b<<endl;
		}
};
main()
{
	rectangle o(10,20),o1(5,20),o2(o);
	o.area();
	o1.area();
	o2.area();
}
