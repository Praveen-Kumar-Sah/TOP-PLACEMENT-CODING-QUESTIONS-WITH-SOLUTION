// write a program to check whether a number is odd or even
#include<stdio.h>

int main(){

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    // logic
    if(num % 2 == 0){
        printf("%d is an Even integer", num);
    }
    else{
        printf("%d is an Odd integer", num);
    }
    
    return 0;
}