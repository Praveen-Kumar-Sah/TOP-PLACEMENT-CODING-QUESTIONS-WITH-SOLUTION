// Write a program to find the non-repeating character in string
#include<stdio.h>
#include<string.h>

int main(){

    char str[20];
    printf("Enter a string : ");
    gets(str);

    // logic
    int freq[256] = {0}, i;

    for(i=0; str[i] != '\0'; i++){
        freq[str[i]]++;
    }

    printf("The character in given string which are not repeating : ");
    for(i=0; i<256; i++){
        if(freq[i] == 1){
            printf("%c ", i);
        }
    }

    return 0;
}