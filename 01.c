// LEVEL-1

// write a program to check whether a character is vowel or consonant
#include<stdio.h>

int main(){

    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    // logic
    if(ch == 'a' || ch == 'A' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u'){
       
        printf("%c is a vowel character", ch);
    }
    else{
        printf("%c is a consonent character", ch);
    }

    return 0;
}