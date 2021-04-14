#include<stdio.h>
struct student
{
	char name[20];
	float price;
	int seat;

};
main()
{
	
	struct student s;
	printf("Enter name of car");
	scanf("%s",s.name);
	printf("Enter price");
	scanf("%f",&s.price);
	printf("Enter no of seat");
	scanf("%f",&s.seat);
	
	printf("\n\n\n%s \n",s.name);
	printf("%d \n",s.price);
	printf("%f \n",s.seat);
}
