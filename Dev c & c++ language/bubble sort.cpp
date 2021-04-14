#include<stdio.h>
int main()
{
	int a[10]={52,3,52,78,52,42,5,42,522,36};
	int pass,temp,i;
printf("Befour bubble sort\n");
for(i=0;i<10;i++)
{
	printf("  %d",a[i]);
}
printf("\n\n\n");
for(pass=1;pass<10;pass++)
{
	for(i=0;i<10-1;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
		
}}
printf("after bubble sort\n");
for(i=0;i<10;i++)
	{
		printf("  %d",a[i]);
	}
}
