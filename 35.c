// Write a program to replace the 0's with 1's in a given integer
#include<stdio.h>

int replace(int n){

    if(n == 0)
        return 0;
    
    int digit = n % 10;
    if(digit == 0){
        digit = 1;
    } 

    return replace(n / 10) * 10 + digit;
}

int main(){

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    // calling function
    printf("After Replacing the number become %d = %d", num, replace(num));

    return 0;
}