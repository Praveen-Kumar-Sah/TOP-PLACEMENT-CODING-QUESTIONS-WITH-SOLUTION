// Write a program to find the minimum scaler product of two veactor
// There will be two array and we have to sort the array.
// First array in Ascending oreder and Second array in discending order
#include<stdio.h> 

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

void sort_des(int arr[], int n){

    int i, j;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] < arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}


int main(){

    int n;
    printf("Enter size of the array which will be same for both : ");
    scanf("%d", &n);

    int arr1[n], arr2[n], i;

    printf("Enter elements in the first array : ");
    for(i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements in the second array : ");
    for(i=0; i<n; i++){
        scanf("%d", &arr2[i]);
    }

    printf("The first original array is : ");
    for(i=0; i<n; i++){
        printf("%d ", arr1[i]);
    }

    printf("\nThe second original array is : ");
    for(i=0; i<n; i++){
        printf("%d ", arr2[i]);
    }

   printf("\nAfter sorting the 1st array in ascending order is : ");
    sort(arr1, n);
    for(i=0; i<n; i++){
        printf("%d ", arr1[i]);
    }

    printf("\nAfter sorting the 2nd array in descending order is : ");
    sort_des(arr2, n);
    for(i=0; i<n; i++){
        printf("%d ", arr2[i]);
    }

    // minimum scaler sum product of arr1 and arr2
    int sum = 0;
    printf("\nThe minimum scaler product of arr1 and arr2 : ");
    for(i=0; i<n; i++){
        sum = sum + (arr1[i] * arr2[i]);
    }
    printf("%d", sum);

    return 0;
}