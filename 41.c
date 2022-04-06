// Write a program to convert octal to binary
// here first we will convert octal to decimal and decimal to binary
#include<stdio.h>

void octalToBinary(int n){

    int oct = 0; 
    int rem, temp = 1;
    // octal to decimal
    while(n != 0){
        rem = n % 10;
        oct = oct + rem * temp;
        temp = temp * 8;
        n = n / 10;
    }

    // decimal to binary
    temp = 1;
    int long dec = 0;
    while(oct != 0){
        rem = oct % 2;
        dec = dec + rem * temp;
        temp = temp * 10;
        oct = oct / 2;
    }

    printf("%d", dec);
}

int main(){
    int long num;
    printf("Enter the octal digit : ");
    scanf("%ld", &num);

    // calling function
    printf("Octal of %ld is = ", num);
    octalToBinary(num);

    return 0;
}