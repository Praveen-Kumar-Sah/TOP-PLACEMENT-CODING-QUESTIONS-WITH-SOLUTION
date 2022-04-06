// Write a Program to find the number of hand-shake between students (nC2) = n * (n-1)/2
#include<stdio.h>

int main(){

    int n;
    printf("Enter the number of students present : ");
    scanf("%d", &n);

    // logic;
    int shake;
    shake = n * (n - 1)/2;
    printf("Number of hand shake between %d students is = %d", n, shake);
    
    return 0;
}