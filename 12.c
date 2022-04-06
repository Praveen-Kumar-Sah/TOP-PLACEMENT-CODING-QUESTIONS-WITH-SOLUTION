// Write a program to find the greatest among three
#include<stdio.h>

// conditional statement
int greatestThree(int a, int b, int c){

    // logic 
    if((a > b) && (a > c)){
        return a;
    }
    else if((b > a) && (b > c)){
        return b;
    }
    else{
        return c;
    }
}

// ternary
void teranaryThree(int a, int b, int c){

    // logc
    int max = ((a > b)? ((a > c) ? a : c) : ((b > c) ? b : c));
    printf("\nThe Greatest among %d, %d and %d is = %d", a, b, c, max); 
}

int main(){

    int x, y, z;
    printf("Enter three numbers : ");
    scanf("%d %d %d ", &x, &y, &z);

    // calling
    printf("\nThe Greatest among %d, %d and %d is = %d", x, y, z, greatestThree(x, y, z));
    teranaryThree(x, y, z);
    return 0;
}