// Write a program to print Floyd's Triangle
#include<stdio.h>

int main(){
	
	int n, i, c, a=1;
	printf("Enter the number of rows to print floyd's triangle : ");
	scanf("%d", &n);
	
	// logic
	for(i=1; i<=n; i++){
		for(c=1; c<=i; c++){
			printf("%d ", a);
			a++;
		}
		printf("\n");
	}
	
	return 0;
}
