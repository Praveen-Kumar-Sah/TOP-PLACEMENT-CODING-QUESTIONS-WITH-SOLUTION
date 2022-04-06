// Write a program to find the repeating or duplicate element in the array
#include<stdio.h>

void repeatingEle(int arr[], int n){

    int i, j;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                printf("%d ", arr[i]);
            }
        }
    }
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
    printf("The array is : ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    // calling function
    printf("\nRepeating elements in the array is : ");
    repeatingEle(arr, n);

    return 0;
}