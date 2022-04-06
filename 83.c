// Write a program to remove spaces from given string
#include<stdio.h>
#include<string.h>

int main(){

    char str[20], tmp[20];
    printf("Enter a string : ");
    gets(str);

    // logic
    int i=0, j=0;
    while(str[i] != '\0'){
        if(str[i] != ' '){
            tmp[j++] = str[i];
        }
        i++;
    }
    tmp[j] = '\0';

    printf("After removing the spaces : %s", tmp);

    return 0;
}