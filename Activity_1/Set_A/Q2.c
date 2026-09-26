//  Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin (K) (Hint: C=5/9(F-32), K = C + 273.15)

#include<stdio.h>
int main(){

    float F , C  , K ;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &F);

    C = 5.0/9.0 * (F - 32);
    K = C + 273.15; 

    printf("Temperature in Celsius: %.2f\n", C);
    printf("Temperature in Kelvin: %.2f\n", K);


    return 0;
}
