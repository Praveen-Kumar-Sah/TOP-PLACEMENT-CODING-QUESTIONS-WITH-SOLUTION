// Write a program to find median of two sorted array
#include<stdio.h>

int getMedian(int arr1[], int arr2[], int n){

    int i = 0, j = 0, count;
    int m1 = -1, m2 = -1;
    for(count=0; count<=n; count++){
        
        if(i == n){
            m1 = m2;
            m2 = arr2[0];
            break;
        }
        else if(j == n){
            m1 = m2;
            m2 = arr1[0];
            break;
        }
        
        if(arr1[i] <= arr2[j]){
            m1 = m2;
            m2 = arr1[i];
            i++;
        }
        else{
            m1 = m2;
            m2 = arr2[j];
            j++;
        }
    } 
    return (m1+m2)/2;
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

    // finding median
    if(n1 == n2){
        printf("\nThe median in array is : %d", getMedian(arr1, arr2, n1));
    }
    else{
        printf("\nDoes not work for array whcih have unequal size");
    }
    
    return 0;
}