// Write a program to find the transpose of matrix
#include<stdio.h>

int main(){

    int rows, cols;
    printf("Enter the number of row's : ");
    scanf("%d", &rows);
    printf("Enter the number of column's : ");
    scanf("%d", &cols);

    int mat[rows][cols], i, j;
    printf("Enter elements in matrix : ");
    for(i=1; i<=rows; i++){
        for(j=1; j<=cols; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The orignal matrix is : \n");
    for(i=1; i<=rows; i++){
        for(j=1; j<=cols; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // transpose of given matrix
    printf("The transpose of matrix is : \n");
    for(i=1; i<=cols; i++){
        for(j=1; j<=rows; j++){
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }

    return 0;
}