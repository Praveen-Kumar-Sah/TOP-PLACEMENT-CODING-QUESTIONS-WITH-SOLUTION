// Write a program to print the reverse of given number
#include<stdio.h>

int main(){

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int rev, i, rem;
    // logic
    printf("Reverse of given numbers is = ");
    while(num > 0){
        rem = num % 10;
        printf("%d", rem);
        num = num / 10;
    }

    return 0;
}