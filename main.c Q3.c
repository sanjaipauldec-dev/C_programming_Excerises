#include <stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n%2==0)
	printf("even %d\n",n);
	else
	printf("odd %d\n",n);
	return 0;                                     
}