// Write a program to find the sum of n natural numbers
#include<stdio.h>

int main(){

    int n;
    printf("Enter the n natural number : ");
    scanf("%d", &n);

    int sum = 0, i;
    // logic
    for(i=1; i<=n; i++){
        sum = sum + i;
    }
    printf("\nSum n natural numbers is = %d", sum);

    return 0;
}
