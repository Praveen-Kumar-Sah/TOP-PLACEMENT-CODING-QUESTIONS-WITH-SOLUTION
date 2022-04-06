// Write a Program to print palindromic pytamid pattern of Alphabet
// 65 = 'A' 90='Z'
#include<stdio.h>

int main(){

    int line;
    printf("Enter the number of lines : ");
    scanf("%d", &line);

    // logic
    int i, j, k;
    for(i=1; i<=line; i++){
        for(j=1; j<=i; j++){
            printf("%c ", (j+65-1));
        }
        for(k=i-1; k>=1; k--){
            printf("%c ", (k+65-1));
        }
        printf("\n");
    }

    return 0;
}