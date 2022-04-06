// write a program to check the charcter is UpperCase or LowerCase or Number or SpecialCharacter
#include<stdio.h>

int main(){

    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    // logic
    if((ch >= 65 && ch <= 90)){
        printf("%c is an UpperCase character", ch);
    }
    else if((ch >= 97 && ch <= 122)){
        printf("%c is a LowerCase character", ch);
    }
    else if((ch >= 48 && ch <= 57 )){
        printf("%c is a number", ch);
    }
    else{
        printf("%c is a Specil character", ch);
    }

    return 0;
}