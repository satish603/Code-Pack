#include<stdio.h>
int main()
{
	int n;
	printf("enter choice 1-4\n");
	
	scanf("%d",&n);
	switch(n)
	{case 1:
	printf("monday");
	break;
	case 2:
	printf("tuesday");
	break;
	case 3:
	printf("wednesday");
	break;
	case 4:
	printf("thursday");
	break;
	default:
		printf("invalid");
	}
	
}
