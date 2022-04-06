// Write a program to sort the array using another array
#include<stdio.h>

int main(){

    int n, m;
    printf("Enter the size of main array : ");
    scanf("%d", &n);
    printf("Enter the size of another array : ");
    scanf("%d", &m);

    int arrX[n], arrY[m], i, j;

    printf("Enter elements in main array : ");
    for(i=0; i<n; i++){
        scanf("%d", &arrX[i]);
    }
    
    printf("Enter elements in another array : ");
    for(i=0; i<m; i++){
        scanf("%d", &arrY[i]);
    }

    printf("The main array is : ");
    for(i=0; i<n; i++){
        printf("%d ", arrX[i]);
    }

    printf("\nThe another array is : ");
    for(i=0; i<m; i++){
        printf("%d ", arrY[i]);
    }

    // logic
    int k=0, arrZ[n];
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(arrX[j] == arrY[i]){
                arrZ[k] = arrX[j];
                k++;
            }
        }
    }

    printf("\nAfter sorting the array : ");
    for(k=0; k<n; k++){
        printf("%d ", arrZ[k]);
    }

    return 0;
}