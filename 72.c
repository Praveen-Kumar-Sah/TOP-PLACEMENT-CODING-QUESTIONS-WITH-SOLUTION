// Write a program to copy a string in other variable
#include<stdio.h>
#include<string.h>

int main(){

    char str1[20], str2[20];
    printf("Enter a string : ");
    scanf("%s", &str1);

    strcpy(str2, str1);

    printf("The copied string is %s", str2);

    return 0;
}