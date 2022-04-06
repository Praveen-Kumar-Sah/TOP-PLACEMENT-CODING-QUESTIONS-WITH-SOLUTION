// Write a program to compare two string
#include<stdio.h>
#include<string.h>

int main(){

    char str1[20], str2[20];
    printf("Enter a string : ");
    scanf("%s %s", &str1, &str2);

    // logic
    if(strcmp(str1, str2) == 0){
        printf("The both string are equal");
    }
    else{
        printf("The both string are not equal");
    }

    return 0;
}