#include<stdio.h>
#include<string.h>
main()
{
	char ch[20],s[20];
	printf("enter string 1");
	gets(ch);
	printf("enter string 2");
	gets(s);
	printf("\n\n %d",strcmp(ch,s));
	printf("\n\n %d",stricmp(ch,s));
	printf("\n\n %d",strncmp(ch,s,3));
	
}
