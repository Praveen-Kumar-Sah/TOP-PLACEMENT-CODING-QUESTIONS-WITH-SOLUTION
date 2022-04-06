// Write a program to print hollow half pyramid of number
#include<stdio.h>

int main(){

    int line;
    printf("Enter the number of lines : ");
    scanf("%d", &line);

    // logic
    int i, j;
    for(i=1; i<=line; i++){
        for(j=1; j<=i; j++){
            if(i==line || j==i || j==1)
                printf("%d ", j);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0; 
}