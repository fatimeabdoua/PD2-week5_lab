#include<stdio.h>

int main(){
	
	int *ptr, i, n,array[n];
	
	printf("enter the number of element:");
	scanf("%d",&n);
	
	ptr = &array[0];
	
	printf("enter the elements of the array:");
	
	for(i=0; i<n; i++){
		
		printf("\nelement_%d:",i+1);
		scanf("%d",ptr);
		ptr++;
		
	}
	
	ptr = &array[0];
	
	printf("the elements entered are");
		for(i=0; i<n; i++){
		
		printf("\nelement_%d",i+1 );
		printf("%d:",*ptr);
		ptr++;
		
		
	}
	
	
	
}
