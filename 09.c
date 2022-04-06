// Write a program to find the LCM of two numbers : (((a * b)/gcd)
// GCD == HCF
// first i have to find the HCF
// AFTER THAT I WILL FIND LCM   

#include<stdio.h>

void GCDORHCF(int a, int b){

    int i, HCF = 1;
    // logic
    for(i=1; i<=a && i<=b; i++){
        if(a % i == 0 && b % i == 0){
            HCF = i;
        }
    }
    printf("The HCF of %d and %d is = %d", a, b, HCF);
    int lcm = (a * b) / HCF;
    printf("\nThe LCM of %d and %d is = %d", a, b, lcm);
}


/*  
void LCM(int a, int b){

    int lcm = (a * b) / (GCDORHCF(a, b));
    printf("The LCM of %d and %d is = %d", a, b, lcm);
} */

int main(){

    int x, y;
    printf("Enter two number : ");
    scanf("%d %d", &x, &y);

    GCDORHCF(x, y); // calling function
    return 0;
}