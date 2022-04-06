// Swape two numbers without using third variable
#include<stdio.h>

int main(){

    int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    printf("Before Swaped:- \n num1 = %d and num2 = %d", num1, num2);

    // logic
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\nAfter Swaped:- \n num1 = %d and num2 = %d", num1, num2);

    return 0;
}