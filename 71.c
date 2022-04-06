// Write a program to find the length of string
#include<stdio.h>
#include<string.h>

int main(){

    char str1[20], str2[20];
    printf("Enter two string : ");
    scanf("%s %s", &str1, &str2);


    printf("The length of first string is %d\n", strlen(str1));

    // for second string logic
    int count=0, i;
    for(i=0; str2[i] != '\0'; i++){
        count = count+1;
    }
    printf("The length of second string is %d", count);

    return 0;
}