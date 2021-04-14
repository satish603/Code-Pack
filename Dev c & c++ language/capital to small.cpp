#include<stdio.h>
main()
{
	int i;
	char ch[10];
	printf("enter char");
	gets(ch);
	
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='A'&&ch[i]<='Z')
		ch[i]=ch[i]+32;
		
	}
	printf("In capital the string %s\n",ch);
	
}
