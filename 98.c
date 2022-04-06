// Write a program to delete element at the end in the array
#include<stdio.h>

void delAtEnd(int arr[], int size){

    int i;
    size--;
    for(i=0; i<size; i++){
        arr[i] = arr[i];
    }
}

void display(int arr[], int size){

    int i;
    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
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
    display(arr, n);

    // calling function
    delAtEnd(arr, n);
    printf("\nAfter deletion the array is : ");
    display(arr, n-1);
    
    return 0;
}