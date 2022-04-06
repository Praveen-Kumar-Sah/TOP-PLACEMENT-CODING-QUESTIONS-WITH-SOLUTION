// Write a program to find the saddle point coordinates of a fiven matrix
#include<stdio.h>

int main(){

    int m;
    printf("Enter number of rows and cols as same: ");
    scanf("%d", &m);

    int mat[m][m], i, j;
    printf("Enter elements in the matrix : \n");
    for(i=1; i<=m; i++){
        for(j=1; j<=m; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The matrix is : \n");
    for(i=1; i<=m; i++){
        for(j=1; j<=m; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // finding saddle coordinate
    int f = 0, k, max, min, c;
    for(i=1; i<=m; i++){
        min = mat[i][1];
        c = 1;
        for(j=1; j<=m; j++){
            if(mat[i][j] < min){
                min = mat[i][j];
                c = j;
            }
        }
        max = 0;
        for(k=1; k<=m; k++){
            if(mat[k][c] > max){
                max = mat[k][c];
            }
        }
        if(min == max){
            printf("Saddle point of matrix is : %d", max);
            f = 1;
        }
    }
    if(f == 0){
        printf("Matrix has not saddle point");
    }

    return 0;
}