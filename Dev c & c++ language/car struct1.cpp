#include<stdio.h>
struct student
{
	char name[20];
	float price;
	int seat;

};
main()
{   struct student s;
	
	printf("Enter name of car");
	scanf("%s",s.name);
	printf("Enter price");
	scanf("%f",&s.price);
	printf("Enter no of seat");
	scanf("%d",&s.seat);

	
	
	printf("\n\n\n%s \n",s.name);
	printf("%f \n",s.price);
	printf("%d \n",s.seat);

struct student s2;
	
	printf("Enter name of car");
	scanf("%s",s2.name);
	printf("Enter price");
	scanf("%f",&s2.price);
	printf("Enter no of seat");
	scanf("%d",&s.seat);

	
	
	printf("\n\n\n%s \n",s2.name);
	printf("%f \n",s2.price);
	printf("%d \n",s2.seat);
}
