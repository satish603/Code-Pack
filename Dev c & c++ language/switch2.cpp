#include<stdio.h>
int main()
{
	int n,a,b,c;
	printf("enter choice 1-2");
	
	scanf("%d",&n);
	switch(n)
	{case 1:
	printf("enter  number");
	scanf("%d",&a);
	printf("enter  number");
	scanf("%d",&b);
	c=a+b;
	printf("sum of two num is%d",c);
	break;
	case 2:
	printf("enter two number");
	scanf("%d",&a);
	scanf("%d",&b);
	c=a-b;
	printf("subtraction of two num is%d",c);
	break;
	
	default:
		printf("invalid");
	}
	
}
