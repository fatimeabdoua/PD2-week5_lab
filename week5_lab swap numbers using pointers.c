#include<stdio.h>

int swap(int *a, int *b, int *c){
	
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

int main(){
	
	int num1, num2, num3;
	
	printf("enter the first number:\n");
	scanf("%d",&num1);
	
	printf("enter the second  number:\n");
	scanf("%d",&num2);
	
	printf("enter the third number:\n");
	scanf("%d",&num3);
	

	printf("before swap:num1=%d num2=%d num3=%d\n",num1,num2,num3);
	
	swap(&num1,&num2,&num3);
	
	printf("after swap:num1=%d num2=%d num3=%d\n",num1,num2,num3);
}
