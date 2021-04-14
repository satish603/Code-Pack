#include<stdio.h>
main()
{
	int i,n=0,k=0;
	char ch[10];
	printf("enter char");
	gets(ch);
	for(i=0;ch[i]!='\0';i++);
	printf("the length of string is %d",i);
	
	
	while(ch[n]!='0')
	{
		k++;
		n++;
	}
	printf("\n\nthe length of string is %d",k);
}
