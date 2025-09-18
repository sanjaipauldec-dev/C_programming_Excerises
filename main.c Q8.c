#include <stdio.h>
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	int n=a%10;
	if(n%3==0)
	printf("divisible by 3 %d\n",n);
	else
	printf("not divisible by 3 %d\n",n);
	return 0;                                     
}