#include<stdio.h>
main()
{
	int i,n=0,k=0;
	char ch[10];
	printf("enter char");
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]=='e')
		k++;
	}
	printf("No of e in string %d\n",k);
	printf("the length of string is %d",i);
}
