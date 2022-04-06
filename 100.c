// Write a program to search the element position in the array
#include<stdio.h>

int main(){

    int n;
    printf("Enter the size of array : ");
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

    // search element
    int ele;
    printf("\nEnter element which you want to search : ");
    scanf("%d", &ele);

    printf("\nThe given element %d is at position : ", ele);
    for(i=0; i<n; i++){
        if(arr[i] == ele){
            printf("%d", i+1);
        }
    }
    
    return 0;
}