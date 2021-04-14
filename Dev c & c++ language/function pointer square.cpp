#include<stdio.h>
int main()
{
	int sq;
	int square(int *n);
	printf("enter the number \n");
	scanf("%d",&sq);
	printf("\n square is %d",square(&sq));
	printf("\n after function is %d ",sq);
}
int square(int *n)
{
	*n= *n * *n;
	return *n;
}

