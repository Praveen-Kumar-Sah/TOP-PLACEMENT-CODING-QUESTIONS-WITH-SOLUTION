// Write a program to display a hollow square pattern
#include<stdio.h>

int main(){

    int rows, cols;
    printf("Enter the rows and columns : ");
    scanf("%d %d", &rows, &cols);

    // logic
    int i, j;
    for(i=1; i<=rows; i++){
        for(j=1; j<=cols; j++){
            if(i==1 || j==1 || i==rows || j==cols){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return 0;
}