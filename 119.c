// Write a program to find the frequency of number in the array
#include<stdio.h>

int frequecy(int arr[], int n, int x){

    int count = 0, i;
    for(i=0; i<n; i++){ 
        if(arr[i] == x)
            count++;
    }
    return count;
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
    int x;
    printf("\nEnter a number : ");
    scanf("%d", &x);

    printf("The frequency of %d in the array is : %d", x, frequecy(arr, n, x));

    return 0;
}