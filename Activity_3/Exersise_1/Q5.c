// Write a program to accept an integer and check if it is prime or not.
#include <stdio.h>
int main() {
    int n, i, isPrime = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if(n <= 1) {
        isPrime = 0;
    } else {
        for(i = 2; i <= n/2; i++) {
            if(n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if(isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}