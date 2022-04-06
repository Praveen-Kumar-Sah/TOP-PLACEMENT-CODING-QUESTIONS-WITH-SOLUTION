// Write a program to find the smallest and largest element in the array
#include<stdio.h>

void findSmallAndLarge(int arr[], int size){

    int small, large;
    small = large = arr[0];
    int i;

    for(i=0; i<size; i++){
        if(arr[i] > large){
            large = arr[i];
        }

        if(arr[i] < small){
            small = arr[i];
        }
    }

    printf("\nThe smallest element in the array is : %d", small);
    printf("\nThe largest element in the array is : %d", large);
}

int main(){

    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int arr[n], i;
    printf("Enter elements in the array : ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("The original array is : ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    // calling function
    findSmallAndLarge(arr, n);

    return 0;
}