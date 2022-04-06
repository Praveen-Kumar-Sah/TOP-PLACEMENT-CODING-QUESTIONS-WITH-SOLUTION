// Write a program to sort the string according to alphabet
#include<stdio.h>
#include<string.h>

int main(){

    char str[20];
    printf("Enter a string : ");
    scanf("%s", &str);

    // logic
    int len = strlen(str);
    char tmp;
    int i, j;

    for(i=0; i<len-1; i++){
        for(j=i+1; j<len; j++){
            if(str[i] > str[j]){
                tmp = str[i];
                str[i] = str[j];
                str[j] = tmp;
            }
        }
    }

    printf("After sorting the given string is : %s", str);

    return 0;
}