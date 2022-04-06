// Write a program to find the maximum elements in each row of matrix
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

    // finding
    int max[m];
    for(i=1; i<=m; i++){
        max[i] = mat[i][1];
        for(j=1; j<=n; j++){
            if(mat[i][j] > max[i]){
                max[i] = mat[i][j];
            }
        }
        printf("Maximum element of the row %d is : %d\n", i, max[i]);
    }

    return 0;
}