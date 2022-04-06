// Write a program to remove brackets from given string
#include<stdio.h>
#include<string.h>

int main(){

    char str[20], tmp[20];
    printf("Enter a string : ");
    scanf("%s", &str);

    // logic
    int i=0, j=0;
    while(str[i] != '\0'){
        if(str[i] != '(' && str[i] != ')'){
            tmp[j++] = str[i];
        }
        i++;
    }
    tmp[j] = '\0';

    printf("After removing the brickets : %s", tmp);

    return 0;
}