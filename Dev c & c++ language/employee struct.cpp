
#include<stdio.h>
struct employee
{
	char name[10];
	int id;
	float ph;

};
main()
{
	struct employee e[3];
	employee *p=&e[0];
	for(int i=0;i<3;i++)
	{
	
	printf("Enter name");
	scanf("%s",p->name);
	printf("Enter id");
	scanf("%d",p->id);
	printf("Enter ph num");
	scanf("%f",p->ph);
}
for(int i=0;i<3;i++)
{

	printf("%s \n",p->name);
	printf("%d \n",p->id);
	printf("%f \n",p->ph);
}
}
