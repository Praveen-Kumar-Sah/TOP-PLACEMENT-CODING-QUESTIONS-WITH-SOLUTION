// Write a program to print half pyramid star pattern
#include<stdio.h>

int main(){

    int line;
    printf("Enter the number of lines : ");
    scanf("%d", &line);

    // logic
    int i, j;
    for(i=1; i<=line; i++){
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}