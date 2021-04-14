#include<stdio.h>
#include<string.h>
main()
{
	int i=0,j=0;
	char s1[10];
	printf("enter string");
	gets(s1);
	j=strlen(s1)-1;
	while(i<j)
	{
		char temp;
		temp=s1[i];
		s1[j]=s1[j];
		s1[j]=temp;
		i++;
		j--;
	}
	printf("rev string is %s",s1);
}
