#include<stdio.h>
#include<stdlib.h>
int main()
{

float *p;
int i,n,sum=0;
printf("enter num");
scanf("%f",&n);
p=(float*) calloc(n,sizeof(float));
printf("enter element");
for(i=0;i<n;i++)
{
	scanf("%f",p+i);
}
printf("element are");
for(i=0;i<n;i++)
{
	printf("\n %f %d",*(p+i));
	sum=sum+*(p+i);
}
printf("\n sum is %f",sum);
}
