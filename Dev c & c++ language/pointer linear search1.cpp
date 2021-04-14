#include<stdio.h>
int main()
{
	int a[10],*ptr;
	int i,loc=-1,key;
    ptr=&a[0];
	for(i=0;i<10;i++)
	{
		scanf("%d",ptr+i);
	}
printf("enter value\n");
scanf("%d",&key);
for(i=0;i<9;i++)
{if(*(ptr+i)==key)
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
