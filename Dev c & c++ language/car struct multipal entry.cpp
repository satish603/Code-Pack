#include<stdio.h>
struct student
{
	char name[20];
	float price;
	int seat;

};
main()
{   struct student s[10];
for(int i=0;i<2;i++)
	{
	
	printf("Enter name of car");
	scanf("%s",s[i].name);
	printf("Enter price");
	scanf("%f",&s[i].price);
	printf("Enter no of seat");
	scanf("%d",&s[i].seat);
 }
	for(int i=0;i<2;i++)
	{
	printf("\n\n\n%s \n",s[i].name);
	printf("%f \n",s[i].price);
	printf("%d \n",s[i].seat);
}
}
