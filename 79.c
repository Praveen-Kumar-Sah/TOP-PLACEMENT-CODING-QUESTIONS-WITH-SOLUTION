// Write a program to check whether a string is palindrome or not
#include<stdio.h>
#include<string.h>

int main(){

    char str[20], tmp[20];
    printf("Enter a string : ");
    scanf("%s", &str);

    // logic
    strcpy(tmp, str);
    strrev(tmp);
    if(strcmp(str, tmp) == 0){
        printf("The given string is a palindrome string");
    }
    else{
        printf("The given string is not a palindrome string");
    }

    return 0;
}