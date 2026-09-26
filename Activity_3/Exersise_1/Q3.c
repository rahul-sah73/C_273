// Write a program to accept two integers x and n and compute x^n

#include <stdio.h>
int main() {
    int x, n, result = 1, i;
    printf("Enter two integers x and n: ");
    scanf("%d %d", &x, &n);
    for(i = 0; i < n; i++) {
        result *= x;
    }
    printf("%d raised to the power of %d is: %d\n", x, n, result);
    return 0;
}