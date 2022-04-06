// Write a program to captalize the first and last chracter in a string
#include<stdio.h>
#include<string.h>

int main(){

    char str[20];
    printf("Enter a string : ");
    gets(str);

    // logic
    int len = strlen(str);
    int i;
    for(i=0; i<len; i++){
        if(i == 0 || i == len-1){
            str[i] = toupper(str[i]);
        }
        else if(str[i] == ' '){
            str[i-1] = toupper(str[i-1]);
            str[i+1] = toupper(str[i+1]);
        }
    }
    printf("After captaliza the first and last character of string : %s", str);

    return 0;
}