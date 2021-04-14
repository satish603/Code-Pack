#include<stdio.h>
#include<stdlib.h>
int main()
{

int *p,i,n,sum=0;
printf("enter num");
scanf("%d",&n);
     p= (int*)malloc(n * sizeof(int)); 
printf("enter element");
for(i=0;i<n;i++)
{
	scanf("%d",p+i);
}
printf("element are");
for(i=0;i<n;i++)
{
	printf("\n %d",*(p+i));
}
printf("\n sum is %d",sum);
}
