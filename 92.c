// Write a program to reverse the given string
#include<stdio.h>
#include<string.h>

int main(){

    char str[20];
    printf("Enter a string : ");
    gets(str);

    // logic
    int i, len, tmp;
    len = strlen(str);

    for(i=0; i<len/2; i++){
        tmp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = tmp;
    }
    printf("String after reversing : %s", str);
    
    return 0;
}