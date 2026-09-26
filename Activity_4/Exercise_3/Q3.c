// 3.Write a recursive C function to calculate xy. (Do not use standard library function)
#include <stdio.h>
double power(double base, int exp) {
    if (exp == 0) {
        return 1.0; 
    } else if (exp < 0) {
        return 1.0 / power(base, -exp); 
    } else {
        return base * power(base, exp - 1); 
    }
}       

int main() {
    double base;
    int exponent;
    
    printf("Enter the base (x): ");
    scanf("%lf", &base);
    
    printf("Enter the exponent (y): ");
    scanf("%d", &exponent);
    
    double result = power(base, exponent);
    printf("%.2f raised to the power of %d is: %.6f\n", base, exponent, result);
    
    return 0;
}