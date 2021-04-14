#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value of a \n");
	scanf("%d",&a);
	printf("enter value of b \n");
	scanf("%d",&b);
	printf("enter value of c \n");
	scanf("%d",&c);
	if(a<b)
	{
		if(a<c)
		{printf(" A is smallest %d",a);
		}
		else
		printf("c is smallest %d",c);
	}
	else
	{if(b<c)
	{
		printf("b is smallest %d",b);
	}
	else 
	printf("c is smallest %d",c);
	}
	
}
