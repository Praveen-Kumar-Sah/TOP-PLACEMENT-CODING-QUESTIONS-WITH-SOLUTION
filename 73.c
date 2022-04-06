// Write a program to reverse a string
#include<stdio.h>
#include<string.h>

int main(){

    char str1[20];
    printf("Enter two string : ");
    scanf("%s", &str1);

    // logic
    int i;
    printf("The reversed string is ");
    for(i=strlen(str1); i>=0; i--){
        printf("%c", str1[i]);
    }

    return 0;
}