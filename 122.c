// Write a program to check the given two array are disjoint or not
#include<stdio.h>

int disJoint(int arr1[], int arr2[], int m, int n){

    int i, j;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(arr1[i] == arr2[j])
                return -1;
        }
    }
    return 1;
}

int main(){

    int m, n;
    printf("Enter size of both array : ");
    scanf("%d %d", &m, &n);

    int arr1[m], arr2[n], i;
    printf("Enter elements in first array : ");
    for(i=0; i<m; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements in second array : ");
    for(i=0; i<n; i++){
        scanf("%d", &arr2[i]);
    }

    printf("The original first array : ");
    for(i=0; i<m; i++){
        printf("%d ", arr1[i]);
    }
    
    printf("\nThe original second array : ");
    for(i=0; i<n; i++){
        printf("%d ", arr2[i]);
    }

    int res = disJoint(arr1, arr2, m, n);
    if(res == -1){
        printf("\nThe arrays are not disjoint");
    }
    else{
        printf("\nThe arrays are disjoint");
    }
    
    return 0;
}