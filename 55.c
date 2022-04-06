// Write a Program to print full hollow pyramid start pattern
#include<stdio.h>

int main(){

    int line;
    printf("Enter the number of lines : ");
    scanf("%d", &line);

    // logic
    int i, j, k;
    for(i=1; i<line; i++){
        for(j=1; j<=line-i; j++){
            printf("  ");
        }
        for(k=1; k<=(2*i-1); k++){
            if(k==1 || k == (2*i-1))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for(i=1; i<=2*line-1; i++){
        printf("* ");
    }

    return 0;
}