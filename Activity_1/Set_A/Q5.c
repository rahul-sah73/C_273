// Accept two numbers and print arithmetic and harmonic mean of the two numbers (Hint: AM= (a+b)/2 , HM = ab/(a+b) )

#include<stdio.h>
int main(){ 

    float a , b , AM , HM ;
    printf("Enter two numbers: ");
    scanf("%f %f", &a , &b);

    AM = (a + b) / 2;
    HM = (a * b) / (a + b);

    printf("Arithmetic Mean: %.2f\n", AM);
    printf("Harmonic Mean: %.2f\n", HM);

    return 0;
}