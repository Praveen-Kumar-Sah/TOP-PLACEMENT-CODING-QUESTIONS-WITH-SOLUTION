// Write a program to find the roots of quadratic equetion
// x^2+2x+3 = 0
#include<stdio.h>
#include<math.h>

int main(){

    double a, b, c, D, root1, root2, real, img;
    printf("Enter the cofficient a, b, c : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // logic
    D = b*b-4*a*c;

    if(D > 0){
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);

        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if(D == 0){
        root1 = root2 = (-b) / (2*a);

        printf("root1 = root2 = %.2lf", root1);
    }
    else{
        real = (-b) / (2*a);
        img = (sqrt(-D)) / (2*a);

        printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2fi", real, img, real, img);
    }

    return 0;
}