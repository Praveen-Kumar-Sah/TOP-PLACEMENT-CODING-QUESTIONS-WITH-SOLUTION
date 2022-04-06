// Program to find all pairs on integer array whose sum is equal to given number
#include<stdio.h>

int getPairSumCount(int arr[], int n, int sum){

    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == sum)
                count++;
        }
    }
    return count;
}

void display(int arr[], int n){

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){

    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int arr[n], i;
    printf("Enter elements in the array : ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The original array is : ");
    display(arr, n);

    int sum;
    printf("\nEnter the sum : ");
    scanf("%d", &sum);

    // calling function
    printf("Count of pairs is : %d", getPairSumCount(arr, n, sum));
    
    return 0;
}