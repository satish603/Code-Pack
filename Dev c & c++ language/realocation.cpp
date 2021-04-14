#include<stdio.h>
#include<stdlib.h>
int main()
{

int *p,i,n,m,sum=0;
printf("enter num");
scanf("%d",&n);
p=(int*)malloc(n* sizeof(int));
printf("enter element\n");
for(i=0;i<n;i++)
{
	scanf("%d",p+i);
}
printf("element are");
for(i=0;i<n;i++)
{
	printf("\n %d",*(p+i));
}
printf("enter new size \n");
scanf("%d",&m);
p=(int*)realloc(p,m*sizeof(int));
printf("enter new elment");
for(i=0;i<n;i++)
{
	scanf("%d",p+i);
}
printf("all the element are");
for(i=0;i<m+n;i++)
{
printf("\n %d",*(p+i));
}
}
