// Write a program to insert an element at the given position in the array
#include<stdio.h>

int addAtPos(int arr[], int size, int pos, int data){

    int i;
    if(pos > size+1){
        printf("The position does not exist !!");
    }
    else{
        for(i=size; i>=pos ;i--){
            arr[i] = arr[i-1];
        }
        arr[pos-1] = data;

        return size+1;
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

    // insertion
    int pos, ele;
    printf("\nEnter the position : ");
    scanf("%d", &pos);
    printf("Enter the element which you want to insert : ");
    scanf("%d", &ele);

    addAtPos(arr, n, pos, ele);
    printf("\nAfter insertion the array is : ");
    display(arr, n+1);
}