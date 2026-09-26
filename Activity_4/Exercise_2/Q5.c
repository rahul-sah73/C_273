// 3.Write a function power, which calculates xy. Write another function,
// which calculates n! Using For loop. Use these functions to calculate
// the sum of first n terms of the Taylor series:
//               x3	x5
// sin(x) = x - 	  +	    + .....
//               3!	5!
#include <stdio.h>
double power(double base, int exp) {
    double result = 1.0;
    int i;
    for (i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
double factorial(int n) {
    double fact = 1.0;
    int i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
double taylor_sin(double x, int n_terms) {
    double sum = 0.0;
    int i, term_count;
    
    for (i = 0, term_count = 1; term_count <= n_terms; i++, term_count++) {
        int power_val = 2 * i + 1; 
        double term = power(x, power_val) / factorial(power_val);
        
        if (i % 2 == 0) {
            sum += term;
        } else {
            sum -= term;
        }
    }
    return sum;
}

int main() {
    double x;
    int n_terms;
    
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n_terms);
    
    double result = taylor_sin(x, n_terms);
    printf("sin(%.2f) approximated with %d terms is: %.6f\n", x, n_terms, result);
    
    return 0;
}


