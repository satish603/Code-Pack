#include<stdio.h>
#include<string.h>
main()
{
	char ch[20],s[20],c[20];
	printf("enter string 1");
	gets(ch);
	printf("enter string 2");
	gets(s);
	
	printf("length of the string is %d\n",strlen(ch));
	printf("\nstring in lower %s",strlwr(ch));
	printf("\nstring in upper %s",strupr(ch));
	printf("\nstring reverse %s",strrev(ch));	
	
	printf("\nstring copy %s",strcpy(ch,s));
	printf("\nstring copy %s",strncpy(s,c,5));
		
}
