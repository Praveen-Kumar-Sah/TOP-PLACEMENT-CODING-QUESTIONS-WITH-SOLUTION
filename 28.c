// Write aprogram to check whether anumber is abudant or not
// Abudant number:- A number if less than the sum of its all proper divisor called abudant number
#include<stdio.h>

int main(){

    int n, i, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);

    // logic
    printf("The divisor of %d is = ", n);
    for(i = 1; i<= n - 1; i++){
        if(n % i == 0){
            printf("%d ", i);
            sum  =  sum + i;
        }
    }
    printf("\nThe sum of %d divisor is = %d", n, sum);
    if(sum > n){
        printf("\n%d is an Abudant Number", n);
    }
    else{
        printf("\n%d is not an Abudant Number", n);
    }

    return 0;
}