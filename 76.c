// Write a program to toggle all the character in a string
// Toogle means convert the case of character (lower to upper and upper to lower)
#include<stdio.h>
#include<string.h>

void toggle(char *str){

    while(*str){
        if(*str >= 'a' && *str <= 'z'){
            *str = *str - 32;
        }
        else if(*str >= 'A' && *str <= 'Z'){
            *str = *str + 32;
        }

        str++;
    }
}

int main(){

    char str[20];
    printf("Enter a string : ");
    scanf("%s", &str);

    // function call
    toggle(str);
    printf("After Toggled the string is %s", str);

    return 0;
}