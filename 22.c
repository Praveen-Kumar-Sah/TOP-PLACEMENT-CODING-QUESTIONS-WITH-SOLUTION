// Write a program to check whether a number is Armstrong or not(153)
#include<stdio.h>

int main(){

    int n;
    printf("Enter the number : ", n);
    scanf("%d", &n);

    // logic
    int rem, rev = 0, num;
    num = n;

    while(n != 0){
        rem = n % 10;
        rev = rev + (rem * rem * rem);
        n  = n / 10;
    }
    printf("Armstrong of %d is = %d",num, rev);
    if(num == rev){
        printf("\n%d is a Armstrong number", num);
    }
    else{
        printf("\n%d is not a Armstrong number", num);
    }

    return 0;
}