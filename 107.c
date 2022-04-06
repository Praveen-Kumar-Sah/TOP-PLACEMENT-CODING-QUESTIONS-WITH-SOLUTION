// Write a program to sort the array
#include<stdio.h>

void sort(int arr[], int n){

    int i, j;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
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
    printf("The original array is : ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    // sorting
    printf("\nAfter sorting the array is : ");
    sort(arr, n);
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}