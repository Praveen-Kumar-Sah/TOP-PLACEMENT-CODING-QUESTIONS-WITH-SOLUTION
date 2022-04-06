// Write a Program to check whether a number is strong or not(145)

#include<stdio.h>

int main(){
	
	int n, var, i, rem, sum = 0, fact = 1;
	
	printf("Enter the number : ");
	scanf("%d", &n);
	
	var = n;
	
	while(n != 0){
		rem = n % 10;
		
		for(i = rem; i > 0; i--){
			fact = fact * i;
		}  
		sum = sum + fact;
		fact = 1;
		n = n / 10;
	}
	if(sum == var){
	    printf("%d is strong number of %d", sum, var);
    }
	else{
	    printf("%d is not strong number of %d", sum, var);
    }
	    
	return 0;
}