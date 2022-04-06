// Basic of String
// Print a string
#include<stdio.h>
#include<string.h>

int main(){

    char str1[20], str2[20];
    printf("Enter two string : ");
    scanf("%s", &str1);

    gets(str2);

    printf("The entered first string is %s\n", str1);
    printf("The entered second string is %s", str2);

    return 0;
}