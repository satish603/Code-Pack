#include<iostream>
using namespace std;
class circle
{
	float r;
	float a;
	float c;
	public:
		void area(float rad,float pi=3.14);
		void circum(float ra,float pi=3.14);
};
 void circle::area(float rad,float pi)
 {
 	
 r=rad;
  	a=pi*r*r;
 	cout<<"\n area is "<<a;
 }
 void circle::circum(float ra,float pi)
 {r=ra;
 	c=2*pi*r;
 	cout<<"\ncircumfrence is "<<c;
 }
 
 main()
 {
 	circle c1,c2,c3;
 	c1.area(2);
 	c1.circum(3);
 	c2.area(12);
 	c2.circum(13);
 	c3.area(21);
 	c3.circum(31);
 	
 }
