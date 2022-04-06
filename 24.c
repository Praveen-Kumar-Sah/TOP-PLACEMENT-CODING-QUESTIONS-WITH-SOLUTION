// Write a program to check whether a number is perfect or not
// if the sum of all divisor of that number is equal to number is called perfect number
#include<stdio.h>

int main(){

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int i, sum = 0;
    // logic
    printf("The all divisor of %d is = ", n);
    for(i = 1; i < n; i++){
        if(n % i == 0){
            printf("%d ", i);
            sum = sum + i;
        }
    }
    printf("\nSum of all divisor is = %d", sum);
    
    if(sum == n){
        printf("\n%d is a perfect number", n);
    }
    else{
        printf("\n%d is not a perfect number", n);
    }

    return 0;
}