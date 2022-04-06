// Program to find the union and intersection of two array
#include<stdio.h>

void printUnion(int arr1[], int arr2[], int m, int n){

    int i=0, j=0;

    while(i<m && j<n){
        if(arr1[i] < arr2[j]){
            printf("%d ", arr1[i++]);
        }
        
        else if(arr2[j] < arr1[i]){
            printf("%d ", arr2[j++]);
        }
        
        else{
            printf("%d ", arr2[j++]);
            i++;
        }
    }

    while(i < m){
        printf("%d ", arr1[i++]);
    }

    while(j < n){
        printf("%d ", arr2[j++]);
    }
}

void printIntersection(int arr1[], int arr2[], int m, int n){

    int i=0, j=0;
    while(i < m && j < n){
        if(arr1[i] < arr2[j])
            i++;

        else if(arr2[j] < arr1[i])
            j++;
            
        else{
            printf("%d ", arr2[j]);
            i++;
            j++;
        }
    }
}

void display(int arr[], int size){

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
}

int main(){

    int m, n;
    printf("Enter the size of the first and second array : ");
    scanf("%d %d", &m, &n);

    int arr1[m], arr2[n];
    printf("Enter the elements in first array : ");
    for(int i=0; i<m; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements in second array : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr2[i]);
    }

    printf("The first array : ");
    display(arr1, m);
    printf("\nThe second array : ");
    display(arr2, n);

    printf("\nThe union of given two array is : ");
    printUnion(arr1, arr2, m, n);

    printf("\nThe intersection of given two array is : ");
    printIntersection(arr1, arr2, m, n);

    return 0;
}