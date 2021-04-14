
#include<stdio.h>
struct student
{
	char name[20];
	float price;
	int seat;

};
main()
{   struct student s;
student *p=&s;
	
	printf("Enter name of car");
	scanf("%s",p->name);
	printf("Enter price");
	scanf("%f",&p->price);
	printf("Enter no of seat");
	scanf("%d",&p->seat);
 
	printf("\n\n\n%s \n",p->name);
	printf("%f \n",p->price);
	printf("%d \n",p->seat);
}
