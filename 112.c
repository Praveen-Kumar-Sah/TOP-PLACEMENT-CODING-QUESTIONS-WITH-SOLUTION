// Write a program to find and remove repeating or duplicate element in the array
#include<stdio.h>

void removerepeatingEle(int arr[], int n){

    int i, j, k;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                for(k=j; k<n-1; k++){
                    arr[k] = arr[k+1];
                }
                j--;
                n--;
            }
        }
        printf("%d ", arr[i]);
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
    printf("\nAfter removing Repeating elements in the array is : ");
    removerepeatingEle(arr, n);

    return 0;
}