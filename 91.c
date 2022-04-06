// Write a program to count common subsequences in two string
#include<stdio.h>
#include<string.h>

int countSeq(char str1[], char str2[]){

    int n1 = strlen(str1);
    int n2 = strlen(str2);
    int cnt[n1 + n2][n2+1];
    int i, j;

    for(i=0; i<=n1; i++){
        for(j=0; j<=n2; j++){
            cnt[i][j] = 0;
        }
    }

    for(i=1; i<=n1; i++){
        for(j=1; j<=n2; j++){
            if(str1[i-1] == str2[j-1]){
                cnt[i][j] = 1 + cnt[i][j-1] + cnt[i-1][j];
            }
            else{
                cnt[i][j] = cnt[i][j-1] + cnt[i-1][j] - cnt[i-1][j-1];
            }
        }
    }

    return cnt[n1][n2];
}

int main(){

    char str1[20], str2[20];
    printf("Enter first string : ");
    gets(str1);
    printf("Enter second string : ");
    gets(str2);

    // calling function
    printf("Total number of common sub-sequence is : %d", countSeq(str1, str2));

    return 0;
}