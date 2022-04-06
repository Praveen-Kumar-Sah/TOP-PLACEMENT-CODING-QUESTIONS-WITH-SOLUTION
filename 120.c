// Write a program to find the symetric term in the array
#include<stdio.h>

void symetricInArray(int arr1[], int arr2[], int m, int n){

    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(arr1[i] == arr2[j] && arr2[j] == arr1[i]){
                printf("(%d, %d)\n", arr1[i], arr2[j]);
            }
        }
    }
}

int main(){

    int n, m;
    printf("Enter size of the array1 and array2 : ");
    scanf("%d %d", &n, &m);

    int arr1[n], arr2[m], i;
    printf("Enter elements in the first array : ");
    for(i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements in the second array : ");
    for(i=0; i<m; i++){
        scanf("%d", &arr2[i]);
    }

    printf("The original first array is : ");
    for(i=0; i<n; i++){
        printf("%d ", arr1[i]);
    }

    printf("\nThe original second array is : ");
    for(i=0; i<m; i++){
        printf("%d ", arr2[i]);
    }

    // calling function
    printf("\nThe symetric element in both array is : ");
    symetricInArray(arr1, arr2, n, m);

    return 0;
}