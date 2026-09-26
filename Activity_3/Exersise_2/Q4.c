// 1.Write a program to display all Armstrong numbers between 1 and 500.
// (An Armstrong number is a number such that the sum of cube of digits = 
// number itself. Ex. 153 = 1*1*1 + 5*5*5 + 3*3*3

#include <stdio.h>
int main() {
    int i, num, digit, sum;
    printf("Armstrong numbers between 1 and 500 are:\n");
    for (i = 1; i <= 500; i++) {
        num = i;
        sum = 0;
        while (num > 0) {
            digit = num % 10;
            sum += digit * digit * digit;
            num /= 10;
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}