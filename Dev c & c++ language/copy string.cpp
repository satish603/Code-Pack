#include<stdio.h>
main()
{
	int i;
	char s1[10],s2[10];
	printf("enter char");
	gets(s1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];
		
	}
	printf("string is     %s\n",s2);
	
}
