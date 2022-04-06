// Write a program to check whether two given array are same or not
#include<stdio.h>

void Sort(int arr[], int n){

    int i, j;
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(arr[j] < arr[i]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int sameOrNot(int arr1[], int arr2[], int n1, int n2){

    Sort(arr1, n1);
    Sort(arr2, n2);

    int i;
    for(i=0; i<n1; i++){
        if(arr1[i] != arr2[i]){
            return 0;
        }
    }
}

int main(){

    int size1, size2;
    printf("Enter the size of first and second array : ");
    scanf("%d %d", &size1, &size2);

    int arr1[size1], arr2[size2], i;

    printf("Enter the element in first array : ");
    for(i=0; i<size1; i++){
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the element in second array : ");
    for(i=0; i<size2; i++){
        scanf("%d", &arr2[i]);
    }

    // displaying the array
    printf("The First array is : ");
    for(i=0; i<size1; i++){
        printf("%d ", arr1[i]);
    }
    printf("\nThe Second array is : ");
    for(i=0; i<size2; i++){
        printf("%d ", arr2[i]);
    }

    // calling function
    if(sameOrNot(arr1, arr2, size1, size2) == 0){
        printf("\nNot Same Array");
    }
    else{
        printf("\nBoth are Same Array");
    }

    return 0;
}