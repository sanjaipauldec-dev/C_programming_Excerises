#include<stdio.h>
int main()
{
	int a,b;
	printf("the greatest among two numbers");
	scanf("%d%d",&a,&b);
	if (a>b)
	printf("the greatest number %d",a);
    else 
	printf("the greatest number %d",b);
	return 0;
}