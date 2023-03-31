#include<stdio.h>

int sumnumbers( int *num1, int *num2){
	
	int sum = (*num1) + (*num2);
	
	return sum;
}

int main(){
	
	int num1, num2;
	
	printf("enter first number");
	scanf("%d",&num1);
	
	printf("enter second number");
	scanf("%d",&num2);
	
	int sum= sumnumbers(&num1,&num2);
	
	printf("sum of numbers is %d",sum);
}
