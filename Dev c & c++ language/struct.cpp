




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
	printf("Enter name");
	scanf("%s",s.name);
	printf("Enter rollno");
	scanf("%d",&s.rollno);
	printf("Enter reg num");
	scanf("%f",&s.reg);
	
	printf("\n\n\n%s \n",s.name);
	printf("%d \n",s.rollno);
	printf("%f \n",s.reg);
}
