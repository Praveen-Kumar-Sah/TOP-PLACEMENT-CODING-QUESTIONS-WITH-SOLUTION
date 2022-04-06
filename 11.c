// Write a program to find the greatest among two number using conditional and ternary
#include<stdio.h>

// conditional statement
int greatestTwo(int a, int b){

    //logic
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

// ternary operator
void greatestTeranary(int a, int b){

    // logic
    int max = (a > b) ? a : b;
    printf("\nGreatest among %d and %d is = %d", a, b, max);
}

int main(){

    int x, y;
    printf("Enter two numbers : ");
    scanf("%d %d", &x, &y);

    // calling function
    printf("\nGreatest among %d and %d is = %d", x, y, greatestTwo(x, y));
    greatestTeranary(x, y);

    return 0;
}