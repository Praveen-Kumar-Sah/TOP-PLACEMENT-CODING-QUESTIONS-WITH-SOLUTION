// Write a program to rearrange the array negative and positive
#include<stdio.h>

void swap(int *x, int *y){

    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void rearraneg(int arr[], int n){

    int i, j = 0;
    for(i=0; i<n; i++){
        if(arr[i] < 0){
            if(i != j){
                swap(&arr[i], &arr[j]);
            }
            j++;
        }
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
    rearraneg(arr, n);
    printf("\nAfter rearranging the array : ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}