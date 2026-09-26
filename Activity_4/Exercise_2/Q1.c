// 1.Write a function isEven, which accepts an integer as parameter and returns 1 
// if the number is even, and 0 otherwise. Use this function in main to accept n 
// numbers and check if they are even or odd.

#include <stdio.h>

int isEven(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n, num;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    printf("Enter an integer: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (isEven(num)) {
            printf("%d is even.\n", num);
        } else {
            printf("%d is odd.\n", num);
        }
    }

    return 0;
}