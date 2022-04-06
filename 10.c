// Write a program to find the GCD or HCF of two numbers
#include<stdio.h>

void GCDORHCF(int a, int b){
    
    int i, HCF = 1;

    // logic
    for(i=1; i<=a && i<=b; i++){
        if(a % i == 0 && b % i == 0){
            HCF = i;
        }
    }
    printf("The GCD or HCF of %d and %d is = %d", a, b, HCF);
}

int main(){

    int x, y;
    printf("Enter two number : ");
    scanf("%d %d", &x, &y);

    GCDORHCF(x, y); // calling function

    return 0;
}