// Write a program to find the sum of number in a given string
#include<stdio.h>
#include<string.h>

int main(){

    char str[20];
    printf("Enter a string : ");
    gets(str);

    // logic
    int i, sum = 0;
    for(i=0; str[i] != '\0'; i++){
        if((str[i] >= '\0') && (str[i] <= '9')){
            sum = sum + (str[i] - '0');
        }
    }
    printf("The sum of number in given string : %d", sum);

    return 0;
}