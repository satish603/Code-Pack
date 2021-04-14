#include<stdio.h>
struct employee
{
	char name[10];
	int id;
	float ph;

};
main()
{
	struct employee e;
	employee *p=&e;
	scanf("%s",p->name);
	scanf("%d",p->id);
	scanf("%f",p->ph);
	
	printf("%s \n",p->name);
	printf("%d \n",p->id);
	printf("%f \n",p->ph);
}
