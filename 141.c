// Write a program to find the given matrix is lower tringular or not
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

    // checking
    int flg = 0;
    for(i=1; i<=m; i++){
        for(j=i+1; j<=n; j++){
            if(mat[i][j] != 0)
                flg = 0;
            else    
                flg = 1;
        }
    }
    if(flg == 1)
        printf("Matrix is lower triangular matrix");
    else
        printf("Matrix is not lower triangular matrix");

    return 0;
}