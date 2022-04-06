// Write a program to check the type of array means in the array only even element or odd element or mixed of both
#include<stdio.h>

int main(){

    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int arr[n], i;
    printf("Enter elements in array : ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("The array is : ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    // logic
    int even = 0, odd = 0;
    for(i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            even++;
        }
        else if(arr[i] % 2 == 1){
            odd++;
        }
    }

    if(even == n)
        printf("\nThe type of array is even");
    else if(odd == n)
        printf("\nThe type of array is odd");
    else
        printf("\nThe array is mixed of both");

    return 0;
}