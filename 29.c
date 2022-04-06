// Write a program to find the power of a number

#include<stdio.h>
#include<math.h>

// power using recursion
int power(int base, int exp){

    if(exp == 0){
        return 1;
    }
    else{
        return base * power(base, exp-1);
    }
}


int main(){

    int base, exp, result;
    printf("Enter the base number : ");
    scanf("%d", &base);
    printf("Enter the exponent or power : ");
    scanf("%d", &exp);

    // logic
    result = pow(base, exp);
    printf("\nThe Power of %d with %d is = %d", base, exp, result);


    // by recursion
    printf("\nThe Power of %d with %d is = %d", base, exp, power(base, exp));

    return 0;
}