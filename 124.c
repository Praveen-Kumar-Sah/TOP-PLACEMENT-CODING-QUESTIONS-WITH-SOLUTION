// Write a program to find the sum of minimum absolute difference in array
#include<stdio.h>
#include<math.h>

int min(int x, int y){

    return (x < y ? x : y);
}

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

int minSum(int arr[], int n){
    
    int sum = 0, i;

    sum = sum + abs(arr[0] - arr[1]);
    sum = sum + abs(arr[n-1] - arr[n-2]);

    for(i=1; i<n-1; i++){
        sum = sum + min(abs(arr[i] - arr[i-1]), abs(arr[i] - arr[i+1]));
    }

    return sum;
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
    sort(arr, n);
    printf("\nThe sum of minimum absolute difference of the given array is : %d", minSum(arr, n));
    return 0;
}