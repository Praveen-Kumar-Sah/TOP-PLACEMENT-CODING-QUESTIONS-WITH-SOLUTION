// Write a program to display a solid regular square start pattern
#include<stdio.h>

int main(){

    int rows, cols;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d", &rows, &cols);

    // logic
    int i, j;
    for(i=1; i<=rows; i++){
        for(j=1; j<=cols; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}