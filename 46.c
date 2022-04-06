// Write a program to count numbers of 3s in a given range
#include<stdio.h>

int count3s(int num){

    int count = 0;
    while(num > 0){
        if(num % 10 == 3){
            count = count + 1;
        }
        num = num / 10;
    }
    return count;
}

int countInRange(int num){
    
    int i, count = 0;
    for(i=2; i<=num; i++){
        count = count + count3s(i);
    }
    return count;
}

int main(){

    int n;
    printf("Enter the ending point : ");
    scanf("%d", &n);

    printf("Number of 3s present in between 1 to %d is = %d", n, countInRange(n));

    return 0;
}