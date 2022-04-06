// Write a program to find the maximum product subarray in an array
#include<stdio.h>

int max(int x, int y){

    return (x > y ? x : y);
}

int min(int x, int y){

    return (x < y ? x : y);
}

int maxProdcut(int arr[], int n){

    int maxend = 0, minend = 0, maxupto = 0;
    int i;
    for(i=0; i<n; i++){
        int tmp = maxend;
        maxend = max(arr[i], max(arr[i] * maxend, arr[i] * minend));
        minend = min(arr[i], min(arr[i] * tmp, arr[i] * minend));
        maxupto = max(maxupto, maxend);
    }

    return maxupto;
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

    // caaling the function
    printf("\nMaximum product of sub array in the given array is : %d", maxProdcut(arr, n));

    return 0;
}