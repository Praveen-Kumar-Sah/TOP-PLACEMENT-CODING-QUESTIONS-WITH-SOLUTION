// Write a program to find the sum of elements in the array
#include<stdio.h>


int main(){

    int n, i;
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements in the array : ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("The original array is : ");
    for (i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    // find the sum of the elements
    int sum = 0;
    for(i=0; i<n; i++){
        sum = sum + arr[i];
    }
    printf("\nThe sum of elements in the array : %d", sum);
    
    return 0;
}