// Write a program to find the sum between given range
#include<stdio.h>

int main(){

    int start, end;
    printf("Enter the starting and ending point : ");
    scanf("%d %d", &start, &end);

    int sum = 0, i;
    // logic
    for(i=start; i<=end; i++){
        sum = sum + i; 
    }
    printf("\nSum of the number between given range is = %d", sum);

    return 0;
}