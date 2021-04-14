#include<stdio.h>
int main()
{
	int n,f=1;
	printf("enter num");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{f=f*i;
	printf("factorial of %d\t is %d\n",i,f);
	}
	
	
}
