// Write a program to merge two sorted array in single array
#include<stdio.h>

void merge(int arr1[], int arr2[], int arr3[], int n1, int n2){

    int i, j, k;
    i = j = k = 0;
    for(i=0; i<n1 && i<n2; i++){
        if(arr1[i] < arr2[i]){
            arr3[k++] = arr1[i];
        }
        else{
            arr3[k++] = arr2[i];
        }
    }
    while(i < n1){
        arr3[k++] = arr1[i++];
    }
    while(j < n2){
        arr3[k++] = arr2[j++];
    }
}

int main(){

    int n1, n2;
    printf("Enter size of first and second array : ");
    scanf("%d %d", &n1, &n2);

    int arr1[n1], arr2[n2], i;
    printf("Enter elements in first array in sorted form : ");
    for(i=0; i<n1; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements in second array in sorted form : ");
    for(i=0; i<n2; i++){
        scanf("%d", &arr2[i]);
    }

    printf("The first sorted array is : ");
    for(i=0; i<n1; i++){
        printf("%d ", arr1[i]);
    }
    printf("\nThe second sorted array is : ");
    for(i=0; i<n2; i++){
        printf("%d ", arr2[i]);
    }

    // calling the function
    int arr3[n1+n2];
    merge(arr1, arr2, arr3, n1, n2);
    printf("\nAfter merginf the both array : ");
    for(i=0; i<n1+n2; i++){
        printf("%d ", arr3[i]);
    }

    return 0;
}