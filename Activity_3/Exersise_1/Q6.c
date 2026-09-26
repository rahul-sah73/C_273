// Write a program to accept an integer, count number of digits and calculate sum of 
// digits in the number. Example: Number = 1234 Output: Digits = 4, Sum = 10

#include <stdio.h>
int main() {
    int n, count = 0, sum = 0, digit;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int temp = n;
    while(temp != 0) {
        digit = temp % 10;
        sum += digit;
        count++;
        temp /= 10;
    }
    printf("Digits = %d, Sum = %d\n", count, sum);
    return 0;
}

