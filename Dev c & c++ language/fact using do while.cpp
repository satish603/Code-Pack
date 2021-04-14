#include<stdio.h>
int main()
{
	int n,i=1,f=1;
	printf("enter num");
	scanf("%d",&n);
	
	do
	{f=f*i;
	printf("\n factorial of %d = %d",i,f);
	i++;
	}
	while(i<=n);
	
	
}
