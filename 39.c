// Write a program to convert octal to decimal
#include<stdio.h>

void octalToDecimal(int n){

    int sum = 0, temp = 1, rem;
    while(n != 0){
        rem = n % 10;
        sum = sum + rem * temp;
        temp = temp * 8;
        n = n / 10;
    }
    printf("%d", sum);
}

int main(){

    int long num;
    printf("Enter the Octal digit : ");
    scanf("%ld", &num);

    // calling function
    printf("Decimal of %ld is = ", num);
    octalToDecimal(num);

    return 0;
}