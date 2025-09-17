#include<stdio.h>;
int main()
 {
	int a,b,c;
	scanf("%d%d",&a,&b);
	printf("before swapping,\n");
	a=b;
	scanf("%d%d",&b,&c);
	b=c;
printf("after swapping,\n");
printf("%d%d%d",a,b,c);

return 0;
}