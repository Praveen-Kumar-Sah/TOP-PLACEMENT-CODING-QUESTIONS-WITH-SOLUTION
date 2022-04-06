// Write a program to find the maximum elements in each columns of matrix
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
    int max[n];
    for(i=1; i<=n; i++){
        max[i] = mat[1][i];
        for(j=1; j<=m; j++){
            if(mat[j][i] > max[i]){
                max[i] = mat[j][i];
            }
        }
        printf("Maximum element of the cols %d is : %d\n", i, max[i]);
    }

    return 0;
}