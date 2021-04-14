#include<stdio.h>
main()
{
	int i;
	char ch[10];
	printf("enter char");
	gets(ch);
	
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='a'&&ch[i]<='z')
		ch[i]=ch[i]-32;
		
	}
	printf("In small the string %s\n",ch);
	
}
