// Write a program to find subtraction of two matrix
#include<stdio.h>

int main(){

    int rows1, cols1, rows2, cols2;
    printf("Enter the number of row's of first matrix : ");
    scanf("%d", &rows1);
    printf("Enter the number of column's of first matrix : ");
    scanf("%d", &cols1);

    int mat1[rows1][cols1], i, j;
    printf("Enter elements in first matrix : ");
    for(i=1; i<=rows1; i++){
        for(j=1; j<=cols1; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    // second matrix
    printf("Enter the number of row's of second matrix : ");
    scanf("%d", &rows2);
    printf("Enter the number of column's of second matrix : ");
    scanf("%d", &cols2);

    int mat2[rows2][cols2];
    printf("Enter elements in first matrix : ");
    for(i=1; i<=rows2; i++){
        for(j=1; j<=cols2; j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("The elements in first matrix is : \n");
    for(i=1; i<=rows1; i++){
        for(j=1; j<=cols1; j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("The elements in second matrix is : \n");
    for(i=1; i<=rows2; i++){
        for(j=1; j<=cols2; j++){
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    // subtraction of two matrix
    int mat3[rows1][cols1];
    if(rows1 == rows2 && cols1 == cols2){
        printf("Subtraction of both matrix is : \n");
        for(i=1; i<=rows1; i++){
            for(j=1; j<=cols1; j++){
                mat3[i][j] = mat1[i][j] - mat2[i][j];
                printf("%d ", mat3[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("The size of both matrix is not same");
    }

    return 0;
}