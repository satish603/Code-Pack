#include<stdio.h>
#include<string.h>
main()
{
	int i,l;
	char s1[10];
	printf("enter char");
	gets(s1);
	l=strlen[s1];
	for(i=l-1;i>=0;i--)
	{
		if(s1[i]==' ')
		{
			s1[i]='\0';
		}
		
	}
	printf("string is     %s\n",s1);
	
}
