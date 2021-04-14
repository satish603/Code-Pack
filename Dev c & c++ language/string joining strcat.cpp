#include<stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[20];
	printf("enter string 1");
	gets(s1);
	printf("enter string 2");
	gets(s2);
	
	printf("\n %s",strncat(s1,s2,4));
	
}
