// Write a program to check the given number is sum of two prime number
#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n){

    int i;
    for(i=2; i<= n/2; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    int n, i;
    printf("Enter the number : ");
    scanf("%d", &n);

    // logic and calling function
    int flag = 0;
    for(i=2; i<=n/2; i++){
        if(isPrime(i)){
            if(isPrime(n-i)){
                printf("\n%d can be expressed as the sum of %d and %d\n", n, i, n-i);
                flag=1;
            }
        }
    }

    if(flag == 0){
        printf("\n%d can not be expressed as the sum of two prime number", n);
    }

    return 0;
}