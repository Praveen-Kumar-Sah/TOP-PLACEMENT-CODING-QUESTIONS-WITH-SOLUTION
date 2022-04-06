// Write a program to count the number of vowels in a string
#include<stdio.h>
#include<string.h>

int main(){

    char str[20];
    printf("Enter a string : ");
    scanf("%s", &str);

    // logic
    char *ptr;
    ptr = str;
    int ccount = 0, vcount = 0;
    while(*ptr != '\0'){
        if(*ptr == 'A' || *ptr == 'a' || *ptr == 'E' || *ptr == 'e' || *ptr == 'I' || *ptr == 'i' || *ptr == 'O' || *ptr == 'o' || *ptr == 'U' || *ptr == 'u'){
            vcount = vcount+1;
        }
        else{
            ccount = ccount+1;
        }

        ptr++;
    }

    printf("The total number of vowel is : %d\nTheo total number of consonet is : %d", vcount, ccount);
    
    return 0;
}