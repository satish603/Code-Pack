#include<stdio.h>
int main()
{
	int a[10]={2,6,65,4,23,50,23,52,3,24};
	int i,loc=-1,key;

printf("enter value\n");
scanf("%d",&key);
for(i=0;i<9;i++)
{
	if(a[i]==key)
	{
		loc=i+1;
		break;
	
	}
}
if(loc!=-1)
{

printf("the value found at %d",loc);
}
else 
printf(" value not found\n");
}
