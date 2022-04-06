// Write a program to display the matrix in spiral form
#include<stdio.h>

int main(){

    int m, n;
    printf("Enter number of rows and cols : ");
    scanf("%d %d", &m, &n);

    int mat[m][n], i, j;
    printf("Enter elements in the matrix : \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The matrix is : \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // display in spiral form
    int row = 0, col = 0;
    printf("The spiral form of given matrix is : ");
    while(row < m && col < n){
        for(i=col; i<n; i++){
            printf("%d ", mat[row][i]);
        }
        row++;
        for(i=row; i<m; i++){
            printf("%d ", mat[i][n-1]);
        }
        n--;
        if(row < m){
            for(i=n-1; i>=col; i--){
                printf("%d ", mat[m-1][i]);
            }
            m--;
        }
        if(col < n){
            for(i=m-1; i>=row; i--){
                printf("%d ", mat[i][col]);
            }
            col++;
        }
    }

    return 0;
}