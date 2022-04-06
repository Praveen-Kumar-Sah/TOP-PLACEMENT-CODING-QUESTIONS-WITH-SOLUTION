// Write a program to remove charactes from a string except alphabet
#include<stdio.h>
#include<string.h>

int main(){

    char str[20], tmp[20];
    printf("Enter a string : ");
    scanf("%s", &str);

    // logic
    int i, j;
    for(i=0; str[i] != '\0'; i++){
        while(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] == '\0'))){
            for(j=i; str[j] != '\0'; j++){
                str[j] = str[j+1];
            }
            str[j] = '\0';
        }
    }
    printf("After removing the character axcept alphabet : %s", str);
    
    return 0;
}