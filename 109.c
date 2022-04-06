// Write a program to find the longest palindrome in the array
#include<stdio.h>

int main(){

    int n, i, j;
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

    // sort the array
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    // finding palindrome
    int rem;
    for(i=n; i>=0; i--){
        int temp = arr[i], sum = 0;
        while(arr[i] != 0){
            rem = arr[i] % 10;
            sum = sum * 10 + rem;
            arr[i] = arr[i] / 10;
        }

        if(temp == sum){
            printf("\nLargest palindrome in array is : %d", temp);
            break;
        }
    }

    return 0;
}