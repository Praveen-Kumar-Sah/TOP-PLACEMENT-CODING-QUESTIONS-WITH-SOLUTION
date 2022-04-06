// Write a program to remove the vowels from a given string
#include<stdio.h>
#include<string.h>

int main(){

    char str[20];
    printf("Enter a string : ");
    scanf("%s", &str);

    int i, j;
    int len = strlen(str);
    for(i=0; i<len; i++){
        if(str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u'){
            for(j=i; j<len; j++){
                str[j] = str[j+1];
            }
            len--;
        }
    }
    printf("After deletion the vowels : %s", str);

    return 0;
}