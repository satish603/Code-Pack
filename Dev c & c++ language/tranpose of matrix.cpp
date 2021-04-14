#include <stdio.h> 
int main() 
{
	int a[10 ][10],b[10][10],r,c,i,j;
	printf("enter row and colomn of first matrix \n");
	scanf("%d%d",&r,&c);
	printf("enter element matrix \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("   %d",a[i][j]);
		}
		printf("\n");
	}
	printf("tranpose of matrix \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			b[j][i]=a[i][j];
		}
		
	}
	
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("   %d",b[i][j]);
		}
		printf("\n");
	}
	
}
