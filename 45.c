// Write a Program to find Permutation in which n number of people can occupy r number of seats in a threatre
// permutation :- nPr = n! / (n-r)!
// combination :- nCr = n! / (r!(n-r)!)
// if n < r then swape it

#include<stdio.h>

int factorial(int num){

    int i, fact = 1;
    for(i = num; i > 1; i--){
        fact = fact * i; 
    }
    return fact;
}

int main(){

    int n, r;
    printf("Enter the number of people and seats : ");
    scanf("%d %d", &n, &r);

    // logic
    int temp;
    if(n < r){
        temp = n;
        n = r;
        r = temp;
    }

    int nfact = factorial(n);
    int rfact = factorial(n - r);

    int nCr = nfact / rfact;
    printf("The total number of ways in which %d people can be seated in %d seats is = %d", n, r, nCr);

    return 0;
}