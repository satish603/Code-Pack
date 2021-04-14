#include<stdio.h>
int main()
{int n,rev=0,rem;
printf("enter num ");
scanf("%d",&n);
int c=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	
	if(rev==c)
	{printf("it is pallendrome %d",rev);
	}
	else
	printf("it is not pallendrome %d",rev);
}
