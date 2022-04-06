// Write a program to rotate the array in left side
#include<stdio.h>

void leftRotation(int arr[], int n, int time){

    int i, j, first;
    for(i=0; i<time; i++){
        first = arr[0];
        for(j=0; j<n-1; j++){
            arr[j] = arr[j+1];
        }
        arr[j] = first;
    }
}

int main(){

    int n;
    printf("Enter size of the array : ");
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

    // calling the function
    int time;
    printf("\nEnter the number of times array will rotate : ");
    scanf("%d", &time);

    leftRotation(arr, n, time);
    printf("After rotation the array : ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}