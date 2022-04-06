// Write a program to rotate the matrix by k times
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

    // rotate matrix by k times
    int tmp[m], t;
    int k;
    printf("Enter the number of rotation : ");
    scanf("%d", &k);
    k = k % m;

    for(i=0; i<n; i++){
        for(t=0; t<m-k; t++)
            tmp[t] = mat[i][t];

        for(j=m-k; j<m; j++)
            mat[i][j-m+k] = mat[i][j];
        
        for(j=k; j<m; j++)
            mat[i][j] = tmp[j-k];
    }

    printf("After rotation the matrix is : \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}