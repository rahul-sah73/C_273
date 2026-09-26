// Write a program to accept an integer and reverse the number. Example: Input: 546, Reverse = 645.

#include <stdio.h>
int main() {
    int n, reversed = 0, digit;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while(n != 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    printf("Reversed number is: %d\n", reversed);
    return 0;
}