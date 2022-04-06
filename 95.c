// Write a program to insert an element at the end in the array
#include<stdio.h>

int addAtEnd(int arr[], int size, int data){

    int i;
    for(i=size-1; i>=0; i--){
        arr[i] = arr[i];
    }
    arr[size] = data;

    return size+1;
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
    printf("Enter the elements in the array : ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("The original array is : ");
    display(arr, n);

    // insertion
    int ele;
    printf("\nEnter the element which you want to insert : ");
    scanf("%d", &ele);

    addAtEnd(arr, n, ele);
    printf("\nAfter insertion the array is : ");
    display(arr, n+1);

    return 0;
}