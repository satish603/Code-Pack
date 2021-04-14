#include <stdio.h> 
int main() 
{
	int a[10][10],i,j;
	printf("enter element of matrix 1\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if (a[i]=a[j])
			printf("   %d",a[i][j]);
		}
		printf("\n");
	}
	

}

