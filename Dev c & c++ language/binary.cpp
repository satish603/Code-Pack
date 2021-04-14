#include<stdio.h>
int main()
{
	int a[10]={2,6,65,4,23,50,23,52,3,24};
	int i,beg=0,last=9,key,mid,loc;

printf("enter value\n");
scanf("%d",&key);
while(beg<=last)
{
	mid=(beg+last)/2;

	if(a[mid]==key)
	{
		loc=mid;
		break;
	
	}

else if(a[mid]>key)
{
last=mid-1;
}
else  if (a[mid]<key)
{
	beg=mid+1;
}	
}
if(loc!=1)
printf(" value not found\n");
else ("value found at %d",loc);
}
