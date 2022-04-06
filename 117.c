// Write a program to find all triplate sum of elements in an array
#include<stdio.h>
#include<stdbool.h>

void triplateSum(int arr[], int n, int sum){

    int i, j, k;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            for(k=j+1; k<n; k++){
                if(arr[i] + arr[j] + arr[k] == sum){
                    printf("%d %d %d\n", arr[i], arr[j], arr[k]);
                }
            }
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

    // calling function
    int sum;
    printf("\nEnter the sum : ");
    scanf("%d", &sum);

    printf("Triplate sum in given array is : \n");
    triplateSum(arr, n, sum);

    return 0;
}