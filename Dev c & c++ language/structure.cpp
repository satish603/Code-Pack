#include<stdio.h>
struct student
{
	char name[6];
	int rollno;
	float reg;
};
main()
{
	struct student s;
	s.name="dsvvff";
	s.reg=11902185;
	s.rollno=25;
	
	printf("%s \n",s.name);
	printf("%d \n",s.rollno);
	printf("%f \n",s.reg);
}
