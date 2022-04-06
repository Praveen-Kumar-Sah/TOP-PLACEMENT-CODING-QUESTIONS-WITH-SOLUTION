// LEVEL-2

// Find the all prime number between a range

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int num){

    int i;
    for(i = 2; i < num ; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;    
}  

int main(){

    int beg, end, i;
    printf("Enter the Lower and Upper bound : ");
    scanf("%d %d", &beg, &end);

    // logic
    printf("The Prime number between %d and %d is = ", beg, end);
    for(i = beg; i <= end; i++){
        if(isPrime(i)){
            printf("%d ", i);
        }
    }
    return 0;
}