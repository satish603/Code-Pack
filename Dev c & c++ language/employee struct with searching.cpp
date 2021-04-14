#include<stdio.h>
struct employee
{
	char name[10];
	int id;
	float ph;

};
main()
{ int i,loc=-1,key;
	struct employee e[3];
	employee *p=&e[3];
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
 

printf("enter value\n");
scanf("%d",&key);
for(i=0;i<9;i++)
{
	if(e[i].id==key)
	{
		loc=i+1;
		break;
	
	}
}
if(loc!=-1)
{

printf("the value found at %d",loc);
}
else 
printf(" value not found\n");
}
