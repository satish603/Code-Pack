#include<stdio.h>
main()
{
	int i;
	char ch[10];
	printf("enter char");
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]=='e')
		ch[i]='z';
		
	}
	printf("new string is %s\n",ch);
	
}
