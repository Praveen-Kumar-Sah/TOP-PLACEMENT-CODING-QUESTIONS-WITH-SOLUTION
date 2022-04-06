// Write a program to find the frequency of each character in a string
#include<stdio.h>
#include<string.h>

int main(){

    char str[20];
    printf("Enter a string : ");
    gets(str);

    // logic
    int freq[256] = {0}, i;

    for(i=0; str[i] !='\0'; i++){
        freq[str[i]]++;
    }
    for(i=0; i<256; i++){
        if(freq[i] != 0){
            printf("The frquency of %c is %d\n", i, freq[i]);
        }
    }

    return 0;
}