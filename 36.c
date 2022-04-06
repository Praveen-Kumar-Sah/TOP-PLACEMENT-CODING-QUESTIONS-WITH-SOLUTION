// Write a program to convert a number binary to decimal
#include<stdio.h>

void binaryToDecimal(int n){

    int sum = 0, rem, temp = 1;
    while(n != 0){
        rem = n % 10;
        sum = sum + rem * temp;
        temp = temp * 2;
        n = n / 10;
    }
    printf("%d", sum);
}

int main(){

    int long num;
    printf("Enter binary digit : ");
    scanf("%d", &num);

    // calling function
    printf("The decimal of %ld is = ", num);
    binaryToDecimal(num);

    return 0;
}