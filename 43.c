// Find the given the value of x and y belogs to which quadrant.
#include<stdio.h>

int main(){

    int x, y;
    printf("Enter the value of x and y : ");
    scanf("%d %d", &x, &y);

    // logic
    if(x > 0 && y > 0){
        printf("1st Quadrant");
    }
    else if(x < 0 && y > 0){
        printf("2nd Quadrant");
    }
    else if(x < 0 && y < 0){
        printf("3rd Quadrant");
    }
    else if(x > 0 && y < 0){
        printf("4th Quadrant");
    }
    else{
        printf("Lies on Origin");
    }
    
    return 0;
}