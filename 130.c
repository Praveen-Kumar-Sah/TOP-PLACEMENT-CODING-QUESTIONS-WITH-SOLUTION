// Write a program to rotate the array in right side
#include<stdio.h>

void rightRotation(int arr[], int n, int time){

    int i, j, last;
    for(i=0; i<time; i++){
        last = arr[n-1];
        for(j=n-1; j>0; j--){
            arr[j] = arr[j-1];
        }
        arr[0] = last;
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

    rightRotation(arr, n, time);
    printf("After rotation the array : ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}