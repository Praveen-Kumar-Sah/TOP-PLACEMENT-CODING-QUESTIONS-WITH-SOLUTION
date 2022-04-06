// Write a Program to chech two numbers are Friendly Pair or not
// if the sum of all the divisor is equl to the number of both numbers  is called FP
#include<stdio.h>

int main(){

    int n1, n2;
    printf("Enter two numbers : ");
    scanf("%d%d", &n1, &n2);

    // logic
    int i, sum1 = 0, sum2 = 0;

    printf("\nThe Divisor of the %d is = : ", n1); // for foirst number
    for(i = 1; i <= n1 - 1; i++){
        if(n1 % i == 0){
            printf("%d ", i);
            sum1 = sum1 + i;
        }
    }
    printf("\nSum of all the divisor of First number is = %d", sum1);


    printf("\nThe Divisor of the %d is = : ", n2); // for second number
    for(i = 1; i <= n2 - 1; i++){
        if(n2 % i == 0){
            printf("%d ", i);
            sum2 = sum2 + i;
        }
    }
    printf("\nSum of all the divisor of Second number is = %d", sum2);

    // compare
    if((sum1 == n1) && (sum2 == n2)){
        printf("\n%d and %d are Friendly Pair", n1, n2);
    }
    else{
        printf("\n%d and %d are not Friendly Pair", n1, n2);
    }

    return 0;
}