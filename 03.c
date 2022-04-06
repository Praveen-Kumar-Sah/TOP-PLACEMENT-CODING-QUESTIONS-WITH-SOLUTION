// write a program to find the ascii value of character
#include<stdio.h>

int main(){

    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    // logic
    printf("Ascii value of %c is : %d", ch, ch);

    return 0;
}