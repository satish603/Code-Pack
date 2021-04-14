#include<stdio.h>
int main()
{
	int n,i=1;
	printf("enter num");
	scanf("%d",&n);
	
	do
	{
	printf("\n %d * %d = %d \n",n,i,n*i);
	i++;
	}
	while(i<=10);
	
	
}
