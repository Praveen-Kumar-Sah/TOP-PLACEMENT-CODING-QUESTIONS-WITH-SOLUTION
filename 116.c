// Write a program to find all the missing elements in a range
#include<stdio.h>
#include<stdbool.h>

int findMissing(int arr[], int n){

    int i, total;
    total = (n+1) * (n+2) / 2;
    for(i=0; i<n; i++){
        total = total - arr[i];
    }
    return total;    
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

    // calling function
    printf("\nMissing element between the range of array : %d", findMissing(arr, n));

    return 0;
}