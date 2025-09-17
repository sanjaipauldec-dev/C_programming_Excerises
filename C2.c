#include <stdio.h>
int main(){
	int i,j,k;
	int c=5;
	for(i=0;i<=c;i++){
		for(j=i;j<=5;j++){
			printf("* ");
		}
		for(k=c;k>=c-i;k--){
			printf("  ");
		}
		
		printf("\n");
	}
	printf("\n");
	int n=1;
	for(i=0;i<=c;i++){
		for(j=1;j<=n;j++){
			printf("* ");
			
		}n++;
		printf("\n");
	}
	return 0;
}