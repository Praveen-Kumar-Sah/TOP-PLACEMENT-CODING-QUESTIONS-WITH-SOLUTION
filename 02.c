// write a program to check a charcter is an alphbet or not
#include<stdio.h>

int main(){

    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    // logic
    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)){
        printf("%c is an alphabet", ch);
    }
    else{
        printf("%c is not an alphabet", ch);
    }

    return 0;
}