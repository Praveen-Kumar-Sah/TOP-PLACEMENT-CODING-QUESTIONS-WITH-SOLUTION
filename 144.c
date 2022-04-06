// Write a program to find the sum of each row and columns of a matrix
#include<stdio.h>

int main(){

    int m, n;
    printf("Enter number of rows and cols : ");
    scanf("%d %d", &m, &n);

    int mat[m][n], i, j;
    printf("Enter elements in the matrix : \n");
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The matrix is : \n");
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // finding sum of each rows and columns
    int sumr = 0;
    printf("\nSum of each rows :- ");
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            sumr = sumr + mat[i][j];
        }
        printf("\nSum of the row %d = %d", i, sumr);

        sumr = 0;
    }

    int sumc = 0;
    printf("\nSum of each cols :- ");
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            sumc = sumc + mat[j][i];
        }
        printf("\nSum of the column %d = %d", i, sumc);

        sumc = 0;
    }
    return 0;
}