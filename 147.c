// Write a program to find the sum of boundry elements in given matrix
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

    // find sum of boundry
    int sum = 0;
    printf("The Boundry matrix is : \n");
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            if(i == 1 || j == 1 || i == m || j == n){
                printf("%d ", mat[i][j]);
                sum = sum + mat[i][j];
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\nSum of boundry elements is : %d", sum);

    return 0;
}