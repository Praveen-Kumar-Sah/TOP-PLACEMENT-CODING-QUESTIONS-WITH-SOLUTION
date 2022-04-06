// Write a program to count the possible decoding of the given number
#include<stdio.h>
#include<string.h>

int countDecoding(char *digit, int n){

    int i, count[n+1];
    count[0] = 1;
    count[1] = 1;

    for(i=2; i<=n; i++){
        count[i] = 0;

        if(digit[i-1] > '0')
            count[i] = count[i-1];

        if(digit[i-2] == '1' || (digit[i-2] == '2' && digit[i-1] < '7'))
            count[i] = count[i] + count[i-2];
    }
    return count[n];
}

int main(){

    char digit[15];
    printf("Enter the digit : ");
    gets(digit);

    // calling function
    int size = strlen(digit);
    printf("Possible count of decoding sequence : %d", countDecoding(digit, size));

    return 0;
}
