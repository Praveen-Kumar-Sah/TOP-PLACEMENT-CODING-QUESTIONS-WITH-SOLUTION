// Write a program to print inverted pyramid of number
#include<stdio.h>

int main(){

    int line;
    printf("Enter the number of lines : ");
    scanf("%d", &line);

    // logic
    int i, j;
    for(i=line; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}