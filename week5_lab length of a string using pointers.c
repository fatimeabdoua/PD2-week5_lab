#include<stdio.h>

int main(){
	
	char *ptr;
	char str[100];
	
	printf("enter a string\n");
	scanf("%s",str);
	
	ptr = str;
	int n=0;
	
	while(*ptr != '\0'){
		
		n++;
		ptr++;
	}
	
	printf("the length of the given string %s  is %d:", str, n);

}
