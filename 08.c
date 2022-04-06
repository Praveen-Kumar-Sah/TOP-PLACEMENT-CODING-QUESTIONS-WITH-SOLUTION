// Write a program to find the 1. Area of circle(pi*r*r) 2. Perimeter of circle(2*pi*r)
#include<stdio.h>

int main(){

    const float pi = 3.14;
    float  area = 0, per = 0, r;
    printf("Enter the  radius of the Circle : ");
    scanf("%f", &r);

    // logic
    area = pi * r * r;
    per = 2 * pi * r;

    printf("The Area of the Circle : %f", area);
    printf("\nThe Perimeter of the Circle : %f", per);

    return 0;
}