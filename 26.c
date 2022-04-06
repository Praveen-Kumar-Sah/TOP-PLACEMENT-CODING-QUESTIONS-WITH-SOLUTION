// Write a program to check whether a number is automorphic or not
// Automorphic :- n = 5, square = 5*5 = 25 if the last digit of square == n then caller automorphic number
#include<stdio.h>

int main(){

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    // logic
    int rem;
    int sq = n * n;
    if(n > 0){
        rem = sq % 10;
    }
    printf("\nLast digit after squaring %d is = %d", n, rem);
    if(rem == n){
        printf("\n%d is an Automorphic number", n);
    }
    else{
        printf("\n%d is is not an Automorphic number", n);
    }
    

    return 0;
}