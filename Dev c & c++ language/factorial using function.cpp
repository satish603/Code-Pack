#include<stdio.h>
fact(int n)
{
	int i,f=1;//here f=1
	for(i=1;i<=n;i++)//here i=1
	f=f*i;
	return f;
}

main()
{
	int n;
	printf("ENTER num for factorial");
	scanf("%d",&n);
	printf("The fact is %d",fact(n)); // driect calling the function
	
	
}
