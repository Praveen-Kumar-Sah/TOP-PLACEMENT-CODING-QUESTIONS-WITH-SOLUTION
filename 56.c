// Write a program to print hollow inverted half pyramid
#include<stdio.h>

int main(){

    int line;
    printf("Enter the number of lines : ");
    scanf("%d", &line);

    // logic
    int i, j;
    for(i=1; i<=line; i++){

        for(j=i; j<=line; j++){

            if(i==1 || j==i || j==line){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}