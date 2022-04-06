// Write a program to concatenate two strings
#include<stdio.h>
#include<string.h>

int main(){

    char str1[20], str2[20];
    printf("Enter a string : ");
    scanf("%s %s", &str1, &str2);

    strcat(str1, str2);

    printf("After concatenation of both string %s", str1);

    return 0;
}