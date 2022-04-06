// Write a program to reverse an array
#include<stdio.h>

int main(){

    int n, i;
    printf("Enter size of the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements in the array : ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The original array is : ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    // reversing
    printf("\nAfter reversing the array : ");
    for(i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}