#include<stdio.h>
main()
{
	int i,j;
	char s1[10],s2[10];
	printf("enter string1");
	gets(s1);
	printf("enter string2");
	gets(s2);
	for(i=0;s1[i]!='\0';i++);
		for(j=0;s2[j]!='\0';j++,i++)
		{
			s1[i]=s2[j];
		}
		s1[i]='\0';
	printf("after concation  is     %s\n",s1);
	
}
