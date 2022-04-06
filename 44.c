// Write a program to find the number of day in a given month and year
#include<stdio.h>

int main(){
    
    int month, year;
    printf("Enter the Month and Year : ");
    scanf("%d %d", &month, &year);

    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        printf("Number of the day 31");
    }
    else if((month == 2) && ((year % 4 == 0) && (year % 400 == 0 || year % 100 != 0))){
        printf("Number of the day 29");
    }
    else if(month == 2){
        printf("Number of the day 28");
    }
    else{
        printf("Number of the day 30");
    }

    return 0;
}
