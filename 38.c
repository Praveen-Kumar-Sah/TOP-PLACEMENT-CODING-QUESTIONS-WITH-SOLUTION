// Write a Program to convert decimal to octal
#include<stdio.h>

void decimalToOctal(int n){

    int long sum = 0;
    int temp = 1, rem;
    while(n != 0){
        rem = n % 8;
        sum = sum + rem * temp;
        temp = temp * 10;
        n = n / 8;
    }
    printf("%ld", sum);
}

int main(){

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    // calling function
    printf("Octal of %d is = ", num);
    decimalToOctal(num);

    return 0;
}