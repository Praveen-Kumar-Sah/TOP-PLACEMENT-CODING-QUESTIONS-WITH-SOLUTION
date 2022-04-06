// Write a program to find the second smallest element in the array
#include<stdio.h>

void secondSmallest(int arr[], int n){

    int i;
    int small = arr[0];
    int secondSmall = arr[0];

    for(i=0; i<n; i++){
        if(arr[i] < small){
            secondSmall = small;
            small = arr[i];
        }
        if(arr[i] > small && arr[i] < secondSmall)
            secondSmall = arr[i];
    }
    printf("%d", secondSmall);
}

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

    // finding the smallest
    printf("\nThe second smallest element in the array is : ");
    secondSmallest(arr, n);

    return 0;
}