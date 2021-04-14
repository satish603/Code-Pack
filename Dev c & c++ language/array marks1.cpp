#include<stdio.h>
int main()
{
	float a[10];
	int i, avg=0;

printf("english marks\n");
scanf("%d",&a[0]);
printf("maths marks\n");
scanf("%d",&a[1]);
printf("che marks\n");
scanf("%d",&a[2]);
printf("phy marks\n");
scanf("%d",&a[3]);
printf("cs marks\n");
scanf("%d",&a[4]);
for(i=0;i<5;i++)
{
avg=(avg+a[i])/6;
}

	printf(" %d ",avg);	
}
