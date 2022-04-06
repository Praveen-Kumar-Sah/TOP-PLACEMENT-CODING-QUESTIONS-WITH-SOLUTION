// Write a Program to check whether a number is Harshad number or not
// if a number is divisible by its total sum of digit then it is called Harshad number
#include<stdio.h>

int main(){

    int n, sum = 0, i, rem;
    printf("Enter a number : ");
    scanf("%d", &n);

    int num = n;

    // logic
    while(n != 0){
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("\nSum of the digits of %d is = %d", num, sum);

    if(num % sum == 0){
        printf("\n%d is a Hardhad number", num);
    }
    else{
        printf("\n%d is not a Harshad number", num);
    }

    return 0;
}