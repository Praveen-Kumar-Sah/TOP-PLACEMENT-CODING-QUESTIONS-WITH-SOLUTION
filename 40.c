// Write a program to convert binary to octal
// here first we will convert binary to decimal and decimal to octal
#include<stdio.h>

void binaryToOctal(int n){

    int dec = 0; 
    int rem, temp = 1;
    // binary to decimal
    while(n != 0){
        rem = n % 10;
        dec = dec + rem * temp;
        temp = temp * 2;
        n = n / 10;
    }

    // decimal to octal
    temp = 1;
    int long oct = 0;
    while(dec != 0){
        rem = dec % 8;
        oct = oct + rem * temp;
        temp = temp * 10;
        dec = dec / 8;
    }

    printf("%d", oct);
}

int main(){
    int long num;
    printf("Enter the binary digit : ");
    scanf("%ld", &num);

    // calling function
    printf("Octal of %ld is = ", num);
    binaryToOctal(num);

    return 0;
}