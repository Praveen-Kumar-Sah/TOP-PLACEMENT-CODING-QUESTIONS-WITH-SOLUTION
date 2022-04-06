// Write a program to convert a number decimal to binary
#include<stdio.h>
#include<math.h>

void decimalToBinary(int n){

    int temp = 1, rem;
    int sum = 0;

    while(n != 0){
        rem = n % 2;
        sum = sum + rem * temp;
        temp = temp * 10;
        n = n / 2;
    }
    printf("%d", sum);
}

int main(){

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    // calling function
    printf("The binary of %d is = ", num);
    decimalToBinary(num);
    
    return 0;
}