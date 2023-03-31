#include<stdio.h>

int main(){
	
	char *ptr1, *ptr2, str[100],temp;
	int n=0, i;
	
	printf("enter a string:\n");
	scanf("%s",str);
	
	while(str[n] != '\0'){
		n++;
	}
	
	 ptr1= str;
	 ptr2= str + n -1;
	 
	for(i=0; i<n/2; i++){
		
		temp = *ptr2;
		*ptr2 = *ptr1;
		*ptr1 = temp;
		
		ptr1++;
		ptr2--;
		
				
	}
	
	printf("the reverse string is: %s",str);
	
	
	
	

}
