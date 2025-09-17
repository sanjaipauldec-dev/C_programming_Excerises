#include<stdio.h>
void insertion_Sort(int arr[],int n){
	int i,key,j;
		for(i=1;i<n;i++){
			key=arr[i];
			j=i-1;
			while(j>=0&&arr[j]>key){
				arr[j+1]=arr[j];
				j=j-1;
			}
			arr[j+1]=key;
		}
}
void print_Array(int arr[],int size){
	int i;
	for(i=0;i<size;i++)
	printf("\n %d",arr[i]);
	printf("\n");
}
int main(){
	int arr[]={12,11,13,7};
	int n=sizeof(arr)/sizeof (arr[0]);
	printf("Original Array:\n");
	print_Array(arr,n);
	insertion_Sort(arr,n);
	printf("Sorted array:\n");
	print_Array(arr,n);
	return 0;
}