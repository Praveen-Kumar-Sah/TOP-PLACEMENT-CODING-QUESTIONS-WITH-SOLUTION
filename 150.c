// Write a program to rotate the matrix by 90 degree in clockwise direction
#include<stdio.h>

int main(){

    int m;
    printf("Enter number of rows and cols as same: ");
    scanf("%d", &m);

    int mat[m][m], i, j;
    printf("Enter elements in the matrix : \n");
    for(i=0; i<m; i++){
        for(j=0; j<m; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The matrix is : \n");
    for(i=0; i<m; i++){
        for(j=0; j<m; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    // rotate by 90 degree
    for(i=0; i<m/2; i++){
        for(j=i; j<m-i-1; j++){
            int tmp = mat[i][j];
            mat[i][j] = mat[m-1-j][i];
            mat[m-1-j][i] = mat[m-1-i][m-1-j];
            mat[m-1-i][m-1-j] = mat[j][m-1-i];
            mat[j][m-1-i] == tmp;
        }
    }
    printf("After rotation the matrix is : \n");
    for(i=0; i<m; i++){
        for(j=0; j<m; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}