#include<stdio.h>
#include<string.h>
main()
{
	int i=0,j=0;
	char s1[10],s2[10];
	printf("enter string");
	gets(s1);
	gets(s2);
	while(s1[i]==s2[i] && s1[i]!='\0')
	i++;
	if(s1[i]>s2[i])
	printf("s1>s2");
	else if(s1[i]<s2[i])
	printf("s1<s2");
	else
	printf("s1=s2");
}
