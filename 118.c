// Write a program to count the number of even and odd element in the array
#include<stdio.h>

void countEvenOdd(int arr[], int n){

    int i, ceven = 0, codd = 0;
    for(i=0; i<n; i++){
        if(arr[i]%2 == 0){
            ceven = ceven + 1;
        }
        else{
            codd = codd + 1;
        }
    }
    printf("\nThe number of even elements in the array is : %d", ceven);
    printf("\nThe number of odd elements in the array is : %d", codd);
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
    countEvenOdd(arr, n);

    return 0;
}