// Write a Program to print palindromic pyramid pattern of number
#include<stdio.h>

int main(){

    int line;
    printf("Enter the number of lines : ");
    scanf("%d", &line);

    // logic
    int i, j, k;
    for(i=1; i<=line; i++){
        for(j=1; j<=i; j++){
            printf("%d ", j);
        }
        for(k=i-1; k>=1; k--){
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}