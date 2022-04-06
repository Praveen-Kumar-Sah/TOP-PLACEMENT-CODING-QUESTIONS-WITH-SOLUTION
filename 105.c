// Program to find the sum of perfect square of elements in the array
#include<stdio.h>
#include<math.h>

int isPerfectSquare(int num){

    int ivar;
    float fvar;

    fvar = sqrt((double)num);
    ivar = fvar;

    if(ivar == fvar)
        return num;
    else
        return 0;
}

int main(){

    int n, i;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements in the array : ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The orirginal array is : ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    // finding the sum
    int sum = 0;
    for(i=0; i<n; i++){
        sum = sum + isPerfectSquare(arr[i]);
    }
    printf("\nThe sum of perfect square of number in array is : %d", sum);

    return 0;
}