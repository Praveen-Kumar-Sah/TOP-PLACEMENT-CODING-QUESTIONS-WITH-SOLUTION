// Write a program to check the given array is subset of another array
#include<stdio.h>
#include<stdbool.h>

bool subsetArray(int arr1[], int arr2[], int m, int n){

    int i, j;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(arr1[i] == arr2[j])
                break;
        }
        if(j == m)
            return false;
    }
    return true;
}

int main(){

    int m;
    printf("Enter size of the array : ");
    scanf("%d", &m);

    int arr1[m], i;
    printf("Enter elements in original array : ");
    for(i=0; i<m; i++){
        scanf("%d", &arr1[i]);
    }

    printf("The original array : ");
    for(i=0; i<m; i++){
        printf("%d ", arr1[i]);
    }
    
    // sub array
    int n;
    printf("\nEnter size of sub-array : ");
    scanf("%d", &n);

    int arr2[n];
    printf("Enter elements in the sub-array : ");
    for(i=0; i<n; i++){
        scanf("%d", &arr2[i]);
    }

    printf("The sub-array is : ");
    for(i=0; i<n; i++){
        printf("%d ", arr2[i]);
    }

    // calling function
    if(subsetArray(arr1, arr2, m, n)){
        printf("\nArray 2 is the sub array of array 1");
    }
    else{
        printf("\nArray 2 is not the sub array of array 1");
    }

    return 0;
}