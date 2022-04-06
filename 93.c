// Write a program to check if two string are same, if one string contailn wild characters
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool check(char *str1, char *str2){

    if(*str1 == '\0' && *str2 == '\0')
        return true;

    if(*str1 == '*' && *(str1+1) != '\0' && *str2 == '\0')
        return false;

    if(*str1 == '?' || *str1 == *str2)
        return check(str1+1, str2+1);

    if(*str1 == '*')
        return check(str1+1, str2) || check(str1, str2+1);

    return false;
}

void test(char *str1, char *str2){

    check(str1, str2) ? printf("YES") : printf("NO");
}

int main(){

    char str1[20], str2[20];
    printf("Enter first string : ");
    gets(str1);
    printf("Enter second string : ");
    gets(str2);

    // calling function
    test(str1, str2);

    return 0;
}