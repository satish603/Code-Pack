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
	scanf("%s",s.name);
	scanf("%d",&s.rollno);
	scanf("%f",&s.reg);
	
	printf("%s \n",s.name);
	printf("%d \n",s.rollno);
	printf("%f \n",s.reg);
}
