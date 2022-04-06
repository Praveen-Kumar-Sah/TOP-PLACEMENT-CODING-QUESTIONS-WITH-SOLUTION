// Write a program to check if the number of an array cen be made equal
#include<stdio.h>
#include<stdbool.h>

bool makeEqual(int arr[], int n){

    int i;
    for(i=0; i<n; i++){

        while(arr[i] % 2 == 0)
            arr[i] /= 2;
        
        while(arr[i] % 3 == 0)
            arr[i] /= 3;
    }
    // remaining
    for(i=1; i<n; i++){
        if(arr[i] != arr[0]){
            return false;
        }
    }
    return true;
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

    // make equal
    printf("\n");
    if(makeEqual(arr, n)){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}