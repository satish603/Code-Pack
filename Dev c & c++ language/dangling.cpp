#include<stdio.h>
#include<stdlib.h>
int main()
{

int *p;
p=(int*)malloc(1* sizeof(int));
scanf("%d",p);
printf("\n %d",*p);
free(p);
printf("\n %d",*p);

}
