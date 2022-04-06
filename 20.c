// Write a program to check a number is prime or not
#include<stdio.h>

int main(){

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    int i;
    // logic
    for(i=2; i<num; i++){
        if(num % i == 0){
            printf("%d is not a prime number", num);
            break;
        }
    }
    if(i == num){
        printf("%d is a prime number", num);
    }

    return 0;
}