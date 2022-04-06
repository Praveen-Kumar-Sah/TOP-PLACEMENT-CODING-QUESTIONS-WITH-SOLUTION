// Write a program to find the equilibrium index in array
#include<stdio.h>

int equilibriumIndex(int arr[], int n){

    int sum = 0;
    int leftsum = 0;

    int i;
    for(i=0; i<n; i++){
        sum = sum + arr[i];
    }

    for(i=0; i<n; i++){
        sum = sum - arr[i];

        if(leftsum == sum)
            return i;

        leftsum = leftsum + arr[i];
    }
    return -1;
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
    printf("\nThe equilibrium index in given array is : %d", equilibriumIndex(arr, n));

    return 0;
}