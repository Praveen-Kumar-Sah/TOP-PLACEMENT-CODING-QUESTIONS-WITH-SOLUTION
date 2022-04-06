// Write a program to find the sum of elements in zig-zag sequanece of a given matrix
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

    // finding sum
    int sum = 0;
    for(j=0; j<n; j++){
        sum = sum + mat[0][j];
    }

    for(i=1; i<=m-2; i++){
        for(j=n-2; j>0; j--){
            sum = sum + mat[i][j];
        }
    }
    for(j=0; j<n; j++){
        sum = sum + mat[m-1][j];
    }
    printf("\nSum of zig-zag pattern is : %d", sum);

    return 0;
}