// Program to move all negative elements in the array in one side
#include<stdio.h>

void moveNegative(int arr[], int n){

    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            if(i != j){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
            j++;
        }
    }
}

void display(int arr[], int n){

    for(int i=0; i<n; i++){
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

    printf("\nAfter movig the negative elements the array is : ");
    moveNegative(arr, n);
    display(arr, n);

    return 0;
}