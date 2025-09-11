#include<stdio.h>;
int main()
{
	int n,a,b,sum;
	printf("enter 3 digit number");
	scanf("%d",&n);
	a=n/100;
	b=n%10;
	sum=a+b;
	printf("the sum of first and last digits %d\n",sum);
	return 0;
}