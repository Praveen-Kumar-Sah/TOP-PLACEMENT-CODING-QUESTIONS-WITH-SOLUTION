// Write a program to find the number of digits of given number
#include<stdio.h>

int main(){

    int n, rem;
    printf("Enter the number : ");
    scanf("%d", &n);

    // logic
    int count=0;
    while(n != 0){
        rem = n % 10;
        count++;
        n = n / 10;
    }
    printf("Sum of digits of given number is =  %d", count);

    return 0;
}
