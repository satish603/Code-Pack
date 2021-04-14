#include<stdio.h>
main()
{
	int a[10]={50,42,74,23,45,21,45,12,4,45},*ptr;
	ptr=&a[0];
	for(int i=0;i<10;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	
}
