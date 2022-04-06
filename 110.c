// Write a program to find the non-repeating or unique elements in the array 
// non-repeating, distince or unique all are same
#include<stdio.h>

void uniqueEle(int arr[], int n){

    int i, j, count = 1;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(arr[i] == arr[j]  && i != j){
                break;
            }
        }
        if(j == n){
            printf("%d ", arr[i]);
            count++;
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
    printf("\nUnique elements in the array is : ");
    uniqueEle(arr, n);

    return 0;
}