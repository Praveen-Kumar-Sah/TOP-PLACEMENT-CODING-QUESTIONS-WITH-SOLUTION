// Write a program to sort the array according to frequency of elements
#include<stdio.h>

int main(){

    int k = 0, tmp, count, n;
    printf("Enter size of the array : ");
    scanf("%d", &n);

    int arr[n][2], mp[n][2], i, j;
    printf("Enter elements in the array : ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i][0]);
        arr[i][1] = 0;
    }

    for(i=0; i<n; i++){
        if(arr[i][1])
            continue;

        count = 1;
        for(j=i+1; j<n; j++){
            if(arr[i][0] == arr[j][0]){
                arr[j][1] = 1;
                count++;
            }
        }

        mp[k][0] = arr[i][0];
        mp[k][1] = count;
        k++;
    }
    n = k;

    for(i=0; i<n; i++){
        tmp = mp[i][1];
        for(j=i+1; j<n; j++){
            if(tmp < mp[j][1]){
                tmp = mp[j][1];
                mp[j][1] = mp[i][1];
                mp[i][1] = tmp;

                tmp = mp[j][0];
                mp[j][0] = mp[i][0];
                mp[i][0] = tmp;
            }
        }
    }

    printf("\nSorted array based on frequency : ");
    for(i=0; i<n; i++){
        while(mp[i][1] != 0){
            printf("%d ", mp[i][0]);
            mp[i][1]--;
        }
    }

    return 0;
}