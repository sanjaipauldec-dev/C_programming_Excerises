#include <stdio.h>
int main()
{
	int n;
	printf("the given number is");
	scanf("%d",&n);
	if(n>=100 && n<=999)
	printf("the given number is 3 digit number %d\n",n);
	else
	printf("the given number is not 3 digit number %d\n",n);
	return 0;                                     
}