// Write a program to find the factorial of a number
#include<stdio.h>

// by recursion
int recFact(int n){

    if(n <= 0){
        return 1;
    }
    else{
        return n * recFact(n - 1);
    }
}

// function by loop
void fact(int n){

    int fact = 1, i;
    
    // logic
    for(i = n; i >= 1; i--){
        fact = fact * i;
    }
    printf("\nFactorial of %d is = %d", n, fact);
}

int main(){

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    //calling function
    fact(num);

    // calling recursion
    printf("\nThe Factorial of %d is = %d", num, recFact(num));

    return 0;
}