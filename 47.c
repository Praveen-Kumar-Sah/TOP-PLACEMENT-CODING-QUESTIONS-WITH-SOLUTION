// Write a program to check the number having 9 divisor between range
// 36 = 1,2,3,4,6,9,12,18,36
// 100 = 1,2,4,5,10,20,25,50,100
#include<stdio.h>

int divisor(int num){

    int i, count=0;
    for(i=1; i<=num; i++){
        if(num % i == 0){
            count = count+1;
        }
    }
    return count;
}

void coutn9visisor(int num){

    int count=0, i;
    for(i=1; i<=num; i++){
        if(divisor(i) == 9){
            printf("%d ", i);
            //count = count+1;
        }
    }
    // printf("\nTotal = %d", count);
}

int main(){

    int n;
    printf("Enter the ending range : ");
    scanf("%d", &n);

    // calling function
    printf("The number which has 9 divisor : ");
    coutn9visisor(n);

    return 0;
}