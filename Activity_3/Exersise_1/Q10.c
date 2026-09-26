// 3. Write a program to accept real number x and integer n to calculate sum of
// first n terms of the Series 1	2	3x +  x 2 + x3  + ……

#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum = 0.0;
    int n, i;

    printf("Enter the value of real number (x): ");
    scanf("%lf", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    term = x; 

    for (i = 1; i <= n; i++) {
        sum += term;
        term *= x;
    }

    printf("The sum of the first %d terms is: %.4lf\n", n, sum);

    return 0;
}