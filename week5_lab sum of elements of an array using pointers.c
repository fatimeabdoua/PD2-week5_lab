#include<stdio.h>
int main(){
	int *ptr,i,n,array[n],sum=0;
	
	printf("enter the number of element of the array:\n");
	scanf("%d",&n);
	
	ptr = array;
	printf("enter the array elements:\n");
	
	for(i=0; i<n; i++){
		
		printf("element-%d:",i+1);
		scanf("%d",ptr+i);
	}
	
	for(i=0; i<n; i++){
		
		sum = sum + (*ptr+i); 
	}
	
	printf("the sum of array elements is: %d",sum);
}
