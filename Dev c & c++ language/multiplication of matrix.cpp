#include <stdio.h> 
int main() 
{
	int a[10 ][10],b[10][10],c[10][10],i,j,k,r1,r2,c1,c2,;
	printf("enter row and colomn of first matrix \n");
	scanf("%d%d",&r1,&c1);
	printf("enter row and colomn of second matrix \n");
	scanf("%d%d",&r2,&c2);
	while(c1!=r2)
	{
		printf("Error.. coloumn of first is not equal to secound");
		printf("enter row and colomn of first matrix \n");
	printf("enter row and colomn of first matrix \n");
	scanf("%d%d",&r1,&c1);
	printf("enter row and colomn of second matrix \n");
	scanf("%d%d",&r2,&c2);
	}
	
	printf("enter element of first matrix \n");
	for(i=0;i<=r1;i++)
	{
		for(j=0;j<=c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter element of second matrix 2\n");
	for(i=0;i<=r2;i++)
	{
		for(j=0;j<=c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	
	   for(i=0;i<=r1;i++)
	{
		for(j=0;j<=c2;j++)
		{
			int sum=0;
			{
				 for(k=0;k<=c1;k++)
				 {
				 	sum=sum+a[i][k]*b[k][j];
				 }
				 c[i][j]=sum;
			}
		}	
	}
	printf("output \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("   %d",c[i][j]);
		}
		printf("\n");
	}
}

