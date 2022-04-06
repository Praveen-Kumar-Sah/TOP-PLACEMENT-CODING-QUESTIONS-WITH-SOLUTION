// Write a program to delete the element at the position in the array
#include<stdio.h>

void delAtPos(int arr[], int size, int pos){

    int i;
    if(pos > size+1){
        printf("\nThe position is out of bound");
    }
    size--;
    for(i=pos-1; i<size; i++){
        arr[i] = arr[i+1];
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
    int pos;
    printf("\nEnter the position : ");
    scanf("%d", &pos);

    delAtPos(arr, n, pos);
    printf("\nAfter deletion the array is : ");
    display(arr, n-1);
    
    return 0;
}