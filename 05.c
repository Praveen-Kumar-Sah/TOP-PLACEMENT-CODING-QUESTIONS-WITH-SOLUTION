// write a program to check the number is negative or positive
#include<stdio.h>

int main(){

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    // logic
    if(num < 0){
        printf("%d is a negative integer", num);
    }
    else{
        printf("%d is a positive integer", num);
    }

    return 0;
}