// Program to find all the patterns of 0(1+)0 in the given string
#include<stdio.h>
#include<string.h>

int patternCount(char str[]){

    char last = str[0];

    int i=1, count=0;
    int len = strlen(str);

    while(i < len){
        if(str[i] == '0' && last == '1'){
            while(str[i] == '1')
                i++;

            if(str[i] == '0')
                count++;
        }
        last = str[i];
        i++;
    }
    return count;
}

int main(){

    char str[20];
    printf("Enter a string : ");
    gets(str);

    // function call
    printf("The total pattern count is : %d", patternCount(str));

    return 0;
}