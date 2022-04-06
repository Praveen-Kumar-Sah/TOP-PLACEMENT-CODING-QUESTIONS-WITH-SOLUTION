// Write a program to display the fibonacci series up to number
#include<stdio.h>

// function
void fibonacciSer(int n){

    int x = 0, y = 1, z = 0, i;
    
    //logic
    printf("%d ", x);
    printf("%d ", y);

    for(i = 2; i<=n ;i++){
        z = x + y;
        printf("%d ", z);
        x = y;
        y = z;
    }
}

int main(){

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    //calling function
    printf("Fibonacci Series of %d is = ", num);
    fibonacciSer(num);

    return 0;
}