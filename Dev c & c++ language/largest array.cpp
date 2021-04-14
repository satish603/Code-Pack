#include <stdio.h> 
int main() 
{
	int i,large,n,a[50];
    printf("enter no of element");
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the largest element");
	for(i=0;i<n;i++)
	{
		if (a[0]>a[i])
		a[0]=a[i];
		
	}
	printf("%d",a[0]);
	
}

