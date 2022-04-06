// Write a program to convert an array into zig-zag fasion
#include<stdio.h>
#include<stdbool.h>

void swap(int *x, int *y){

    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void convertIntoZigZag(int arr[], int n){

    int i;
    bool flag = true;
    for(i=0; i<=n-2; i++){
        if(flag){
            if(arr[i] > arr[i+1])
                swap(&arr[i], &arr[i+1]);
        }
        else{
            if(arr[i] < arr[i+1])
                swap(&arr[i], &arr[i+1]);
        }
        flag = !flag;
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

    // calling function
    convertIntoZigZag(arr, n);
    printf("\nAfter converting the array inti zig-zag fasion : ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}