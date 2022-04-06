// Write a Program to find the all Armstrong number in a range.
#include<stdio.h>

void armstrong(int lower, int upper){

    int i;
    for(i = lower + 1; i < upper; i++){
        //int x = i;
        int y = i;
        //int n = 0;

       /* while(x != 0){
            x = x / 10;
            n = n + 1;
        }*/
        
        int sum = 0, rem;
        while(y != 0){
            rem = y % 10;
            sum = sum + (rem * rem * rem);
            y = y / 10;
        }

        if(sum == i){
            printf("%d ", i);
        }
    }
}

int main(){

    int lower, upper;
    printf("Enter two number : ");
    scanf("%d %d", &lower, &upper);

    //calling
    printf("The armstrong number between %d and %d is = ", lower, upper);
    armstrong(lower, upper);

    return 0;
}