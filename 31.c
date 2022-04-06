// Find the sum of two fraction and display the result
// Ex :- 1/2 + 3/2 => 4/2 => 2/1 result
#include<stdio.h>

int main(){

    int a, b, c, d;
    printf("Enter the numerator of first number : ");
    scanf("%d", &a);
    printf("Enter the denumberator of first number : ");
    scanf("%d", &b);
    printf("Enter the numerator of second number : ");
    scanf("%d", &c);
    printf("Enter the denumberator of second number : ");
    scanf("%d", &d);

    // logic 
    int x, y, gcd = 1;
    x = (a * d) + (b * c);
    y = b * d;

    int i;
    for(i = 1; i <= x && i <= y; i++){
        if(x % i == 0 && y % i == 0){
            gcd = i;
        }
    }
    printf("Sum of fraction %d, %d", x/gcd, y/gcd);

    return 0;
}