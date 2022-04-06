// Write a program to find the given number is palindrome or not(121)
// if reverse of a number is equal to the actual number is called palindrome number
#include<stdio.h>

int main(){

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    //logic
    int num, rem, rev = 0;
    num = n;
    
    while(n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("\nReverse of %d is = %d", num, rev);
    if(num == rev){
        printf("\n%d is a Palindrome number ", num);
    }
    else{
        printf("\n%d is not a Palindrome number ", num);
    }

    return 0;
}