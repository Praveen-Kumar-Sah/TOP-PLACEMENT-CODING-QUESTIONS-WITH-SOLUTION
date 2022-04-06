// Write a program to print the diamond shape start pattern
#include<stdio.h>

int main(){

    int line;
    printf("Enter the number of lines : ");
    scanf("%d", &line);

    // logic
    int i, j, k;
    for(i=1; i<=line; i++){
        for(j=1; j<=line-i; j++){
            printf("  ");
        }
        for(k=1; k<=(2*i-1); k++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=line-1; i>=1; i--){
        for(j=1; j<=line-i; j++){
            printf("  ");
        }
        for(k=1; k<=(2*i-1); k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}