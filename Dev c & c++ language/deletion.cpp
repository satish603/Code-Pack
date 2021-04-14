#include<stdio.h>
int main()
{
	int a[10]={52,3,52,78,52,42,5,42,522,36};
	int pos,n,i,val;
printf("enter element to delele\n");
scanf("%d",&pos);
if (pos>=n+1)
printf("element not found");
else{

for(i=pos-1;i<n-1;i++)
{
a[i]=a[i+1];
for(i=0;i<n-1;i++)
printf("  %d",a[i]);

}
}
}
