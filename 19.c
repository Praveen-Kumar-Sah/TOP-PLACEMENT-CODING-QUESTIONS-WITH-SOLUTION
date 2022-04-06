// Write a program to check whether a year is leap-year or not
#include<stdio.h>

int main(){

    int year;
    printf("Enter the year : ");
    scanf("%d", &year);

    // logic
    if((year % 4 == 0) && (year % 400 == 0 || year % 100 != 0)){
        printf("%d is a leap Year", year);
    }
    else{
        printf("%d is not a leap Year", year);
    }

    return 0;
}