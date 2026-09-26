// Write a program to accept real number x and integer n and calculate the sum of 
// first n terms of the series x+ 3x+5x+7x+…

#include <stdio.h>

int main() {
    float x, sum = 0.0;
    int n, i;
    printf("Enter the value of real number (x): ");
    scanf("%f", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int coefficient = 2 * i - 1; 
        sum += coefficient * x;
    }

    // Output the result
    printf("The sum of the first %d terms is: %.2f\n", n, sum);

    return 0;
}
