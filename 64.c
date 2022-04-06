// Write a program to print palindrome pyramid pattern using number
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
        for(j=1, k=2*i-1; j<=2*i-1, k>=1; j++, k--){
            if(j <= k){
                printf("%d ", j);
            }
            else{
                printf("%d ", k);
            }
        }
        printf("\n");
    }

    return 0;
}