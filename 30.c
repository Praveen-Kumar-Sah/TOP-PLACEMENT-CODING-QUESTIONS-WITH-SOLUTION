// Write a Program to find the all factors of given number
// Ex :- 15 -> 1, 3, 5, 15 
#include<stdio.h>

void factor(int n){

    int i;
    printf("The factors of %d id = ", n);
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d ", i);
        }
    }
}

int main(){

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    // calling function
    factor(num);

    return 0;
}